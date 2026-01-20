# Module 1: The Shell

## Learning Objectives

By the end of this module, you will be able to:

1. Navigate the filesystem using `cd`, `ls`, `pwd`
2. Create, copy, move, and delete files and directories
3. Search for files and text using `find` and `grep`
4. Use pipes `|` to combine commands
5. Redirect output to files

---

## 🧪 Exercise: Shell Scavenger Hunt

This is the main exercise for Module 1. It combines all the skills covered in the slides.

### Step 1: Setup

First, navigate to the module 1 directory:

```bash
cd isdn3000e-lab1-tasks/module1-shell
```

### Step 2: Tasks

Complete the following tasks using shell commands:

| Task | Description |
|------|-------------|
| 1 | Find all `.txt` files in the `hunt/` directory |
| 2 | Find the file containing the word "SECRET" |
| 3 | Count how many files contain the word "TODO" |
| 4 | **Bonus:** Find the 3 largest files |

### Step 3: Verify Your Answers

<details>
<summary>Task 1: Find all .txt files</summary>

```bash
find hunt/ -name "*.txt"
```

Expected: You should see `hunt/docs/readme.txt`

</details>

<details>
<summary>Task 2: Find file containing "SECRET"</summary>

```bash
grep -r "SECRET" hunt/
```

Expected: You should find it in `hunt/src/core/engine.cpp` and `hunt/data/.secret_key`

</details>

<details>
<summary>Task 3: Count files with "TODO"</summary>

```bash
grep -rl "TODO" hunt/ | wc -l
```

Expected: 3 files (docs/readme.txt, src/utils/helper.cpp, src/core/engine.cpp)

</details>

<details>
<summary>Bonus: Find 3 largest files</summary>

```bash
find hunt/ -type f -exec ls -s {} \; | sort -n | tail -3
```

Expected: The binary files `large_binary.bin` and `archive.dat` should appear

</details>

## Quick Reference

### Navigation Commands

| Command | Description | Example |
|---------|-------------|---------|
| `pwd` | Print working directory | `pwd` |
| `cd` | Change directory | `cd ~/Documents` |
| `ls` | List files | `ls -la` |

### File Operations

| Command | Description | Example |
|---------|-------------|---------|
| `mkdir` | Create directory | `mkdir -p a/b/c` |
| `touch` | Create empty file | `touch file.txt` |
| `cp` | Copy | `cp a.txt b.txt` |
| `mv` | Move/rename | `mv old.txt new.txt` |
| `rm` | Remove | `rm -rf folder/` |

### Viewing Files

| Command | Description | Example |
|---------|-------------|---------|
| `cat` | Print file | `cat file.txt` |
| `head` | First N lines | `head -n 5 file.txt` |
| `tail` | Last N lines | `tail -n 5 file.txt` |
| `less` | Scroll through | `less file.txt` |

### Searching

| Command | Description | Example |
|---------|-------------|---------|
| `find` | Find files by name | `find . -name "*.cpp"` |
| `grep` | Search in files | `grep "error" log.txt` |
| `grep -r` | Search recursively | `grep -r "TODO" src/` |

### Pipes & Redirection

| Operator | Description | Example |
|----------|-------------|---------|
| `\|` | Pipe output | `ls \| grep ".cpp"` |
| `>` | Write to file | `echo "hi" > file.txt` |
| `>>` | Append to file | `echo "bye" >> file.txt` |

---

## Checklist

Before moving to Module 2, make sure you can:

- [ ] Use `cd` with both absolute and relative paths
- [ ] List files with `ls` and understand the `-l`, `-a`, `-h` flags
- [ ] Create and remove directories with `mkdir` and `rm -r`
- [ ] Use `cat`, `head`, `tail` to view file contents
- [ ] Use `grep` to search for patterns in files
- [ ] Use pipes `|` to chain commands together
- [ ] Redirect output with `>` and `>>`
