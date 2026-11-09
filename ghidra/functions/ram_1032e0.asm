; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001032e0 entry ram:001032e0
ram:001032e0	2f244110	asr r12,r1
ram:001032e4	412c8c17	lsr r12,r12,0x1e
ram:001032e8	4a240000	mov r4,0x0
ram:001032ec	3b64	add_s r3,r12,r1
ram:001032ee	c1bb	bmsk_s r3,r3,0x1
ram:001032f0	827b	sub_s r3,r3,r12
ram:001032f2	02bb	asl_s r3,r3,0x2
ram:001032f4	2380	ld_s r1,[r0,0xc]
ram:001032f6	96238200	add3 r3,r3,0x82
ram:001032fa	7961	add_s r1,r1,r3
ram:001032fc	0019800f00400000	st 0x40000000,[r1]
ram:00103304	4380	ld_s r2,[r0,0xc]
ram:00103306	7a62	add_s r2,r2,r3
ram:00103308	001a0001	st r4,[r2]
ram:0010330c	e07e	j_s [blink]
