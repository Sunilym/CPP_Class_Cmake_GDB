cmake_minimum_required(VERSION 3.10)

project(Shape LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

add_executable( main
main.cpp
Shape.cpp
Circle.cpp

)