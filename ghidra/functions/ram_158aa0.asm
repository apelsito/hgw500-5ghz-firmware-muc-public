; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00158aa0 entry ram:00158aa0
ram:00158aa0	00160270180070c2	ld r2,[0x18c270]
ram:00158aa8	08ea	breq_s r2,0,0x00158ab8
ram:00158aaa	15200100	add2 r1,r0,r0
ram:00158aae	3478	add1_s r0,r0,r1
ram:00158ab0	3268	asl_s r1,r0,0x2
ram:00158ab2	e07f	j_s.d [blink]
ram:00158ab4	00224000	_add r0,r2,r1
ram:00158ab8	2120c007	j.d [blink]
ram:00158abc	4a200000	_mov r0,0x0
