cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

file(GLOB SOURCES
    task_1.cpp
    in.txt
    out.txt
    )

add_executable(project_1 ${SOURCES})
