# sort_bench

Std C/C++ sort test using `qsort` from C standard library and `std::sort` from C++ standard library

## Requirements

	* CMake 3.0 or later
	* C and C++ compiler that CMake can find
	* Installation of Google Benchmark that can be located by `pkg-config`

## Build

```
➜  sort_bench git:(main) ✗ ./bootstrap.sh 
-- The C compiler identification is AppleClang 12.0.5.12050022
-- The CXX compiler identification is AppleClang 12.0.5.12050022
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE  
-- Found PkgConfig: /opt/local/bin/pkg-config (found version "0.29.2") 
-- Checking for module 'benchmark'
--   Found benchmark, version 1.5.5.14
-- Configuring done
-- Generating done
-- Build files have been written to: /Volumes/Samsung_T5/programming/c++/sort_c_cpp_bench/build/sort_bench/build
[ 25%] Building CXX object CMakeFiles/sorting.dir/src/main.cpp.o
[ 50%] Building CXX object CMakeFiles/sorting.dir/src/cpp_sort.cpp.o
[ 75%] Building C object CMakeFiles/sorting.dir/src/c_sort.c.o
[100%] Linking CXX executable sorting
[100%] Built target sorting
➜  sort_bench git:(main) ✗ cd build 
➜  build git:(main) ✗ ./sorting 
2021-07-03T21:43:14+02:00
Running ./sorting
Run on (8 X 24.0251 MHz CPU s)
CPU Caches:
  L1 Data 64 KiB (x8)
  L1 Instruction 128 KiB (x8)
  L2 Unified 4096 KiB (x8)
Load Average: 1.64, 1.79, 1.96
-----------------------------------------------------
Benchmark           Time             CPU   Iterations
-----------------------------------------------------
cpp_sort       584730 ns       584731 ns         1200
c_sort         832574 ns       832548 ns          842
```
