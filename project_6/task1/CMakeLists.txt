cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

file(GLOB SOURCES
    cringeAlg.cpp
    cringeAlg.h
    main.cpp
    )

add_executable(taskOne ${SOURCES})
