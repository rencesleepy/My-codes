default rel

extern printf
extern scanf
global main

section .data
    msg1 db "Enter first digit (0-9): ", 0
    msg2 db "Enter second digit (0-9): ", 0
    msg3 db "Enter third digit (0-9): ", 0

    inputFormat db "%1d", 0
    resultMsg db "The sum is %d", 10, 0

section .bss
    num1 resd 1
    num2 resd 1
    num3 resd 1
    result resd 1

section .text
main:
    sub rsp, 40

    lea rcx, [msg1]
    call printf

    lea rcx, [inputFormat]
    lea rdx, [num1]
    call scanf

    lea rcx, [msg2]
    call printf

    lea rcx, [inputFormat]
    lea rdx, [num2]
    call scanf

    lea rcx, [msg3]
    call printf

    lea rcx, [inputFormat]
    lea rdx, [num3]
    call scanf

    mov eax, [num1]
    add eax, [num2]
    add eax, [num3]

    mov [result], eax

    lea rcx, [resultMsg]
    mov edx, [result]
    call printf

    xor eax, eax
    add rsp, 40
    ret
