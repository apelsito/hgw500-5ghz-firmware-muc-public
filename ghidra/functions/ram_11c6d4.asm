; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0011c6d4 entry ram:0011c6d4
ram:0011c6d4	f41c48b3	st.aw r13,[sp,-0xc]
ram:0011c6d8	041cc037	st blink,[sp,0x4]
ram:0011c6dc	42c6	st_s r14,[sp,0x8]
ram:0011c6de	2876	mov_s r14,r1
ram:0011c6e0	4875	mov_s r13,r2
ram:0011c6e2	5521400a	add2 r0,r1,0x29
ram:0011c6e6	40224103	add r1,r2,0xd
ram:0011c6ea	1eda	mov_s r2,0x1e
ram:0011c6ec	2220800f390000fe	jl 0x0039fe00
ram:0011c6f4	5526401c	add2 r0,r14,0x31
ram:0011c6f8	4025011b	add r1,r13,0x2c
ram:0011c6fc	4dda	mov_s r2,0x4d
ram:0011c6fe	2220800f390000fe	jl 0x0039fe00
ram:0011c706	2c8d	ldb_s r1,[r13,0xc]
ram:0011c708	a31e4210	stb r1,[r14,0xa3]
ram:0011c70c	2b158210	ldb r2,[r13,0x2b]
ram:0011c710	110a3000	breq.d r2,0x0,0x0011c720
ram:0011c714	c31e8210	_stb r2,[r14,0xc3]
ram:0011c718	0696	ldw_s r0,[r14,0xc]
ram:0011c71a	83b8	bset_s r0,r0,0x3
ram:0011c71c	0c1e0410	sth r0,[r14,0xc]
ram:0011c720	04141f30	ld blink,[sp,0x4]
ram:0011c724	02c6	ld_s r14,[sp,0x8]
ram:0011c726	e07f	j_s.d [blink]
ram:0011c728	0c140d34	_ld.ab r13,[sp,0xc]
