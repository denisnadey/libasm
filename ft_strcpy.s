section .text
	global _ft_strcpy

_ft_strcpy:
	mov rax, -1
.start:
	inc rax
	mov cl, [rsi + rax]
	mov [rdi + rax], cl
	cmp cl, 0
	je .finish
	jne .start
.finish:
	mov rax, rdi
	ret
