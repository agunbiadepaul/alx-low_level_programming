section .data
    hello_message db "Hello, Holberton",10,0  ; The string to be printed with a newline character
    format db "%s", 0                       ; The format string for printf

section .text
    global main

    extern printf

main:
    ; Calling printf to print the message
    mov rdi, format        ; Load the format string address into rdi
    mov rax, 0            ; Clear rax register (no floating-point arguments)
    lea rsi, [hello_message] ; Load the address of hello_message into rsi
    call printf           ; Call the printf function

    ; Exit the program
    mov rax, 60           ; syscall number for exit
    xor rdi, rdi          ; Exit status 0
    syscall

