cmake_minimum_required(VERSION 3.17)
project(dc_libs C)

set(CMAKE_C_STANDARD 11)

add_library(binary_tree STATIC libs/binary_tree.c libs/binary_tree.h)
target_compile_options(binary_tree PRIVATE)

add_library(bit_array STATIC libs/bit_array.c libs/bit_array.h)
target_compile_options(bit_array PRIVATE -Wpedantic -Wall -Wextra)

add_executable(dc_libs main.c)
target_link_libraries(dc_libs binary_tree bit_array)
target_compile_options(dc_libs PRIVATE)