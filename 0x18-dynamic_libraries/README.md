# C - Dynamic Libraries

## Learning Objectives

This project is designed to help you understand the following concepts:

- What is a dynamic library, how it works, how to create one, and how to use it.
- Understanding the environment variable $LD_LIBRARY_PATH and how to use it.
- Knowing the differences between static and shared libraries.
- Basic usage of the commands `nm`, `ldd`, and `ldconfig`.

## Project Overview

In this project, you'll create dynamic libraries in C and explore how they work on a Linux system. You'll also learn how to use these libraries in your programs.

## Requirements

## For C

- Allowed editors: vi, vim, emacs.
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc` with specific options.
- All your code files should end with a new line.
- A `README.md` file at the root of the project folder is mandatory.
- Your code should follow the Betty style guidelines.
- No global variables allowed.
- No more than 5 functions per file.
- Don't use standard library functions like `printf` or `puts`.
- You can use `_putchar`.
- You don't need to include `_putchar.c` - we will use our own.
- Function prototypes should be included in a `main.h` header file.

## For Bash

- Allowed editors: vi, vim, emacs.
- All scripts will be tested on Ubuntu 20.04 LTS.
- All script files should end with a new line.
- The first line of each script file should start with `#!/bin/bash`.
- A `README.md` file at the project's root should describe what each script does.
- All script files must be executable.

## Tasks

1. **A library is not a luxury but one of the necessities of life:**
   - Create the dynamic library `libdynamic.so` containing various functions.
   - A sample of functions is provided, and you can implement the ones that are missing.

2. **Without libraries, what have we? We have no past and no future:**
   - Create a script that generates a dynamic library called `liball.so` from all `.c` files in the current directory.

3. **Code injection: Win the Giga Millions!:**
   - Implement a shell script that, when executed, manipulates the environment using `LD_PRELOAD` and allows you to "win" the Giga Millions jackpot in a simulated scenario.

For more details on each task, check the respective directories in the project repository.

## Usage

Follow the instructions in each task directory to compile and execute the code.

## AUTHOR

* Martin Magonagona
* Email: <martinmagonazz@outlook.com>
