; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0016ab9c entry ram:0016ab9c
ram:0016ab9c	02110401	ldh r4,[r1,0x2]
ram:0016aba0	0d0c1100	brne r4,0x0,0x0016abac
ram:0016aba4	2120c007	j.d [blink]
ram:0016aba8	4a200000	_mov r0,0x0
ram:0016abac	04110600	ld r6,[r1,0x4]
ram:0016abb0	f50e1080	breq r6,0x0,0x0016aba4
ram:0016abb4	f10c5280	brlt r4,0x1,0x0016aba4
ram:0016abb8	00da	mov_s r2,0x0
ram:0016abba	0a240071	mov lp_count,r4
ram:0016abbe	c871	mov_s r1,r6
ram:0016abc0	a8208003	lp 0x0016abdc
ram:0016abc4	402a8300	asl r3,r2,0x2
ram:0016abc8	11093000	breq.d r1,0x0,0x0016abd8
ram:0016abcc	1423c300	_add1 r3,r3,r3
ram:0016abd0	3226c500	ldb r5,[r6, r3]
ram:0016abd4	0d084001	breq r0,r5,0x0016abe0
ram:0016abd8	0ce1	add_s r1,r1,0xc
ram:0016abda	01e2	add_s r2,r2,0x1
ram:0016abdc	c907cfff	b 0x0016aba4
ram:0016abe0	2120c007	j.d [blink]
ram:0016abe4	4a204000	_mov r0,0x1
