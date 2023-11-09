cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

file(GLOB SOURCES
    cringeAlg.cpp
    cringeAlg.h
    )

add_executable(project_6 ${SOURCES})
