cmake_minimum_required(VERSION 3.18)

project(CppProject VERSION 1.0.0 LANGUAGES C CXX)

add_library(Library STATIC print_lib.cpp)

add_executable(main main.cpp)

target_link_libraries(main PUBLIC Library)