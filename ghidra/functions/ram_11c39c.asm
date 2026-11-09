; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0011c39c entry ram:0011c39c
ram:0011c39c	00100600	ld r6,[r0]
ram:0011c3a0	2c168500	ldb r5,[r6,0x2c]
ram:0011c3a4	290d5100	brne r5,0x1,0x0011c3cc
ram:0011c3a8	38160400	ld r4,[r6,0x38]
ram:0011c3ac	a0148300	ldb r3,[r4,0xa0]
ram:0011c3b0	00248c0f00002204	add r12,r4,0x422
ram:0011c3b8	a1148200	ldb r2,[r4,0xa1]
ram:0011c3bc	84230200	and r3,r3,0x80
ram:0011c3c0	47bb	asr_s r3,r3,0x7
ram:0011c3c2	5a62	add_s r2,r2,r2
ram:0011c3c4	657a	or_s r2,r2,r3
ram:0011c3c6	e07f	j_s.d [blink]
ram:0011c3c8	001c8410	_sth r2,[r12]
ram:0011c3cc	a1108200	ldb r2,[r0,0xa1]
ram:0011c3d0	00208c0f00002204	add r12,r0,0x422
ram:0011c3d8	5322c100	bmsk r1,r2,0x3
ram:0011c3dc	8422030c	and r2,r2,0xf0
ram:0011c3e0	44ba	asr_s r2,r2,0x4
ram:0011c3e2	4779	xor_s r1,r1,r2
ram:0011c3e4	4c90	ldw_s r2,[r0,0x18]
ram:0011c3e6	05b9	asl_s r1,r1,0x5
ram:0011c3e8	5961	add_s r1,r1,r2
ram:0011c3ea	c8b9	bmsk_s r1,r1,0x8
ram:0011c3ec	2120c007	j.d [blink]
ram:0011c3f0	001c4410	_sth r1,[r12]
