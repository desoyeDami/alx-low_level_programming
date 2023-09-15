# Low-Level Programming Project

This project consists of several tasks related to low-level programming in C. Each task has its own README file to explain the details and instructions for that specific task.

## Task 0: Preprocessor

**Task Description:**

Write a script that runs a C file through the preprocessor and saves the result into another file.

**Files:**

- `0-preprocessor` - The Bash script that runs the C file through the preprocessor.
- `0-main.c` - A sample C file.

**Instructions:**

1. Make sure you have the required permissions to execute the script: `chmod +x 0-preprocessor`.
2. Run the script: `./0-preprocessor`.

**Example Output:**

The output of this script should be a new file `0-main.i` containing the preprocessed content of `0-main.c`.

---

## Task 1: Compiler

**Task Description:**

Write a script that compiles a C file but does not link.

**Files:**

- `1-compiler` - The Bash script that compiles the C file without linking.
- `1-main.c` - A sample C file.

**Instructions:**

1. Make sure you have the required permissions to execute the script: `chmod +x 1-compiler`.
2. Run the script: `./1-compiler`.

**Example Output:**

The output of this script should be a new file `1-main.o` containing the object code of `1-main.c`.

---

## Task 2: Assembler

**Task Description:**

Write a script that generates the assembly code of a C code and saves it in an output file.

**Files:**

- `2-assembler` - The Bash script that generates the assembly code.
- `2-main.c` - A sample C file.

**Instructions:**

1. Make sure you have the required permissions to execute the script: `chmod +x 2-assembler`.
2. Run the script: `./2-assembler`.

**Example Output:**

The output of this script should be a new file `2-main.s` containing the assembly code generated from `2-main.c`.

---

## Task 3: Name

**Task Description:**

Write a script that compiles a C file and creates an executable named `cisfun`.

**Files:**

- `3-name` - The Bash script that compiles the C file and names the executable.
- `3-main.c` - A sample C file.

**Instructions:**

1. Make sure you have the required permissions to execute the script: `chmod +x 3-name`.
2. Run the script: `./3-name`.

**Example Output:**

The output of this script should be an executable file named `cisfun`.

---

## Task 4: Hello, `puts`

**Task Description:**

Write a C program that prints exactly "Programming is like building a multilingual puzzle," followed by a new line, using the `puts` function.

**Files:**

- `4-puts.c` - The C program that prints the desired message using `puts`.

**Instructions:**

1. Compile the program: `gcc -Wall -pedantic -Werror -Wextra 4-puts.c -o 4-puts`
2. Run the compiled program: `./4-puts`.


---

## Task 5: Hello, `printf`

**Task Description:**

Write a C program that prints exactly "with proper grammar, but the outcome is a piece of art," followed by a new line, using the `printf` function.

**Files:**

- `5-printf.c` - The C program that prints the desired message using `printf`.

**Instructions:**

1. Compile the program: `gcc -Wall -pedantic -Werror -Wextra 5-printf.c -o 5-printf`
2. Run the compiled program: `./5-printf`.


---

## Task 6: Size is not grandeur, and territory does not make a nation

**Task Description:**

Write a C program that prints the size of various types on the computer it is compiled and run on.

**Files:**

- `6-size.c` - The C program that prints the sizes of various types.

**Instructions:**

1. Compile the program: `gcc -Wall -pedantic -Werror -Wextra 6-size.c -o 6-size`
2. Run the compiled program: `./6-size`.


---

## Task 7: Intel (Advanced)

**Task Description:**

Write a script that generates the assembly code (Intel syntax) of a C code and saves it in an output file.

**Files:**

- `100-intel` - The Bash script that generates the Intel syntax assembly code.
- `100-main.c` - A sample C file.

**Instructions:**

1. Make sure you have the required permissions to execute the script: `chmod +x 100-intel`.
2. Run the script: `./100-intel`.

The output of this script should be a new file `100-main.s` containing the Intel syntax assembly code generated from `100-main.c`.

---

## Task 8: UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity (Advanced)

**Task Description:**

Write a C program that prints exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

**Files:**

- `101-quote.c` - The C program that prints the desired message to the standard error.

**Instructions:**

1. Compile the program: `gcc -Wall -pedantic -Werror -Wextra 101-quote.c -o 101-quote`
2. Run the compiled program: `./101-quote`.

