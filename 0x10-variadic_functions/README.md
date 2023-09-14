# Variadic Functions

This project demonstrates the use of variadic functions in C. Variadic functions are functions that can accept a variable number of arguments. In this project, we have implemented four functions:

## `sum_them_all`

- **Prototype:** `int sum_them_all(const unsigned int n, ...);`
- **Description:** This function takes an unsigned integer `n` as the first argument, which represents the number of integers that follow. It calculates the sum of all the integers and returns the result.
  If `n` is equal to 0, the function returns 0.
- **Usage:** `int sum = sum_them_all(3, 10, 20, 30);`

## `print_numbers`

- **Prototype:** `void print_numbers(const char *separator, const unsigned int n, ...);`
- **Description:** This function prints a variable number of integers, separated by the specified separator string. The function takes a separator string and the number of integers to print as arguments.
  If `separator` is NULL, don't print it.
- **Usage:** `print_numbers(", ", 4, 0, 98, -1024, 402);`

## `print_strings`

- **Prototype:** `void print_strings(const char *separator, const unsigned int n, ...);`
- **Description:** This function prints a variable number of strings, separated by the specified separator string. It takes a separator string and the number of strings to print as arguments.
  If any of the strings is NULL, it prints (nil) instead.
- **Usage:** `print_strings(", ", 2, "Hello", "World");`

## `print_all`

- **Prototype:** `void print_all(const char * const format, ...);`
- **Description:** This function can print values of different data types based on a format string. It accepts a format string containing characters that specify the data types of the arguments to print.
  - 'c': char
  - 'i': integer
  - 'f': float
  - 's': string (if NULL, it prints (nil))
- **Usage:** `print_all("cifs", 'H', 42, 3.14, "Hello");`
