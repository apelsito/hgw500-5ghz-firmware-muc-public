; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0014c464 entry ram:0014c464
ram:0014c464	06110901	ldh r9,[r1,0x6]
ram:0014c468	0a230000	mov r3,r0
ram:0014c46c	15093110	brne.d r9,0x0,0x0014c480
ram:0014c470	4a200000	_mov r0,0x0
ram:0014c474	10110801	ldh r8,[r1,0x10]
ram:0014c478	4c200090	cmp r8,0x0
ram:0014c47c	e020c107	jeq [blink]
ram:0014c480	04118700	ldb r7,[r1,0x4]
ram:0014c484	1e138400	ldb r4,[r3,0x1e]
ram:0014c488	150f3f00	bbit1.d r7,0x0,0x0014c49c
ram:0014c48c	44270602	_and r6,r7,0x8
ram:0014c490	190f5e00	bbit0 r7,0x1,0x0014c4a8
ram:0014c494	150c5100	brne r4,0x1,0x0014c4a8
ram:0014c498	09000000	b 0x0014c4a0
ram:0014c49c	f50c9181	brne r4,0x6,0x0014c490
ram:0014c4a0	0d002000	b.d 0x0014c4ac
ram:0014c4a4	4a204000	_mov r0,0x1
ram:0014c4a8	4a200000	mov r0,0x0
ram:0014c4ac	090c9101	brne r4,0x6,0x0014c4b4
ram:0014c4b0	150f9f00	bbit1 r7,0x2,0x0014c4c4
ram:0014c4b4	4c260080	cmp r6,0x0
ram:0014c4b8	e07c	jeq_s [blink]
ram:0014c4ba	80e2	cmp_s r2,0x0
ram:0014c4bc	e020c107	jeq [blink]
ram:0014c4c0	11000000	b 0x0014c4d0
ram:0014c4c4	3423850f0000e439	ldh r5,[r3, 0x39e4]
ram:0014c4cc	e90d9380	brge r5,0x2,0x0014c4b4
ram:0014c4d0	2120c007	j.d [blink]
ram:0014c4d4	4a200000	_mov r0,0x0
