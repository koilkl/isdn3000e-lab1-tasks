cmake_minimum_required(VERSION 3.16)

project(Calculator LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create the main executable
add_executable(calculator
    src/main.cpp
    src/calculator.cpp
)

# Add include directory
target_include_directories(calculator PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

# Add compiler warnings
target_compile_options(calculator PRIVATE
    -Wall -Wextra
)
