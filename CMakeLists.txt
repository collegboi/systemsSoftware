cmake_minimum_required(VERSION 3.6)
project(systemssoftware)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES lab1/main.c lab1/area_of_circle.c lab1/area_of_circle.h lab1/area_of_rectangle.c lab1/area_of_rectangle.h lab1/area_of_triangle.c lab1/area_of_triangle.h lab1/roman_numerals.c lab1/roman_numerals.h)
add_executable(systemssoftware ${SOURCE_FILES})