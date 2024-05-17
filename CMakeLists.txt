cmake_minimum_required(VERSION 3.27)
project(text_a)

set(CMAKE_CXX_STANDARD 17)

add_executable(text_a main.cpp
        text.cpp
        text.h)
