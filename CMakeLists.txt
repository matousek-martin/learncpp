cmake_minimum_required(VERSION 3.17.5)
project(learncpp)
set(CMAKE_CXX_STANDARD 20)

# Execs
add_executable(HelloWorld "Chapter 0/HelloWorld.cpp")
add_executable(CompatibilityC17 "Chapter 0/CompatibilityC17.cpp")
add_executable(iostream "Chapter 1/iostream.cpp" "Chapter 1/operands.cpp")
add_executable(iostream2 "Chapter 1/iostream2.cpp")
add_executable(iostream3 "Chapter 1/iostream3.cpp")
add_executable(uninitialized "Chapter 1/uninitialized.cpp")
add_executable(operands "Chapter 1/operands.cpp")
add_executable(multiply_by_two "Chapter 1/multiply_by_two.cpp")

