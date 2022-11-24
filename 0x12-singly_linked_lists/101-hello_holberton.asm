; This 64-bit assembly program prints
; Hello, Holberton, followed by a new line.

section .data
    msg db "Hello, Holberton",10
	msgSize EQU $ - msg

section .text
global main

main:
    mov rax, 1
    mov rdi, 1
    mov rsi, msg
    mov rdx, msgSize
    syscall
    
    mov rax, 60
    mov rdi, 0
    syscall
