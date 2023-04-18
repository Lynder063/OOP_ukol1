cmake_minimum_required(VERSION 3.25)
project(oop)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(oop
        catch.hpp
        tests-main.cpp
        tests-tiny-05.cpp
        tiny-05.cpp
        tiny-05.hpp)
