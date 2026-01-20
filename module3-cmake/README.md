# Module 3: CMake

## Learning Objectives

By the end of this module, you will be able to:

1. Explain why CMake is useful for C++ projects
2. Write a basic `CMakeLists.txt` file
3. Use out-of-source builds
4. Add include directories and compiler options

---

## 🧪 Exercise: CMake Project

This is the main exercise for Module 3. You will write a CMakeLists.txt for a pre-existing C++ project.

### Step 1: Explore the Starter Project

The `starter/` folder contains a ready-to-build C++ project:

```
starter/
├── CMakeLists.txt      # <- YOU WRITE THIS
├── include/
│   └── calculator.h    # Header file
└── src/
    ├── calculator.cpp  # Implementation
    └── main.cpp        # Entry point
```

The C++ files are already complete. Your job is to write the CMakeLists.txt!

### Step 2: Your Task

Open `starter/CMakeLists.txt` and complete it. You need to:

| Task | CMake Command |
|------|---------------|
| Set minimum CMake version | `cmake_minimum_required(VERSION 3.16)` |
| Create a project | `project(Calculator LANGUAGES CXX)` |
| Set C++ standard to 17 | `set(CMAKE_CXX_STANDARD 17)` |
| Create executable | `add_executable(calculator src/main.cpp src/calculator.cpp)` |
| Add include directory | `target_include_directories(calculator PRIVATE include)` |

### Step 3: Build with CMake

```bash
cd starter

# Generate build files
cmake -B build

# Build the project
cmake --build build

# Run the executable
./build/calculator
```

### Step 4: Verify

Expected output:
```
Calculator Demo
===============
10 + 3 = 13
10 - 3 = 7
10 * 3 = 30
10 / 3 = 3.33333
```

### Bonus: Add Compiler Warnings

Add this to your CMakeLists.txt:
```cmake
target_compile_options(calculator PRIVATE -Wall -Wextra)
```

---

## File Structure

```
module3-cmake/
├── README.md           # This file
├── starter/            # YOUR WORKSPACE
│   ├── CMakeLists.txt  # Complete this file!
│   ├── include/
│   │   └── calculator.h
│   └── src/
│       ├── calculator.cpp
│       └── main.cpp
└── solution/           # Reference (DON'T PEEK YET!)
    ├── CMakeLists.txt
    ├── include/
    └── src/
```

---

## Quick Reference

### Essential CMake Commands

```cmake
# Minimum version required
cmake_minimum_required(VERSION 3.16)

# Project name and language
project(MyProject LANGUAGES CXX)

# C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create executable from source files
add_executable(myapp
    src/main.cpp
    src/utils.cpp
)

# Add include directories
target_include_directories(myapp PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

# Add compiler options
target_compile_options(myapp PRIVATE
    -Wall -Wextra
)
```

### Build Commands

```bash
# Generate build files (out-of-source)
cmake -B build

# Build the project
cmake --build build

# Build with parallel jobs
cmake --build build -- -j$(nproc)

# Clean and rebuild
rm -rf build && cmake -B build && cmake --build build
```

---

## Checklist

Before completing the lab, make sure you can:

- [ ] Write a basic `CMakeLists.txt` with `project()` and `add_executable()`
- [ ] Set C++ standard with `set(CMAKE_CXX_STANDARD 17)`
- [ ] Use out-of-source builds (`cmake -B build`)
- [ ] Add include directories with `target_include_directories()`
- [ ] Add compiler warnings with `target_compile_options()`
