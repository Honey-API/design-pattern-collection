cmake_minimum_required(VERSION 3.15)
project(singleton)

set(CMAKE_CXX_STANDARD 14)

add_executable(singleton main.cpp c_singleton.cpp c_singleton.h)