section.text:
	extern printf
	global main

main:
	mov edi, len
	mov esi, msg
	mov eax, 0
	call printf

	mov eax, 0
	ret

section .data:
	msg db "Hello, Holberton", 0xa
	len db "%s", 10, 0
