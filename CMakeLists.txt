cmake_minimum_required(VERSION 3.0)
project(sorting C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Threads REQUIRED)
find_package(PkgConfig REQUIRED)
pkg_check_modules(LIBGBENCH REQUIRED IMPORTED_TARGET benchmark)

add_executable(sorting src/main.cpp src/cpp_sort.cpp src/c_sort.c)
target_link_libraries(sorting PUBLIC PkgConfig::LIBGBENCH Threads::Threads)
