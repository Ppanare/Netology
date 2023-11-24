cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(cringe_figures)
file(GLOB SOURCES
    CorrectTriangle.cpp
    CorrectTriangle.h
	PryamoUgolnik.cpp
    PryamoUgolnik.h
	RavnTriangle.cpp
    RavnTriangle.h
	Square.cpp
    Square.h
	Triangle.cpp
    Triangle.h
    main.cpp
    )

add_executable(cringe_figures ${SOURCES})
