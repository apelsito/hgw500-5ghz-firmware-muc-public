; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010cd00 entry ram:0010cd00
ram:0010cd00	0a210000	mov r1,r0
ram:0010cd04	00100000	ld r0,[r0]
ram:0010cd08	f81c48b3	st.aw r13,[sp,-0x8]
ram:0010cd0c	a780	ld_s r13,[r0,0x1c]
ram:0010cd0e	3025851f0000b440	ld r5,[r13, 0x40b4]
ram:0010cd16	c7750000e03f	add_s r13,r13,0x3fe0
ram:0010cd1c	1d0d3000	breq.d r5,0x0,0x0010cd38
ram:0010cd20	041cc037	_st blink,[sp,0x4]
ram:0010cd24	0a24800f0380f477	mov r4,0x800377f4
ram:0010cd2c	b0140200	ld r2,[r4,0xb0]
ram:0010cd30	01e2	add_s r2,r2,0x1
ram:0010cd32	b01c8000	st r2,[r4,0xb0]
ram:0010cd36	0081	ld_s r0,[r1,0x0]
ram:0010cd38	80d9	mov_s r1,0x80
ram:0010cd3a	2220800f0e00dc82	jl 0x000e82dc
ram:0010cd42	00db	mov_s r3,0x0
ram:0010cd44	d41dc010	st r3,[r13,0xd4]
ram:0010cd48	6870	mov_s r0,r3
ram:0010cd4a	2220800f15005065	jl 0x00156550
ram:0010cd52	04141f30	ld blink,[sp,0x4]
ram:0010cd56	e07f	j_s.d [blink]
ram:0010cd58	08140d34	_ld.ab r13,[sp,0x8]
