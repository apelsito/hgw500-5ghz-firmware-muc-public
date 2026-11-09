; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0011dd78 entry ram:0011dd78
ram:0011dd78	0c100a00	ld r10,[r0,0xc]
ram:0011dd7c	2c108700	ldb r7,[r0,0x2c]
ram:0011dd80	00120910	ld r9,[r10]
ram:0011dd84	190f7100	brne.d r7,0x1,0x0011dd9c
ram:0011dd88	1c110810	_ld r8,[r9,0x1c]
ram:0011dd8c	2d108600	ldb r6,[r0,0x2d]
ram:0011dd90	0d0e1101	brne r6,0x4,0x0011dd9c
ram:0011dd94	2f80	ld_s r1,[r0,0x3c]
ram:0011dd96	4e80	ld_s r2,[r0,0x38]
ram:0011dd98	0d0a4100	brne r2,r1,0x0011dda4
ram:0011dd9c	2120c007	j.d [blink]
ram:0011dda0	4a200000	_mov r0,0x0
ram:0011dda4	64128300	ldb r3,[r2,0x64]
ram:0011dda8	f50b1180	brne r3,0x0,0x0011dd9c
ram:0011ddac	3222840f00008306	ldb r4,[r2, 0x683]
ram:0011ddb4	e90c1180	brne r4,0x0,0x0011dd9c
ram:0011ddb8	3220851f0000293b	ldb r5,[r8, 0x3b29]
ram:0011ddc0	dd0d5382	brge r5,0x9,0x0011dd9c
ram:0011ddc4	2120c007	j.d [blink]
ram:0011ddc8	4a204000	_mov r0,0x1
