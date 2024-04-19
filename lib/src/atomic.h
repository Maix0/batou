#ifndef TREE_SITTER_ATOMIC_H_
#define TREE_SITTER_ATOMIC_H_

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

static inline size_t atomic_load(const volatile size_t *p) {
  return *p;
}

static inline uint32_t atomic_inc(volatile uint32_t *p) {
  *p += 1;
  return *p;
}

static inline uint32_t atomic_dec(volatile uint32_t *p) {
  *p-= 1;
  return *p;
}

#endif  // TREE_SITTER_ATOMIC_H_
