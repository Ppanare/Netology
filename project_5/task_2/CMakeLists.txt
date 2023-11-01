cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

file(GLOB SOURCES
    figures_and_sides.cpp
    figures_and_sides.h
    )

add_executable(project_4 ${SOURCES})
