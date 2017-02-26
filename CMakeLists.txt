cmake_minimum_required (VERSION 2.8.9)

project(SeriesFF)

include_directories(include)
set (SOURCES src/SeriesFF.cpp src/main.cpp)
add_executable(SeriesFF ${SOURCES})