; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00158a80 entry ram:00158a80
ram:00158a80	0016027018006cc2	ld r2,[0x18c26c]
ram:00158a88	08ea	breq_s r2,0,0x00158a98
ram:00158a8a	3368	asl_s r1,r0,0x3
ram:00158a8c	0279	sub_s r1,r1,r0
ram:00158a8e	03b9	asl_s r1,r1,0x3
ram:00158a90	2120c007	j.d [blink]
ram:00158a94	00224000	_add r0,r2,r1
ram:00158a98	2120c007	j.d [blink]
ram:00158a9c	4a200000	_mov r0,0x0
