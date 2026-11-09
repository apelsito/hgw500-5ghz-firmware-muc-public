; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0015ce08 entry ram:0015ce08
ram:0015ce08	ec1c48b3	st.aw r13,[sp,-0x14]
ram:0015ce0c	041cc037	st blink,[sp,0x4]
ram:0015ce10	42c6	st_s r14,[sp,0x8]
ram:0015ce12	43c7	st_s r15,[sp,0xc]
ram:0015ce14	101c0034	st r16,[sp,0x10]
ram:0015ce18	1a70	mov_s r16,r0
ram:0015ce1a	2877	mov_s r15,r1
ram:0015ce1c	00de	mov_s r14,0x0
ram:0015ce1e	03dd	mov_s r13,0x3
ram:0015ce20	0a70	mov_s r0,r16
ram:0015ce22	c971	mov_s r1,r14
ram:0015ce24	e972	mov_s r2,r15
ram:0015ce26	00db	mov_s r3,0x0
ram:0015ce28	2220800f0280d03f	jl 0x80023fd0
ram:0015ce30	42254d10	sub r13,r13,0x1
ram:0015ce34	ed0d7590	brhs.d r13,0x1,0x0015ce20
ram:0015ce38	40264e10	_add r14,r14,0x1
ram:0015ce3c	04141f30	ld blink,[sp,0x4]
ram:0015ce40	02c6	ld_s r14,[sp,0x8]
ram:0015ce42	03c7	ld_s r15,[sp,0xc]
ram:0015ce44	10141030	ld r16,[sp,0x10]
ram:0015ce48	2120c007	j.d [blink]
ram:0015ce4c	14140d34	_ld.ab r13,[sp,0x14]
