cmake_minimum_required(VERSION 3.25)
project(TaskManager)

set(CMAKE_CXX_STANDARD 11)

add_executable(TaskManager main.cpp Task.cpp Task.h TaskManager.cpp TaskManager.h)
