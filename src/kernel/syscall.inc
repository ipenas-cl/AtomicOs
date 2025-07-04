; Generated by Tempo v1.3.1 Compiler
; Source: src/kernel/syscall.tempo
; Total WCET: 1 cycles
; Max function WCET: 1 cycles
; Trusted functions: 0

section .text
section .data
    ; Global data section

section .text
global _start


; Function: syscall_init (WCET: 1 cycles, Security: 0)
syscall_init:
    push ebp
    mov ebp, esp
    sub esp, 64    ; Local variable space
    ; Implicit return
    mov esp, ebp
    pop ebp
    ret

; Function: syscall_dispatch (WCET: 1 cycles, Security: 0)
syscall_dispatch:
    push ebp
    mov ebp, esp
    sub esp, 64    ; Local variable space
    ; Load variable number
    mov eax, [ebp+8]
    push eax
    mov eax, 0
    pop ebx
    cmp ebx, eax
    sete al
    movzx eax, al
    test eax, eax
    jz .L0x600003748380_else
    mov eax, 0
    mov esp, ebp
    pop ebp
    ret
    jmp .L0x600003748380_end
.L0x600003748380_else:
.L0x600003748380_end:
    ; Load variable number
    mov eax, [ebp+8]
    push eax
    mov eax, 4
    pop ebx
    cmp ebx, eax
    sete al
    movzx eax, al
    test eax, eax
    jz .L0x600003748690_else
    mov eax, 1
    mov esp, ebp
    pop ebp
    ret
    jmp .L0x600003748690_end
.L0x600003748690_else:
.L0x600003748690_end:
    ; Load variable number
    mov eax, [ebp+8]
    push eax
    mov eax, 23
    pop ebx
    cmp ebx, eax
    sete al
    movzx eax, al
    test eax, eax
    jz .L0x6000037489a0_else
    ; Load variable arg1
    mov eax, [ebp+16]
    mov esp, ebp
    pop ebp
    ret
    jmp .L0x6000037489a0_end
.L0x6000037489a0_else:
.L0x6000037489a0_end:
    mov eax, 10
    neg eax
    mov esp, ebp
    pop ebp
    ret
    ; Implicit return
    mov esp, ebp
    pop ebp
    ret

; Function: syscall_entry_asm (WCET: 1 cycles, Security: 0)
syscall_entry_asm:
    push ebp
    mov ebp, esp
    sub esp, 64    ; Local variable space
    ; Load variable ecx
    mov eax, [ebp+16]
    push eax
    ; Load variable ebx
    mov eax, [ebp+12]
    push eax
    ; Load variable syscall_num
    mov eax, [ebp+8]
    push eax
    call syscall_dispatch
    add esp, 12
    mov esp, ebp
    pop ebp
    ret
    ; Implicit return
    mov esp, ebp
    pop ebp
    ret
