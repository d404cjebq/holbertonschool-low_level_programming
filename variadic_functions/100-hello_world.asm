section .data
    msg db "Hello, World", 0x0a

section .text
    global main

main:
    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    mov rdx, 13
    syscall
    mov rax, 60
    xor rdi, rdi
    syscall
