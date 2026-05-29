cmake_minimum_required(VERSION 3.15)

project(student-attendance-system LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(student-attendance-system src/main.cpp)
target_include_directories(student-attendance-system PRIVATE include)
