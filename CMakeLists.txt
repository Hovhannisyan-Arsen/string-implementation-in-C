cmake_minimum_required(VERSION 2.8)

project(c_string)

set(SOURCE_EXE main.c)

set(SOURCE_LIB c_string.c)

add_library(c_string STATIC ${SOURCE_LIB})

add_executable(main ${SOURCE_EXE})

target_link_libraries(main c_string)
