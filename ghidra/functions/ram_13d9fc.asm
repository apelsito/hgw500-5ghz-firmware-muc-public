; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0013d9fc entry ram:0013d9fc
ram:0013d9fc	f41c48b3	st.aw r13,[sp,-0xc]
ram:0013da00	041cc037	st blink,[sp,0x4]
ram:0013da04	081c8033	st r14,[sp,0x8]
ram:0013da08	3020860f0000c004	ld r6,[r0, 0x4c0]
ram:0013da10	00208e0f0000fc07	add r14,r0,0x7fc
ram:0013da18	110e3100	brne.d r6,0x0,0x0013da28
ram:0013da1c	0a250010	_mov r13,r0
ram:0013da20	25002000	b.d 0x0013da44
ram:0013da24	4a200000	_mov r0,0x0
ram:0013da28	2c160500	ld r5,[r6,0x2c]
ram:0013da2c	f50d1080	breq r5,0x0,0x0013da20
ram:0013da30	33160396	ld.as r3,[r14,-0xcd]
ram:0013da34	cf711c00944d	mov_s r1,0x1c4d94
ram:0013da3a	0eeb	breq_s r3,0,0x0013da54
ram:0013da3c	23204001	jl.d [r5]
ram:0013da40	0a204003	_mov r0,r13
ram:0013da44	04141f30	ld blink,[sp,0x4]
ram:0013da48	08140e30	ld r14,[sp,0x8]
ram:0013da4c	2120c007	j.d [blink]
ram:0013da50	0c140d34	_ld.ab r13,[sp,0xc]
ram:0013da54	cf701c00ac4c	mov_s r0,0x1c4cac
ram:0013da5a	a972	mov_s r2,r13
ram:0013da5c	2220800f0e0060e2	jl 0x000ee260
ram:0013da64	3225811f00005804	ldb r1,[r13, 0x458]
ram:0013da6c	cf701c00e04c	mov_s r0,0x1c4ce0
ram:0013da72	0025821f00005804	add r2,r13,0x458
ram:0013da7a	2220800f0e0060e2	jl 0x000ee260
ram:0013da82	cf701c00f84c	mov_s r0,0x1c4cf8
ram:0013da88	a971	mov_s r1,r13
ram:0013da8a	cf720000840d	mov_s r2,0xd84
ram:0013da90	2220800f0e00a8ec	jl 0x000eeca8
ram:0013da98	2220800f03801403	jl 0x80030314
ram:0013daa0	31160496	ld.as r4,[r14,-0xcf]
ram:0013daa4	9907efff	b.d 0x0013da3c
ram:0013daa8	2c140500	_ld r5,[r4,0x2c]
