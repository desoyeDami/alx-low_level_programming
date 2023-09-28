# 0x14. C - Bit Manipulation

## Overview

This repository contains C programs that demonstrate various bit manipulation operations. These programs were created as part of the ALX Software Engineering program to help you understand and practice working with bits and bitwise operators in C.

## Table of Contents

1. [Project Description](#project-description)
2. [Project Tasks](#project-tasks)
3. [File Descriptions](#file-descriptions)
4. [Usage](#usage)
5. [Author](#author)
6. [License](#license)

## Project Description

In this project, you will find a set of C functions that perform various operations related to bit manipulation. These functions are designed to help you learn how to work with bits, bitwise operators, and binary representations of numbers. The project includes functions for converting binary to unsigned integers, printing binary representations, getting and setting specific bits, and counting the number of bit flips required to transform one number into another.

## Project Tasks

Here are the tasks and functions included in this project:

1. **binary_to_uint**  
   Function that converts a binary number represented as a string to an unsigned integer.

2. **print_binary**  
   Function that prints the binary representation of a given unsigned long integer without using arrays or malloc.

3. **get_bit**  
   Function that gets the value of a bit at a specific index in an unsigned long integer.

4. **set_bit**  
   Function that sets the value of a bit at a specific index in an unsigned long integer to 1.

5. **clear_bit**  
   Function that clears (sets to 0) the value of a bit at a specific index in an unsigned long integer.

6. **flip_bits**  
   Function that calculates the number of bits that need to be flipped to transform one unsigned long integer into another.

## File Descriptions

- `0-binary_to_uint.c`: Contains the implementation of the `binary_to_uint` function.
- `1-print_binary.c`: Contains the implementation of the `print_binary` function.
- `2-get_bit.c`: Contains the implementation of the `get_bit` function.
- `3-set_bit.c`: Contains the implementation of the `set_bit` function.
- `4-clear_bit.c`: Contains the implementation of the `clear_bit` function.
- `5-flip_bits.c`: Contains the implementation of the `flip_bits` function.
- `_putchar.c`: A helper function to print characters.
- `main.h`: Header file containing function prototypes and macro guards.
- `0-main.c`, `1-main.c`, `2-main.c`, `3-main.c`, `4-main.c`, and `5-main.c`: Main programs to test the respective functions.

## Usage

To compile and run the programs, you can use the provided `main.c` files as examples:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-binary_to_uint.c _putchar.c -o binary_to_uint
./binary_to_uint
```

Replace `0` with the task number (1 to 5) to compile and test other functions.

## Author

This repository is authored by Julien Barbier as part of the ALX Software Engineering program.

## License

This project is licensed under the terms of the ALX License. See the [LICENSE](LICENSE) file for details.
