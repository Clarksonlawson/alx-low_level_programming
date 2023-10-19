section .data
    hello db "Hello, Holberton", 10, 0  ; 10 is the ASCII code for newline

section .text
    global main

    extern printf

main:
    mov rdi, hello  ; Set the first parameter (format string)
    mov rax, 0      ; Clear RAX to indicate no floating-point parameters
    call printf     ; Call the printf function

    mov eax, 60     ; syscall: exit
    xor edi, edi    ; status: 0
    syscall

