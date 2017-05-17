cmake_minimum_required(VERSION 3.6)
project(OOP244_w1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES seneGraph.h seneGraph.cpp graph.cpp graph.h tools.cpp tools.h)
add_executable(OOP244_w1 ${SOURCE_FILES})