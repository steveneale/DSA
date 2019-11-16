cmake_minimum_required(VERSION 3.0)

project(DSA-pp)

include_directories(include)

file(GLOB ARRAYS_SRC "src/arrays/*.cpp")

set(EXECUTABLE src/example.cpp)

add_executable(example.out ${EXECUTABLE} ${ARRAYS_SRC})