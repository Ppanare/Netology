cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(01)
file(GLOB SOURCES
    my_cringe.cpp
    )

add_executable(01 ${SOURCES})
