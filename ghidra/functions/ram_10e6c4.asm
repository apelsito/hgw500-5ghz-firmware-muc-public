; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010e6c4 entry ram:0010e6c4
ram:0010e6c4	96201f0f	add3 r0,r0,0x7fc
ram:0010e6c8	25093000	breq.d r1,0x0,0x0010e6ec
ram:0010e6cc	4a250000	_mov r5,0x0
ram:0010e6d0	6081	ld_s r3,[r1,0x0]
ram:0010e6d2	10110400	ld r4,[r1,0x10]
ram:0010e6d6	b4184001	st r5,[r0,0xb4]
ram:0010e6da	7d7b	lsr_s r3,r3
ram:0010e6dc	53230300	bmsk r3,r3,0x0
ram:0010e6e0	1d0a3000	breq.d r2,0x0,0x0010e6fc
ram:0010e6e4	0a25c000	_mov r5,r3
ram:0010e6e8	11000000	b 0x0010e6f8
ram:0010e6ec	110a3000	breq.d r2,0x0,0x0010e6fc
ram:0010e6f0	b4184001	_st r5,[r0,0xb4]
ram:0010e6f4	0a244001	mov r4,r5
ram:0010e6f8	001a0001	st r4,[r2]
ram:0010e6fc	2120c007	j.d [blink]
ram:0010e700	0a204001	_mov r0,r5
