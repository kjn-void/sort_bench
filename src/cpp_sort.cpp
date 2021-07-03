#include "cpp_sort.hpp"
#include <algorithm>

void cpp_sort(uint32_t *v, size_t sz) {
    std::sort(v, v + sz);
}
