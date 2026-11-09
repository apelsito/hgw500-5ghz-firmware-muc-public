; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001583a8 entry ram:001583a8
ram:001583a8	6080	ld_s r3,[r0,0x0]
ram:001583aa	0093	ldw_s r0,[r3,0x0]
ram:001583ac	00160270180078c2	ld r2,[0x18c278]
ram:001583b4	04b8	asl_s r0,r0,0x4
ram:001583b6	1478	add1_s r0,r0,r0
ram:001583b8	00208000	add r0,r0,r2
ram:001583bc	31042fff	b.d 0x001567ec
ram:001583c0	4a220008	_mov r2,0x20
