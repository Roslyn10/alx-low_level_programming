global	main
extern printf

	format db 'Hello, Holberton', 0
main:
	mov edi, format
	xor eax,eax
	call printf
	mov eax, 0
	xor edi, edi
	syscall
