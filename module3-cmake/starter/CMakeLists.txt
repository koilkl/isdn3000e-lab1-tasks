# TODO: Write your CMakeLists.txt here
#
# Requirements:
# 1. Set minimum CMake version to 3.16
# 2. Create a project called "Calculator"
# 3. Set C++ standard to 17
# 4. Create an executable from src/main.cpp and src/calculator.cpp
# 5. Add include/ as an include directory
#
# Hint: You'll need these commands:
#   cmake_minimum_required()
#   project()
#   set()
#   add_executable()
#   target_include_directories()
cmake_minimum_required(VERSION 3.16)
project(Calculator LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17) 
add_executable(Calculator src/main.cpp src/calculator.cpp)
target_compile_options(Calculator PRIVATE -Wall -Wextra)
target_include_directories(Calculator PRIVATE include/)
