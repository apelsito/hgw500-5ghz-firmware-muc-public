; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00183120 entry ram:00183120
ram:00183120	f41c48b3	st.aw r13,[sp,-0xc]
ram:00183124	041cc037	st blink,[sp,0x4]
ram:00183128	42c6	st_s r14,[sp,0x8]
ram:0018312a	01de	mov_s r14,0x1
ram:0018312c	4a250010	mov r13,0x0
ram:00183130	cf7000e62003	mov_s r0,0xe6000320
ram:00183136	8a210600	mov r1,0x180
ram:0018313a	07da	mov_s r2,0x7
ram:0018313c	2220800f1800dc3b	jl 0x00183bdc
ram:00183144	c0b8	bmsk_s r0,r0,0x0
ram:00183146	81e0	cmp_s r0,0x1
ram:00183148	ca238103	mov.eq r3,r14
ram:0018314c	ca234203	mov.ne r3,r13
ram:00183150	70eb	breq_s r3,0,0x00183130
ram:00183152	cf7000e62003	mov_s r0,0xe6000320
ram:00183158	8a210600	mov r1,0x180
ram:0018315c	07da	mov_s r2,0x7
ram:0018315e	01db	mov_s r3,0x1
ram:00183160	2220800f1800ec3b	jl 0x00183bec
ram:00183168	0cd9	mov_s r1,0xc
ram:0018316a	cf7209e6f811	mov_s r2,0xe60911f8
ram:00183170	821a5880	st.as r1,[r2,-0x7e]
ram:00183174	04141f30	ld blink,[sp,0x4]
ram:00183178	02c6	ld_s r14,[sp,0x8]
ram:0018317a	e07f	j_s.d [blink]
ram:0018317c	0c140d34	_ld.ab r13,[sp,0xc]
