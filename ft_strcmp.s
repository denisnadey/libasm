section .text
	global _ft_strcmp
_ft_strcmp:
	mov rcx, -1
.start:
	inc rcx
	mov al, [rdi + rcx]
	mov bl, [rsi + rcx]
	cmp al, 0
	je .finish
	cmp bl, 0
	je .finish
	cmp al, bl
	; jne .finish
	je .start
.finish:
	sub al, bl
	movsx rax, al
	ret
