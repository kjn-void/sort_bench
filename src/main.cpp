#include <algorithm>
#include <benchmark/benchmark.h>
#include <numeric>
#include <random>
#include <vector>

#include "cpp_sort.hpp"
extern "C" {
    #include "c_sort.h"
}

constexpr uint32_t VEC_SZ = 10000;

std::vector<uint32_t> make_vec() {
    std::vector<uint32_t> v(VEC_SZ);
    std::iota(v.begin(), v.end(), 0);
    return v;
}

void shuffle_vec(std::vector<uint32_t>& v) {
	std::random_device rd;
	std::mt19937 g(rd());
	std::shuffle(v.begin(), v.end(), g);
}

void cpp_sort(benchmark::State &state) {
    auto v = make_vec();
    while (state.KeepRunning()) {
        shuffle_vec(v);
        cpp_sort(v.data(), v.size());
    }
}
BENCHMARK(cpp_sort);

void c_sort(benchmark::State &state) {
    auto v = make_vec();
    while (state.KeepRunning()) {
        shuffle_vec(v);
        c_sort(v.data(), v.size());
    }
}
BENCHMARK(c_sort);

BENCHMARK_MAIN();
