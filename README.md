# Development Environment Setup

This guide will help you install the required tools for ISDN3000E Lab 1.

## Required Tools

| Tool | Purpose |
|------|---------|
| `g++` | C++ compiler |
| `cmake` | Build system generator |
| `make` | Build automation |

---

## 🐧 Ubuntu / Debian Linux

### Quick Install

```bash
sudo apt update
sudo apt install -y build-essential cmake
```

### Verify Installation

```bash
g++ --version
cmake --version
make --version
```

### Expected Output

```
g++ (Ubuntu 13.2.0-23ubuntu4) 13.2.0
cmake version 3.28.3
GNU Make 4.3
```

---

## 🍎 macOS

### Option 1: Xcode Command Line Tools (Recommended)

```bash
xcode-select --install
```

This installs `clang++` (compatible with g++ commands) and `make`.

### Option 2: Homebrew

If you prefer the GNU toolchain:

```bash
# Install Homebrew if not already installed
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

# Install g++ and cmake
brew install gcc cmake
```

### Install CMake

```bash
brew install cmake
```

### Verify Installation

```bash
g++ --version    # or clang++ --version
cmake --version
make --version
```

### Expected Output

```
Apple clang version 15.0.0
cmake version 3.28.1
GNU Make 3.81
```

---

## 🪟 Windows (WSL2)

Windows Subsystem for Linux (WSL2) provides a full Linux environment on Windows.

### Step 1: Install WSL2

Open **PowerShell as Administrator** and run:

```powershell
wsl --install
```

This installs Ubuntu by default. Restart your computer when prompted.

### Step 2: Set Up Ubuntu

After restart, open "Ubuntu" from the Start menu. Complete the initial setup:
- Create a username
- Create a password

### Step 3: Install Build Tools

Inside the Ubuntu terminal:

```bash
sudo apt update
sudo apt install -y build-essential cmake
```

### Verify Installation

```bash
g++ --version
cmake --version
make --version
```

### Accessing Files

- Windows files are at: `/mnt/c/Users/YourName/`
- Ubuntu home is at: `~` or `/home/YourName/`

**Tip:** Work in the Linux filesystem (`~`) for better performance.

---

