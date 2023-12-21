# 0x1C. C - Makefiles

## Overview

This project focuses on introducing and developing an understanding of Makefiles in C programming. Makefiles are essential for managing the build process of a project, automating compilation, and linking of source files. The project consists of a series of tasks to gradually introduce the concepts and usage of Makefiles.

## Tasks

### 0. (0-Makefile)

Create your first Makefile.

Requirements:

- Name of the executable: school
- Rules: all
- The `all` rule builds your executable
- Variables: none

```bash
make -f 0-Makefile
```

Output:
```bash
gcc main.c school.c -o school
./school
```

Repo:

- **GitHub repository**: alx-low_level_programming
- **Directory**: 0x1C-makefiles
- **File**: [0-Makefile](./0-Makefile)
   
### 1. (1-Makefile)

Enhance the Makefile by introducing variables for the compiler (`CC`) and source files (`SRC`).

```bash
make -f 1-Makefile
```

Repo:

- **GitHub repository**: alx-low_level_programming
- **Directory**: 0x1C-makefiles
- **File**: [1-Makefile](./1-Makefile)
   
### 2. (2-Makefile)

Create your first useful Makefile.

Requirements:

- Name of the executable: school
- Rules: all
- The `all` rule builds your executable
- Variables: CC, SRC, OBJ, NAME
- CC: the compiler to be used
- SRC: the .c files
- OBJ: the .o files
- NAME: the name of the executable
- The `all` rule should recompile only the updated source files
- You are not allowed to have a list of all the .o files

```bash
make -f 2-Makefile
```

Output:
```bash
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
```

Repo:

- **GitHub repository**: alx-low_level_programming
- **Directory**: 0x1C-makefiles
- **File**: [2-Makefile](./2-Makefile)
   
### 3. (3-Makefile)

Create a Makefile with extended functionality.

Requirements:

- Name of the executable: school
- Rules: all, clean, oclean, fclean, re
- `all`: builds your executable
- `clean`: deletes all Emacs and Vim temporary files along with the executable
- `oclean`: deletes the object files
- `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
- `re`: forces recompilation of all source files
- Variables: CC, SRC, OBJ, NAME, RM
- CC: the compiler to be used
- SRC: the .c files
- OBJ: the .o files
- NAME: the name of the executable
- RM: the program to delete files
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the .o files

```bash
make -f 3-Makefile
```

Output:
```bash
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
make all -f 3-Makefile
make clean -f 3-Makefile 
make oclean -f 3-Makefile 
make fclean -f 3-Makefile 
make all -f 3-Makefile
make re -f 3-Makefile
```

Repo:

- **GitHub repository**: alx-low_level_programming
- **Directory**: 0x1C-makefiles
- **File**: [3-Makefile](./3-Makefile)
   
### 4. (4-Makefile)

Create a complete Makefile.

Requirements:

- Name of the executable: school
- Rules: all, clean, fclean, oclean, re
- `all`: builds your executable
- `clean`: deletes all Emacs and Vim temporary files along with the executable
- `oclean`: deletes the object files
- `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
- `re`: forces recompilation of all source files
- Variables: CC, SRC, OBJ, NAME, RM, CFLAGS
- CC: the compiler to be used
- SRC: the .c files
- OBJ: the .o files
- NAME: the name of the executable
- RM: the program to delete files
- CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the .o files

```bash
make all -f 4-Makefile
```

Output:
```bash
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o school.o school.c
gcc main.o school.o -o school
```

Repo:

- **GitHub repository**: alx-low_level_programming
- **Directory**: 0x1C-makefiles
- **File**: [4-Makefile](./4-Makefile)
   
### 5. (5-island_perimeter.py)

Implement a Python function `island_perimeter`.

Requirements:

- First line contains #!/usr/bin/python3
- You are not allowed to import any module
- Module and function must be documented

```bash
./5-main.py
```

Output:
```bash
12
```

Repo:

- **GitHub repository**: alx-low_level_programming
- **Directory**: 0x1C-makefiles
- **File**: [5-island_perimeter.py](./5-island_perimeter.py)
   
### 6. (100-Makefile)

Create an advanced Makefile.

Requirements:

- Name of the executable: school
- Rules: all, clean, fclean, oclean, re
- `all`: builds your executable
- `clean`: deletes all Emacs and Vim temporary files along with the executable
- `oclean`: deletes the object files
- `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
- `re`: forces recompilation of all source files
- Variables: CC, SRC, OBJ, NAME, RM, CFLAGS
- CC: the compiler to be used
- SRC: the .c files
- OBJ: the .o files
- NAME: the name of the executable
- RM: the program to delete files
- CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
- The `all` rule should recompile only the updated source files
- The `clean`, `oclean`, `fclean`, `re` rules should never fail
- You are not allowed to have a list of all the .o files
- You have to use $(RM) for the cleaning

 up rules, but you are not allowed to set the RM variable
- You are not allowed to use the string $(CC) more than once in your Makefile
- You are only allowed to use the string $(RM) twice in your Makefile
- You are not allowed to use the string $(CFLAGS) (but the compiler should still use the flags you set in this variable)
- You are not allowed to have an $(OBJ) rule
- You are not allowed to use the %.o: %.c rule
- Your Makefile should work even if there is a file in the folder that has the same name as one of your rule
- Your Makefile should not compile if the header file m.h is missing

```bash
make -f 100-Makefile
```

Output:
```bash
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o school.o school.c
gcc main.o school.o -o school
```

Repo:

- **GitHub repository**: alx-low_level_programming
- **Directory**: 0x1C-makefiles
- **File**: [100-Makefile](./100-Makefile)

## Conclusion

This project introduces the fundamental concepts of Makefiles and gradually builds complexity, covering variables, rules, cleaning processes, and more. Understanding and mastering Makefiles is crucial for efficient project management and compilation in C programming.
