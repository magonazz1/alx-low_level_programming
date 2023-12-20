# 0x1C. C - Makefiles

## Overview

This project aims to introduce and develop understanding of Makefiles in C programming. Makefiles are a powerful tool for managing the build process of a project, automating compilation and linking of source files. The project provides a series of tasks that gradually introduce the concepts and usage of Makefiles.

## Tasks

### 0. (0-Makefile)

Create the first Makefile with the following specifications:
- Name of the executable: school
- Rules: all
- The `all` rule builds the executable
- Variables: none

```bash
make -f 0-Makefile
```

### 1. (1-Makefile)

Enhance the Makefile by introducing variables for the compiler (`CC`) and source files (`SRC`).

```bash
make -f 1-Makefile
```

### 2. (2-Makefile)

Create a more useful Makefile by incorporating variables for object files (`OBJ`) and the executable name (`NAME`). Additionally, implement a rule to recompile only updated source files.

```bash
make -f 2-Makefile
```

### 3. (3-Makefile)

Develop a Makefile with extended functionality, including rules for cleaning (`clean`, `oclean`, `fclean`, `re`). Define variables for the compiler (`CC`), source files (`SRC`), object files (`OBJ`), executable name (`NAME`), and the program to delete files (`RM`).

```bash
make -f 3-Makefile
```

### 4. (4-Makefile)

Create a complete Makefile by introducing additional flags (`CFLAGS`) for the compiler and ensuring the rules `all`, `clean`, `oclean`, `fclean`, and `re` are implemented. This Makefile should not rely on a list of all `.o` files.

```bash
make -f 4-Makefile
```

### 5. (5-island_perimeter.py)

Implement a Python function `island_perimeter` that calculates the perimeter of an island described in a grid. The grid consists of 0 (water zone) and 1 (land zone), and the function returns the perimeter of the island.

```bash
./5-main.py
```

### 6. (100-Makefile)

Create an advanced Makefile with the following specifications:
- Name of the executable: school
- Rules: all, clean, fclean, oclean, re
- Variables: CC, SRC, OBJ, NAME, RM, CFLAGS
- The `all` rule should recompile only the updated source files
- The cleaning rules (`clean`, `oclean`, `fclean`, `re`) should never fail
- Restrictions on the use of certain variables and rules

```bash
make -f 100-Makefile
```

## Conclusion

This project introduces the fundamental concepts of Makefiles and gradually builds complexity, covering variables, rules, cleaning processes, and more. Understanding and mastering Makefiles is crucial for efficient project management and compilation in C programming.
