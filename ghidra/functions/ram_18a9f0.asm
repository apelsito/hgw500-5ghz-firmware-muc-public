; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018a9f0 entry ram:0018a9f0
ram:0018a9f0	1d083000	breq.d r0,0x0,0x0018aa0c
ram:0018a9f4	4a230000	_mov r3,0x0
ram:0018a9f8	4a244000	mov r4,0x1
ram:0018a9fc	0a21800f00e604fe	mov r1,0xe600fe04
ram:0018aa04	99191801	st.as r4,[r1,0x99]
ram:0018aa08	9919d800	st.as r3,[r1,0x99]
ram:0018aa0c	cf72ffe584fe	mov_s r2,0xe5fffe84
ram:0018aa12	611a1800	st.as r0,[r2,0x61]
ram:0018aa16	e07e	j_s [blink]
