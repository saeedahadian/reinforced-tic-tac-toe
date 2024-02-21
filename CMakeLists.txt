cmake_minimum_required(VERSION 3.22)

project(reinforced-tic-tac-toe VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(play)

target_sources(play PRIVATE main.cpp)
