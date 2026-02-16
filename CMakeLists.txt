cmake_minimum_required(VERSION 4.0)
project(project_programing)

set(CMAKE_CXX_STANDARD 20)

add_executable(project_programing main.cpp Task.h Todo.h TodoList.h Task.cpp Todo.cpp TodoList.cpp)
