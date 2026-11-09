; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0013d3ec entry ram:0013d3ec
ram:0013d3ec	ec1c48b3	st.aw r13,[sp,-0x14]
ram:0013d3f0	041cc037	st blink,[sp,0x4]
ram:0013d3f4	42c6	st_s r14,[sp,0x8]
ram:0013d3f6	43c7	st_s r15,[sp,0xc]
ram:0013d3f8	101c0034	st r16,[sp,0x10]
ram:0013d3fc	1a70	mov_s r16,r0
ram:0013d3fe	2877	mov_s r15,r1
ram:0013d400	3020860f0000c004	ld r6,[r0, 0x4c0]
ram:0013d408	00208d0f0000fc07	add r13,r0,0x7fc
ram:0013d410	110e3100	brne.d r6,0x0,0x0013d420
ram:0013d414	0a268010	_mov r14,r2
ram:0013d418	2d002000	b.d 0x0013d444
ram:0013d41c	4a200000	_mov r0,0x0
ram:0013d420	04160500	ld r5,[r6,0x4]
ram:0013d424	f50d1080	breq r5,0x0,0x0013d418
ram:0013d428	33150496	ld.as r4,[r13,-0xcd]
ram:0013d42c	0a21800f1c00944c	mov r1,0x1c4c94
ram:0013d434	250c1000	breq r4,0x0,0x0013d458
ram:0013d438	0a70	mov_s r0,r16
ram:0013d43a	e971	mov_s r1,r15
ram:0013d43c	23204001	jl.d [r5]
ram:0013d440	0a228003	_mov r2,r14
ram:0013d444	04141f30	ld blink,[sp,0x4]
ram:0013d448	08140e30	ld r14,[sp,0x8]
ram:0013d44c	03c7	ld_s r15,[sp,0xc]
ram:0013d44e	10141030	ld r16,[sp,0x10]
ram:0013d452	e07f	j_s.d [blink]
ram:0013d454	14140d34	_ld.ab r13,[sp,0x14]
ram:0013d458	cf701c00ac4c	mov_s r0,0x1c4cac
ram:0013d45e	0a72	mov_s r2,r16
ram:0013d460	2220800f0e0060e2	jl 0x000ee260
ram:0013d468	cf701c00e04c	mov_s r0,0x1c4ce0
ram:0013d46e	0020832f0000f803	add r3,r16,0x3f8
ram:0013d476	56230203	add3 r2,r3,0xc
ram:0013d47a	3220812f00005804	ldb r1,[r16, 0x458]
ram:0013d482	2220800f0e0060e2	jl 0x000ee260
ram:0013d48a	cf701c00f84c	mov_s r0,0x1c4cf8
ram:0013d490	0a71	mov_s r1,r16
ram:0013d492	cf720000840d	mov_s r2,0xd84
ram:0013d498	2220800f0e00a8ec	jl 0x000eeca8
ram:0013d4a0	2220800f03801403	jl 0x80030314
ram:0013d4a8	31150296	ld.as r2,[r13,-0xcf]
ram:0013d4ac	8d07efff	b.d 0x0013d438
ram:0013d4b0	04120500	_ld r5,[r2,0x4]
