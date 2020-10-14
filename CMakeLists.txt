cmake_minimum_required(VERSION 3.17)
project(Plot C)

set(CMAKE_C_STANDARD 99)

add_executable(Plot interp1.c interp1.h plot.c tga.c tga.h dump.c lengthCheck.c)