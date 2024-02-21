cmake_minimum_required(VERSION 3.28)
project(Course)

set(CMAKE_CXX_STANDARD 17)

add_executable(Course main.cpp
        Dog.cpp
        Dog.h)
