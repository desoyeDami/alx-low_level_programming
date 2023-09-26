```markdown
# Singly Linked Lists in C

This C project is focused on implementing various operations on singly linked lists. It covers tasks such as printing the list, calculating its length, adding and removing nodes, reversing the list, and more.

## Table of Contents
- [General Info](#general-info)
- [Project Tasks](#project-tasks)
- [How to Compile](#how-to-compile)
- [Usage](#usage)
- [File Descriptions](#file-descriptions)
- [Author](#author)

## General Info

In this project, we work with singly linked lists, a fundamental data structure in computer science. The goal is to understand and implement operations on linked lists while adhering to specific requirements and guidelines.

## Project Tasks

The project tasks include:

1. **Print List**: Implement a function to print all elements in the list.
2. **List Length**: Create a function to return the number of elements in the list.
3. **Add Node**: Implement a function to add a new node at the beginning of the list.
4. **Add Node at the End**: Create a function to add a new node at the end of the list.
5. **Free List**: Implement a function to free the entire list.
6. **Free List (with NULL)**: Implement a function that frees the list and sets the head to NULL.
7. **Pop Node**: Create a function to delete the head node and return its data.
8. **Get Node at Index**: Implement a function to get the node at a specific index in the list.
9. **Sum List**: Create a function to calculate the sum of all elements in the list.
10. **Insert Node at Index**: Implement a function to insert a new node at a given index.
11. **Delete Node at Index**: Create a function to delete a node at a specific index.
12. **Reverse List**: Implement a function to reverse the linked list.

## How to Compile

To compile the C code, you can use the provided compilation commands for each task. The code is designed to be compiled on Ubuntu 20.04 LTS using GCC with specific compiler flags. For example:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_listint.c -o a
```

Repeat this process for each task, replacing the source file and output file names accordingly.

## Usage

You can test each task by running the compiled executable. For example:

```bash
./a
```

Ensure that you have the required header files and functions correctly implemented to run the tests successfully.

## File Descriptions

- `lists.h`: Header file containing function prototypes and struct definitions.
- `0-print_listint.c` to `100-reverse_listint.c`: C source files for each task.
- `main.c`: Example main program for testing the functions.
- `5-free_listint2.c`: A special case for freeing the list and setting the head to NULL.

## Author

This project is authored by desoyeDami. Feel free to contact me if you have any questions or suggestions.

```
