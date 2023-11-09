# Task README

## Project Overview

### Project Name: Doubly Linked Lists in C

### Project Description

In this project, you will be working with doubly linked lists in the C programming language. The tasks involve implementing various operations on doubly linked lists, such as printing, finding the length, adding nodes at the beginning and end, freeing the list, getting a node at a specific index, calculating the sum of the list, inserting at a given index, and deleting a node at a specified index.

## Learning Objectives

After completing this project, you should be able to:

- Understand what a doubly linked list is.
- Use doubly linked lists in C.
- Implement various operations on doubly linked lists, including insertion, deletion, and printing.
- Look for the right sources of information independently.

## Project Requirements

### General

- **Allowed Editors:** vi, vim, emacs
- **Interpreted/compiled on:** Ubuntu 20.04 LTS using python3 (version 3.8.5)
- **File Endings:** All files should end with a new line
- **README.md:** A README.md file at the root of the project folder is mandatory
- **Coding Style:** Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- **Global Variables:** Not allowed
- **Functions Limit:** No more than 5 functions per file
- **C Standard Library Functions:** Only allowed functions are malloc, free, printf, and exit
- **Header File:** Prototypes of all functions should be included in a header file named lists.h
- **Header Files Guard:** All header files should be include guarded

## Tasks

1. **Print List**
    - Function Name: `print_dlistint`
    - Description: Write a function that prints all the elements of a dlistint_t list.
    - Prototype: `size_t print_dlistint(const dlistint_t *h);`

2. **List Length**
    - Function Name: `dlistint_len`
    - Description: Write a function that returns the number of elements in a linked dlistint_t list.
    - Prototype: `size_t dlistint_len(const dlistint_t *h);`

3. **Add Node at the Beginning**
    - Function Name: `add_dnodeint`
    - Description: Write a function that adds a new node at the beginning of a dlistint_t list.
    - Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`

4. **Add Node at the End**
    - Function Name: `add_dnodeint_end`
    - Description: Write a function that adds a new node at the end of a dlistint_t list.
    - Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`

5. **Free List**
    - Function Name: `free_dlistint`
    - Description: Write a function that frees a dlistint_t list.
    - Prototype: `void free_dlistint(dlistint_t *head);`

6. **Get Node at Index**
    - Function Name: `get_dnodeint_at_index`
    - Description: Write a function that returns the nth node of a dlistint_t linked list.
    - Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`

7. **Sum List**
    - Function Name: `sum_dlistint`
    - Description: Write a function that returns the sum of all the data (n) of a dlistint_t linked list.
    - Prototype: `int sum_dlistint(dlistint_t *head);`

8. **Insert at Index**
    - Function Name: `insert_dnodeint_at_index`
    - Description: Write a function that inserts a new node at a given position.
    - Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`

9. **Delete at Index**
    - Function Name: `delete_dnodeint_at_index`
    - Description: Write a function that deletes the node at index index of a dlistint_t linked list.
    - Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`

