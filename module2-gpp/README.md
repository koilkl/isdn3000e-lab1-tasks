# Module 2: The g++ Compiler

## Learning Objectives

By the end of this module, you will be able to:

1. Compile a simple C++ program with g++
2. Understand and use common compiler flags
3. Separate code into header and source files
4. Compile and link multi-file projects manually

---

## 🧪 Exercise: Multi-File Project

This is the main exercise for Module 2. You will split a monolithic C++ file into multiple files.

### Step 1: Understand the Problem

Look at the starter code in `starter/calculator.cpp`. It contains:
- Function declarations
- Function implementations
- The main function

**All in one file!** This is bad practice for larger projects.

### Step 2: Your Task

Split `starter/calculator.cpp` into 3 separate files:

| File | Contains |
|------|----------|
| `calculator.h` | Function **declarations** (with `#pragma once`) |
| `calculator.cpp` | Function **implementations** |
| `main.cpp` | The `main()` function |

### Step 3: Create Your Files

Create a new folder for your work:

```bash
mkdir my_solution
cd my_solution
```

Then create the three files. Here's what each should contain:

**calculator.h** (declarations only):
```cpp
#pragma once

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);
```

**calculator.cpp** (implementations):
```cpp
#include <iostream>
#include "calculator.h"

// Copy the function implementations here
// add(), subtract(), multiply(), divide()
```

**main.cpp** (entry point):
```cpp
#include <iostream>
#include "calculator.h"

int main() {
    // Copy the main function code here
}
```

### Step 4: Compile and Run

```bash
# Compile each source file
g++ -std=c++17 -Wall -c calculator.cpp -o calculator.o
g++ -std=c++17 -Wall -c main.cpp -o main.o

# Link object files
g++ calculator.o main.o -o calculator

# Run
./calculator
```

Or use the one-liner:

```bash
g++ -std=c++17 -Wall main.cpp calculator.cpp -o calculator
./calculator
```

### Step 5: Verify

Expected output:
```
Calculator Demo
===============
10 + 3 = 13
10 - 3 = 7
10 * 3 = 30
10 / 3 = 3.33333
```

### Bonus: Add a New Function

Add a `power(int base, int exp)` function that computes base^exp:

1. Add declaration to `calculator.h`
2. Add implementation to `calculator.cpp`
3. Add a test call in `main.cpp`
4. Recompile and test

---

## File Structure

```
module2-gpp/
├── README.md           # This file
├── starter/
│   └── calculator.cpp  # Original monolithic code (YOUR INPUT)
├── solution/           # Reference solution (DON'T PEEK YET!)
│   ├── calculator.h
│   ├── calculator.cpp
│   └── main.cpp
└── my_solution/        # Your work goes here
    ├── calculator.h
    ├── calculator.cpp
    └── main.cpp
```

---

## Quick Reference

### Common g++ Flags

| Flag | Purpose |
|------|---------|
| `-o name` | Set output filename |
| `-c` | Compile only (no linking) |
| `-std=c++17` | Use C++ 17 standard |
| `-Wall` | Enable all warnings |
| `-Wextra` | Enable extra warnings |
| `-g` | Include debug symbols |

### Compile Commands

```bash
# Single file
g++ main.cpp -o main

# Multiple files (one-liner)
g++ main.cpp utils.cpp -o program

# Multiple files (separate steps)
g++ -c main.cpp -o main.o
g++ -c utils.cpp -o utils.o
g++ main.o utils.o -o program
```

---

## Checklist

Before moving to Module 3, make sure you can:

- [ ] Compile a simple C++ program with `g++`
- [ ] Explain what `-Wall`, `-std=c++17`, `-o`, `-c` flags do
- [ ] Split code into header (`.h`) and source (`.cpp`) files
- [ ] Use `#pragma once` for header guards
- [ ] Compile multiple source files and link them together
