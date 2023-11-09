cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

file(GLOB SOURCES
    figures_w.cpp
    figures_w.h
    )

add_executable(project_5 ${SOURCES})
