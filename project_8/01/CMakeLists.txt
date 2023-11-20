cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

file(GLOB SOURCES
    main.cpp
    )

add_executable(01 ${SOURCES})
