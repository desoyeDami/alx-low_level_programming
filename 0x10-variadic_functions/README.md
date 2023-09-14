Variadic Functions

This project demonstrates the use of variadic functions in C. Variadic functions are functions that can accept a variable number of arguments. In this project, we have implemented four functions:

0. sum_them_all

Prototype:
int sum_them_all(const unsigned int n, ...);

Description:
This function takes an unsigned integer n as the first argument, which represents the number of integers that follow. It calculates the sum of all the integers and returns the result.

If n is equal to 0, the function returns 0.

Usage:
int sum = sum_them_all(3, 10, 20, 30);

1. print_numbers

Prototype:
void print_numbers(const char *separator, const unsigned int n, ...);

Description:
This function prints a variable number of integers, separated by the specified separator string. The function takes a separator string and the number of integers to print as arguments.

Usage:
print_numbers(", ", 4, 0, 98, -1024, 402);

2. print_strings

Prototype:
void print_strings(const char *separator, const unsigned int n, ...);

Description:
This function prints a variable number of strings, separated by the specified separator string. It takes a separator string and the number of strings to print as arguments.

If any of the strings is NULL, it prints (nil) instead.

Usage:
print_strings(", ", 2, "Hello", "World");

3. print_all

Prototype:
void print_all(const char * const format, ...);

Description:
This function can print values of different data types based on a format string. It accepts a format string containing characters that specify the data types of the arguments to print.

- 'c': char
- 'i': integer
- 'f': float
- 's': string (if NULL, it prints (nil))

Usage:
print_all("cifs", 'H', 42, 3.14, "Hello");

Compilation

To compile the functions and test them, use the provided main files in each task:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-sum_them_all.c -o task0
./task0

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 1-main.c 1-print_numbers.c -o task1
./task1

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-main.c 2-print_strings.c -o task2
./task2

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-main.c 3-print_all.c -o task3
./task3
