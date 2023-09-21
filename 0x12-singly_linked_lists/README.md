## Tasks

This project explores the concept of singly linked lists in C programming. It includes various C functions that manipulate singly linked lists and perform operations such as printing, counting elements, adding nodes to the beginning or end, and freeing memory.

### Task 0: Print list

Write a function that prints all the elements of a `list_t` list.

Prototype: `size_t print_list(const list_t *h);`

Return: the number of nodes

If `str` is NULL, print `[0] (nil)`

You are allowed to use `printf`

### Task 1: List length

Write a function that returns the number of elements in a `list_t` list.

Prototype: `size_t list_len(const list_t *h);`

### Task 2: Add node

Write a function that adds a new node at the beginning of a `list_t` list.

Prototype: `list_t *add_node(list_t **head, const char *str);`

Return: the address of the new element, or NULL if it failed

`str` needs to be duplicated

You are allowed to use `strdup`

### Task 3: Add node at the end

Write a function that adds a new node at the end of a `list_t` list.

Prototype: `list_t *add_node_end(list_t **head, const char *str);`

Return: the address of the new element, or NULL if it failed

`str` needs to be duplicated

You are allowed to use `strdup`

### Task 4: Free list

Write a function that frees a `list_t` list.

Prototype: `void free_list(list_t *head);`

### Task 5: The Hare and the Tortoise

Write a function that prints "You're beat! and yet, you must allow,\nI bore my house upon my back!\n" before the `main` function is executed.

You are allowed to use the `printf` function

### Task 6: Real programmers can write assembly code in any language

Write a 64-bit program in assembly that prints "Hello, Holberton" followed by a new line using the `printf` function without using interrupts.

---

*For more details about each task's requirements, refer to the respective task's description in the project.*

