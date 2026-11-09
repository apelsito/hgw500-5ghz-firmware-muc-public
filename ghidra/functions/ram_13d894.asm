; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0013d894 entry ram:0013d894
ram:0013d894	f01c48b3	st.aw r13,[sp,-0x10]
ram:0013d898	041cc037	st blink,[sp,0x4]
ram:0013d89c	42c6	st_s r14,[sp,0x8]
ram:0013d89e	43c7	st_s r15,[sp,0xc]
ram:0013d8a0	0a260010	mov r14,r0
ram:0013d8a4	3020860f0000c004	ld r6,[r0, 0x4c0]
ram:0013d8ac	00208f0f0000fc07	add r15,r0,0x7fc
ram:0013d8b4	110e3100	brne.d r6,0x0,0x0013d8c4
ram:0013d8b8	0a254010	_mov r13,r1
ram:0013d8bc	29002000	b.d 0x0013d8e4
ram:0013d8c0	4a200000	_mov r0,0x0
ram:0013d8c4	24160500	ld r5,[r6,0x24]
ram:0013d8c8	f50d1080	breq r5,0x0,0x0013d8bc
ram:0013d8cc	33170396	ld.as r3,[r15,-0xcd]
ram:0013d8d0	cf711c00604d	mov_s r1,0x1c4d60
ram:0013d8d6	10eb	breq_s r3,0,0x0013d8f4
ram:0013d8d8	0a208003	mov r0,r14
ram:0013d8dc	23204001	jl.d [r5]
ram:0013d8e0	0a214003	_mov r1,r13
ram:0013d8e4	04141f30	ld blink,[sp,0x4]
ram:0013d8e8	08140e30	ld r14,[sp,0x8]
ram:0013d8ec	03c7	ld_s r15,[sp,0xc]
ram:0013d8ee	e07f	j_s.d [blink]
ram:0013d8f0	10140d34	_ld.ab r13,[sp,0x10]
ram:0013d8f4	cf701c00ac4c	mov_s r0,0x1c4cac
ram:0013d8fa	c972	mov_s r2,r14
ram:0013d8fc	2220800f0e0060e2	jl 0x000ee260
ram:0013d904	3226811f00005804	ldb r1,[r14, 0x458]
ram:0013d90c	cf701c00e04c	mov_s r0,0x1c4ce0
ram:0013d912	0026821f00005804	add r2,r14,0x458
ram:0013d91a	2220800f0e0060e2	jl 0x000ee260
ram:0013d922	cf701c00f84c	mov_s r0,0x1c4cf8
ram:0013d928	c971	mov_s r1,r14
ram:0013d92a	cf720000840d	mov_s r2,0xd84
ram:0013d930	2220800f0e00a8ec	jl 0x000eeca8
ram:0013d938	2220800f03801403	jl 0x80030314
ram:0013d940	31170496	ld.as r4,[r15,-0xcf]
ram:0013d944	9507efff	b.d 0x0013d8d8
ram:0013d948	24140500	_ld r5,[r4,0x24]
