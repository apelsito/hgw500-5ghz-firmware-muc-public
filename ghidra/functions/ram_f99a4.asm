; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f99a4 entry ram:000f99a4
ram:000f99a4	0c100000	ld r0,[r0,0xc]
ram:000f99a8	4c210080	cmp r1,0x0
ram:000f99ac	3020820f00000020	ld r2,[r0, 0x2000]
ram:000f99b4	c77000000020	add_s r0,r0,0x2000
ram:000f99ba	cf22e206	bset.ne r2,r2,0x1b
ram:000f99be	d022e106	bclr.eq r2,r2,0x1b
ram:000f99c2	40a0	st_s r2,[r0,0x0]
ram:000f99c4	e07e	j_s [blink]
