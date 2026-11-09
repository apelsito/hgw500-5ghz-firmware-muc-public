; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f9510 entry ram:000f9510
ram:000f9510	0c100000	ld r0,[r0,0xc]
ram:000f9514	4c210080	cmp r1,0x0
ram:000f9518	3020820f00000020	ld r2,[r0, 0x2000]
ram:000f9520	c77000000020	add_s r0,r0,0x2000
ram:000f9526	cf226201	bset.ne r2,r2,0x5
ram:000f952a	d0226101	bclr.eq r2,r2,0x5
ram:000f952e	40a0	st_s r2,[r0,0x0]
ram:000f9530	e07e	j_s [blink]
