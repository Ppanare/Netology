cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

file(GLOB SOURCES
    figures.cpp
    figures.h
    )

add_executable(project_5 ${SOURCES})
