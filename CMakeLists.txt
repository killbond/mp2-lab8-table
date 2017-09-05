cmake_minimum_required(VERSION 3.8)
project(table)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp include/Table.h)
add_executable(table ${SOURCE_FILES})