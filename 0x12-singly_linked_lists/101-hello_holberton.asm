section .data
    hello: db "Hello, Holberton", 10, 0   ; Define a null-terminated string to print

section .text
    global main

    extern printf

main:
    ; Set up a stack frame for the main function
    push rbp           ; Save the current base pointer on the stack
    mov rbp, rsp       ; Set the base pointer to the current stack pointer

    ; Call the printf function with the address of the message string
    lea rdi, [hello]   ; Load the memory address of the 'hello' string into rdi
    xor eax, eax       ; Clear the return value storage
    call printf        ; Call the printf function to print the message

    ; Clean up the stack frame and return from the main function
    mov rsp, rbp       ; Restore the stack pointer to its original value
    pop rbp            ; Pop the previously saved base pointer from the stack
    xor eax, eax       ; Set the return value to 0 (indicating success)
    ret                ; Return from the main function
