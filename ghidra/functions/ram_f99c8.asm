; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f99c8 entry ram:000f99c8
ram:000f99c8	0c100000	ld r0,[r0,0xc]
ram:000f99cc	4c210080	cmp r1,0x0
ram:000f99d0	3020820f00000020	ld r2,[r0, 0x2000]
ram:000f99d8	c77000000020	add_s r0,r0,0x2000
ram:000f99de	cf222207	bset.ne r2,r2,0x1c
ram:000f99e2	d0222107	bclr.eq r2,r2,0x1c
ram:000f99e6	40a0	st_s r2,[r0,0x0]
ram:000f99e8	e07e	j_s [blink]
