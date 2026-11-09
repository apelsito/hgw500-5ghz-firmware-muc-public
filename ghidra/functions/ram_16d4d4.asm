; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0016d4d4 entry ram:0016d4d4
ram:0016d4d4	4a230000	mov r3,0x0
ram:0016d4d8	0a22800f21000ce0	mov r2,0x21e00c
ram:0016d4e0	66a2	st_s r3,[r2,0x18]
ram:0016d4e2	001680700280bcc8	ldb r0,[0x8002c8bc]
ram:0016d4ea	01d9	mov_s r1,0x1
ram:0016d4ec	83e0	cmp_s r0,0x3
ram:0016d4ee	ca20c100	mov.eq r0,r3
ram:0016d4f2	ca204200	mov.ne r0,r1
ram:0016d4f6	e07f	j_s.d [blink]
ram:0016d4f8	1c1ac000	_st r3,[r2,0x1c]
