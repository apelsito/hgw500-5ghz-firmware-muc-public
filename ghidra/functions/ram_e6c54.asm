; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e6c54 entry ram:000e6c54
ram:000e6c54	0a22800f00e00400	mov r2,0xe0000004
ram:000e6c5c	5a120106	ld.as r1,[r2,0x5a]
ram:000e6c60	c2b9	bmsk_s r1,r1,0x2
ram:000e6c62	15099100	brne r1,0x2,0x000e6c74
ram:000e6c66	4282	ld_s r2,[r2,0x8]
ram:000e6c68	3bba	lsr_s r2,r2,0x1b
ram:000e6c6a	c1ba	bmsk_s r2,r2,0x1
ram:000e6c6c	402a0201	asl r2,r2,0x4
ram:000e6c70	4f224100	bset r1,r2,0x1
ram:000e6c74	85211400	or r1,r1,0x500
ram:000e6c78	3079	extw_s r1,r1
ram:000e6c7a	8c211480	cmp r1,0x500
ram:000e6c7e	06f4	bne_s 0x000e6c88
ram:000e6c80	2120c007	j.d [blink]
ram:000e6c84	4a204000	_mov r0,0x1
ram:000e6c88	8c21948c	cmp r1,0x532
ram:000e6c8c	f407c1ff	beq 0x000e6c80
ram:000e6c90	2120c007	j.d [blink]
ram:000e6c94	4a200000	_mov r0,0x0
