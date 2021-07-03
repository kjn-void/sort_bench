#include "c_sort.h"

static int compar(const void *_a, const void *_b) {
    const uint32_t *a = _a;
    const uint32_t *b = _b;
    return *a - *b;
}

void c_sort(uint32_t *v, size_t sz) {
    qsort(v, sz, sizeof *v, compar);
}
