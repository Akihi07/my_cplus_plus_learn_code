cmake_minimum_required(VERSION 3.19)
project(bookCode C)

set(CMAKE_C_STANDARD 99)

add_executable(bookCode main.c rederict_ptr.c para_allocator.c)