main:
	mov edi, format
	mov eax, 0
	mov esi, message
	call printf
	mov eax, 0
	ret

SECTION .data
message: db "Hello, Holberton", 0
format: db "%s", 10, 0
SECTION .text
extern printf
global main
