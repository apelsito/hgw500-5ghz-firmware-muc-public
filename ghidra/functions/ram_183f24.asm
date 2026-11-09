; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00183f24 entry ram:00183f24
ram:00183f24	40284001	asl r0,r0,0x5
ram:00183f28	0a23800f09e60002	mov r3,0xe6090200
ram:00183f30	1578	add2_s r0,r0,r0
ram:00183f32	1478	add1_s r0,r0,r0
ram:00183f34	15204200	add2 r2,r0,r1
ram:00183f38	c772190010d1	add_s r2,r2,0x19d110
ram:00183f3e	0082	ld_s r0,[r2,0x0]
ram:00183f40	c7701f000000	add_s r0,r0,0x1f0000
ram:00183f46	b61b1880	st.as r0,[r3,-0x4a]
ram:00183f4a	e07e	j_s [blink]
