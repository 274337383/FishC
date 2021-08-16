cmake_minimum_required(VERSION 3.19)
project(FishC C)

set(CMAKE_C_STANDARD 99)

add_executable(FishC main.c)
add_executable(Fish sle22/test3.c)