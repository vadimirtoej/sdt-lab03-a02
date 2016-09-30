cmake_minimum_required(VERSION 2.8)
set(PROJECT_NAME "metro")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra -pedantic-errors")
set(INCLUDES
    metro.h
    )
set(SOURCES
    metro.cc
    input.cc
    parser.cc
    line.cc
    station.cc
    transit.cc
    output.cc
    )
add_executable(${PROJECT_NAME} ${SOURCES} ${INCLUDES})
