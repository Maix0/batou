use std::ffi;
use std::io::Read;
use std::mem::ManuallyDrop;
use std::os::fd::{AsFd, AsRawFd, BorrowedFd, FromRawFd};
use std::sync::atomic::AtomicBool;

static READLINE_STOP: AtomicBool = AtomicBool::new(false);

fn main() {
    ctrlc::set_handler(|| {
        READLINE_STOP.store(true, std::sync::atomic::Ordering::SeqCst);
        println!("STOP!!!");
    })
    .unwrap();
    let f = std::io::stdin().lock();
    let f = f.as_fd();
    let mut state = MyReadline {
        buffer: Vec::new(),
        cursor: 0,
        early_reset: &READLINE_STOP,
        file: f,
    };
    loop {
        let mut ctrl_d = false;
        let s = mrl_get_line(&mut state, &mut ctrl_d);
        if s.is_null() {
            eprintln!("null ptr!!!");
            break;
        }
        if ctrl_d {
            eprintln!("\nCtrl-d!!!");
        }
        let cstr = unsafe { ffi::CString::from_raw(s) };
        println!("line was {}", cstr.to_str().unwrap_or("<NOT UTF8...>"));
    }

    println!("Hello, world!");
}

#[repr(C)]
#[derive(Debug, Clone)]
pub struct MyReadline<'fd> {
    /// The internal buffer
    buffer: Vec<u8>,
    /// size_t
    pub cursor: usize,
    /// int, basically a raw fd returned by open, must be a valid fd
    pub file: BorrowedFd<'fd>,
    /// if you ever get a Ctrl-C, set this boolean to true (would love
    /// for it to be an atomic... (for now it is...)
    pub early_reset: &'static AtomicBool,
}

/// Doesn't handle a prompt atm, but it should be pretty easy to do so in the future, just having
/// something that display such prompt at the start of the loop and everytime we get a Ctrl-C/early
/// reset
pub extern "C" fn mrl_get_line(state: &mut MyReadline<'_>, ctrl_d: &mut bool) -> *mut ffi::c_char {
    let mut file: ManuallyDrop<std::fs::File> = ManuallyDrop::new(unsafe {
        std::os::fd::OwnedFd::from_raw_fd(state.file.as_raw_fd()).into()
    });
    let s = &mut state.buffer;
    let mut buf = 0u8;
    *ctrl_d = true;
    while let Ok(()) = file.read_exact(std::slice::from_mut(&mut buf)) {
        if state
            .early_reset
            .swap(false, std::sync::atomic::Ordering::SeqCst)
        {
            if s.is_empty() {
                return std::ptr::null_mut();
            }
            s.clear();
            state.cursor = 0;
            continue;
        }
        if (buf & 0x80) != 0 {
            eprintln!("NOT ASCII ! {buf:#x}")
        } else {
            if buf == b'\n' {
                *ctrl_d = false;
                break;
            } else if buf == b'\x1b' {
                // ESCAPE char
                file.read_exact(std::slice::from_mut(&mut buf)).unwrap();
                if buf != b'[' {
                    eprintln!("wtf no [ after \\ESC ?");
                    continue;
                }
                file.read_exact(std::slice::from_mut(&mut buf)).unwrap();
                eprintln!("{:?}", char::from_u32(buf as u32));
            } else if buf == b'\0' {
            } else {
                s.push(buf);
            }
        }
    }
    state.buffer.push(b'\0');
    ffi::CString::from_vec_with_nul(std::mem::take(&mut state.buffer))
        .unwrap()
        .into_raw()
}
