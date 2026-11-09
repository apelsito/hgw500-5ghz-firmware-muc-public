; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00128c64 entry ram:00128c64
ram:00128c64	0d091402	brlo r1,0x8,0x00128c70
ram:00128c68	2120c007	j.d [blink]
ram:00128c6c	4a200000	_mov r0,0x0
ram:00128c70	0020820f0000943f	add r2,r0,0x3f94
ram:00128c78	357a	add2_s r2,r2,r1
ram:00128c7a	6082	ld_s r3,[r2,0x0]
ram:00128c7c	76eb	breq_s r3,0,0x00128c68
ram:00128c7e	84130000	ld r0,[r3,0x84]
ram:00128c82	e07e	j_s [blink]
