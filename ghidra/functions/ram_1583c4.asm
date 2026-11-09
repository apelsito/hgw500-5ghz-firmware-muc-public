; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001583c4 entry ram:001583c4
ram:001583c4	00100300	ld r3,[r0]
ram:001583c8	00130101	ldh r1,[r3]
ram:001583cc	00160070180078c2	ld r0,[0x18c278]
ram:001583d4	04b9	asl_s r1,r1,0x4
ram:001583d6	3479	add1_s r1,r1,r1
ram:001583d8	2ce0	add_s r0,r0,0x2c
ram:001583da	2060	ld_s r0,[r0,r1]
ram:001583dc	e07e	j_s [blink]
