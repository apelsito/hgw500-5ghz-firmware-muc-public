; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_80025e74 entry ram:80025e74
ram:80025e74	0016037018002cc0	ld r3,[0x18c02c]
ram:80025e7c	10eb	breq_s r3,0,0x80025e9c
ram:80025e7e	cf7200e00400	mov_s r2,0xe0000004
ram:80025e84	5b120106	ld.as r1,[r2,0x5b]
ram:80025e88	c3b9	bmsk_s r1,r1,0x3
ram:80025e8a	82e1	cmp_s r1,0x2
ram:80025e8c	e120c207	jne.d [blink]
ram:80025e90	4a200000	_mov r0,0x0
ram:80025e94	5b1a980f00200000	st.as 0x20000000,[r2,0x5b]
ram:80025e9c	2120c007	j.d [blink]
ram:80025ea0	4a204000	_mov r0,0x1
