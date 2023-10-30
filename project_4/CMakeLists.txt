cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

file(GLOB SOURCES
    ad.cpp
    ad.h
    )

add_executable(project_4 ${SOURCES})
