; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f94ec entry ram:000f94ec
ram:000f94ec	0c100000	ld r0,[r0,0xc]
ram:000f94f0	4c210081	cmp r1,0x4
ram:000f94f4	3020820f00000020	ld r2,[r0, 0x2000]
ram:000f94fc	c77000000020	add_s r0,r0,0x2000
ram:000f9502	cf222102	bset.eq r2,r2,0x8
ram:000f9506	d0222202	bclr.ne r2,r2,0x8
ram:000f950a	40a0	st_s r2,[r0,0x0]
ram:000f950c	e07e	j_s [blink]
