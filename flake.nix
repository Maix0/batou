{
  description = "Flake utils demo";

  inputs = {
    flake-utils.url = "github:numtide/flake-utils";
    rust-overlay.url = "github:oxalica/rust-overlay";
  };

  outputs = {
    self,
    nixpkgs,
    flake-utils,
    rust-overlay,
  }:
    flake-utils.lib.eachDefaultSystem (
      system: let
        overlays = [(import rust-overlay)];
        pkgs = import nixpkgs {
          inherit system overlays;
        };
      in {
        devShell = pkgs.mkShell {
          packages = [
            pkgs.libbsd
            pkgs.clang
            pkgs.gnumake
            pkgs.rust-bin.stable.latest.default
            pkgs.valgrind
          ];
        };
      }
    );
}
