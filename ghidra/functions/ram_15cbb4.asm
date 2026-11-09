; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0015cbb4 entry ram:0015cbb4
ram:0015cbb4	0a24800f01e1c4fe	mov r4,0xe101fec4
ram:0015cbbc	56140206	ld.as r2,[r4,0x56]
ram:0015cbc0	57140306	ld.as r3,[r4,0x57]
ram:0015cbc4	1d0ac400	brlo r2,r3,0x0015cbe0
ram:0015cbc8	0222c200	sub r2,r2,r3
ram:0015cbcc	0d0a1408	brlo r2,0x20,0x0015cbd8
ram:0015cbd0	2120c007	j.d [blink]
ram:0015cbd4	4a200000	_mov r0,0x0
ram:0015cbd8	2120c007	j.d [blink]
ram:0015cbdc	4a204000	_mov r0,0x1
ram:0015cbe0	0e23810f01000000	rsub r1,r3,0x10000
ram:0015cbe8	00218100	add r1,r1,r2
ram:0015cbec	e5091588	brhs r1,0x20,0x0015cbd0
ram:0015cbf0	2120c007	j.d [blink]
ram:0015cbf4	4a204000	_mov r0,0x1
