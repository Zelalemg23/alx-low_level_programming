section .data
    hello_msg db "Hello, Holberton", 0
    fmt db "%s", 0

section .text
    extern printf

global _start

_start:
    push rbp
    mov rbp, rsp

    ; Push the format string and the message onto the stack
    mov rdi, fmt
    mov rsi, hello_msg

    ; Call printf
    xor eax, eax
    call printf

    ; Clean up the stack
    xor eax, eax
    mov rsp, rbp
    pop rbp

    ; Exit the program
    xor eax, eax
    mov ebx, 0x60
    int 0x80
