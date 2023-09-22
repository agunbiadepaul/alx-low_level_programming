section .data
	hello db "Hello, Holberton", 0	; Added '\n' for immediate output

section .text
	global main
	extern puts
main:
	mov rdi, hello	; Load the address of the string into rdi
	call puts	; Call the puts function

	; Exit the program
	mov rax, 60     ; syscall number for exit (64-bit)
	xor rdi, rdi    ; Status code 0
	syscall
