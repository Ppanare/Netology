cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

file(GLOB SOURCES
    Counter.cpp
    Counter.h
    main.cpp
    )

add_executable(TaskTwo ${SOURCES})
