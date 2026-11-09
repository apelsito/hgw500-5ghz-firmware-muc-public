; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0013daac entry ram:0013daac
ram:0013daac	f41c48b3	st.aw r13,[sp,-0xc]
ram:0013dab0	041cc037	st blink,[sp,0x4]
ram:0013dab4	081c8033	st r14,[sp,0x8]
ram:0013dab8	3020860f0000c004	ld r6,[r0, 0x4c0]
ram:0013dac0	00208e0f0000fc07	add r14,r0,0x7fc
ram:0013dac8	110e3100	brne.d r6,0x0,0x0013dad8
ram:0013dacc	0a250010	_mov r13,r0
ram:0013dad0	25002000	b.d 0x0013daf4
ram:0013dad4	4a200000	_mov r0,0x0
ram:0013dad8	30160500	ld r5,[r6,0x30]
ram:0013dadc	f50d1080	breq r5,0x0,0x0013dad0
ram:0013dae0	33160396	ld.as r3,[r14,-0xcd]
ram:0013dae4	cf711c00b84d	mov_s r1,0x1c4db8
ram:0013daea	0eeb	breq_s r3,0,0x0013db04
ram:0013daec	23204001	jl.d [r5]
ram:0013daf0	0a204003	_mov r0,r13
ram:0013daf4	04141f30	ld blink,[sp,0x4]
ram:0013daf8	08140e30	ld r14,[sp,0x8]
ram:0013dafc	2120c007	j.d [blink]
ram:0013db00	0c140d34	_ld.ab r13,[sp,0xc]
ram:0013db04	cf701c00ac4c	mov_s r0,0x1c4cac
ram:0013db0a	a972	mov_s r2,r13
ram:0013db0c	2220800f0e0060e2	jl 0x000ee260
ram:0013db14	3225811f00005804	ldb r1,[r13, 0x458]
ram:0013db1c	cf701c00e04c	mov_s r0,0x1c4ce0
ram:0013db22	0025821f00005804	add r2,r13,0x458
ram:0013db2a	2220800f0e0060e2	jl 0x000ee260
ram:0013db32	cf701c00f84c	mov_s r0,0x1c4cf8
ram:0013db38	a971	mov_s r1,r13
ram:0013db3a	cf720000840d	mov_s r2,0xd84
ram:0013db40	2220800f0e00a8ec	jl 0x000eeca8
ram:0013db48	2220800f03801403	jl 0x80030314
ram:0013db50	31160496	ld.as r4,[r14,-0xcf]
ram:0013db54	9907efff	b.d 0x0013daec
ram:0013db58	30140500	_ld r5,[r4,0x30]
