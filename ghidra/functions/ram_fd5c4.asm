; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fd5c4 entry ram:000fd5c4
ram:000fd5c4	001683700280bcc8	ldb r3,[0x8002c8bc]
ram:000fd5cc	4c23c080	cmp r3,0x3
ram:000fd5d0	e07d	jne_s [blink]
ram:000fd5d2	4380	ld_s r2,[r0,0xc]
ram:000fd5d4	3022810f00000020	ld r1,[r2, 0x2000]
ram:000fd5dc	00228c0f00000020	add r12,r2,0x2000
ram:000fd5e4	93b9	bset_s r1,r1,0x13
ram:000fd5e6	20a4	st_s r1,[r12,0x0]
ram:000fd5e8	e07e	j_s [blink]
