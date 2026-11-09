; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0011bc70 entry ram:0011bc70
ram:0011bc70	0016047018004cc1	ld r4,[0x18c14c]
ram:0011bc78	190c1300	brge r4,0x0,0x0011bc90
ram:0011bc7c	7268	asl_s r3,r0,0x2
ram:0011bc7e	3479	add1_s r1,r1,r1
ram:0011bc80	747b	add1_s r3,r3,r3
ram:0011bc82	7961	add_s r1,r1,r3
ram:0011bc84	5961	add_s r1,r1,r2
ram:0011bc86	c7711800fcd1	add_s r1,r1,0x18d1fc
ram:0011bc8c	0089	ldb_s r0,[r1,0x0]
ram:0011bc8e	e07e	j_s [blink]
ram:0011bc90	2120c007	j.d [blink]
ram:0011bc94	4a200000	_mov r0,0x0
