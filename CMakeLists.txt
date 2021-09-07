cmake_minimum_required(VERSION 3.19)
project(FishC C)

set(CMAKE_C_STANDARD 99)

add_executable(Fish1 test.c test1.c)
add_executable(Fish2 main1.c)
add_executable(test test/test3.c)