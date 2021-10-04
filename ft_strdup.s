section .text
	extern _ft_strlen
	extern _malloc
	extern _ft_strcpy
	global _ft_strdup

_ft_strdup:
    mov rax, 0
    cmp rdi, 0
    jz fail
    push rdi
    call _ft_strlen
    add rax, 1
    mov rdi, rax
    call _malloc
    cmp rax, 0
    je _exit
    mov rdi, rax
    pop rsi
    call _ft_strcpy
    jnz fail
    ret

_exit:
    ret

fail:
    mov rax, 0
    ret
