cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

file(GLOB SOURCES
    main.cpp
    squares.cpp
    squares.h
    triangles.cpp
    triangles.h
    )

add_executable(taskThree ${SOURCES})
