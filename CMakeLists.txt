cmake_minimum_required(VERSION 3.17)
project(lab4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab4
        date.cc
        date.h
        date_test.cc
        cmake-build-debug/test.html TagRemover.cpp TagRemover.h)

add_executable(testTagRemover
        TagRemover.cpp
        TagRemover.h
        testTagRemover.cpp)
