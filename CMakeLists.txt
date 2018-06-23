cmake_minimum_required(VERSION 3.9)
project(rush00)

set(CMAKE_CXX_STANDARD 98)

add_executable(main.cpp Controller.cpp Controller.h Viewer.cpp Viewer.h Model.cpp Model.h main.cpp)