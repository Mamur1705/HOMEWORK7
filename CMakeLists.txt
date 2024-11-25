cmake_minimum_required(VERSION 3.29)
project(HOMEWORK7)

set(CMAKE_CXX_STANDARD 14)

add_executable(HOMEWORK7
    main.cpp
        problem1.cpp
        problem2.cpp
        problem3.cpp
        problem4.cpp
        problem5.cpp
        problems.h
        problems.h)
add_executable(problem1 problem1.cpp)
add_executable(problem2 problem2.cpp)
add_executable(problem3 problem3.cpp)
add_executable(problem4 problem4.cpp)
add_executable(problem5 problem5.cpp)
add_executable(problems problems.h)
