default rel

extern printf
global main

section .data
    message db "Value: %lld", 10, 0

section .text
main: 

    sub rsp, 40

    mov rax, 100
    mov al, 50

    lea rcx, [message]
    mov rdx, rax
    call printf
    
    xor eax, eax
    add rsp, 40
    ret
