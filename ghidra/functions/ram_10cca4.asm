; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010cca4 entry ram:0010cca4
ram:0010cca4	0a210000	mov r1,r0
ram:0010cca8	00100000	ld r0,[r0]
ram:0010ccac	f81c48b3	st.aw r13,[sp,-0x8]
ram:0010ccb0	a780	ld_s r13,[r0,0x1c]
ram:0010ccb2	3025851f0000b440	ld r5,[r13, 0x40b4]
ram:0010ccba	c7750000e03f	add_s r13,r13,0x3fe0
ram:0010ccc0	1d0d3100	brne.d r5,0x0,0x0010ccdc
ram:0010ccc4	041cc037	_st blink,[sp,0x4]
ram:0010ccc8	0a24800f0380f477	mov r4,0x800377f4
ram:0010ccd0	ac140200	ld r2,[r4,0xac]
ram:0010ccd4	01e2	add_s r2,r2,0x1
ram:0010ccd6	ac1c8000	st r2,[r4,0xac]
ram:0010ccda	0081	ld_s r0,[r1,0x0]
ram:0010ccdc	80d9	mov_s r1,0x80
ram:0010ccde	2220800f0e00a482	jl 0x000e82a4
ram:0010cce6	01db	mov_s r3,0x1
ram:0010cce8	d41dc010	st r3,[r13,0xd4]
ram:0010ccec	6870	mov_s r0,r3
ram:0010ccee	2220800f15005065	jl 0x00156550
ram:0010ccf6	04141f30	ld blink,[sp,0x4]
ram:0010ccfa	e07f	j_s.d [blink]
ram:0010ccfc	08140d34	_ld.ab r13,[sp,0x8]
