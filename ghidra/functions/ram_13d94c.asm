; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0013d94c entry ram:0013d94c
ram:0013d94c	f41c48b3	st.aw r13,[sp,-0xc]
ram:0013d950	041cc037	st blink,[sp,0x4]
ram:0013d954	081c8033	st r14,[sp,0x8]
ram:0013d958	3020860f0000c004	ld r6,[r0, 0x4c0]
ram:0013d960	00208e0f0000fc07	add r14,r0,0x7fc
ram:0013d968	110e3100	brne.d r6,0x0,0x0013d978
ram:0013d96c	0a250010	_mov r13,r0
ram:0013d970	25002000	b.d 0x0013d994
ram:0013d974	4a200000	_mov r0,0x0
ram:0013d978	28160500	ld r5,[r6,0x28]
ram:0013d97c	f50d1080	breq r5,0x0,0x0013d970
ram:0013d980	33160396	ld.as r3,[r14,-0xcd]
ram:0013d984	cf711c00784d	mov_s r1,0x1c4d78
ram:0013d98a	0eeb	breq_s r3,0,0x0013d9a4
ram:0013d98c	23204001	jl.d [r5]
ram:0013d990	0a204003	_mov r0,r13
ram:0013d994	04141f30	ld blink,[sp,0x4]
ram:0013d998	08140e30	ld r14,[sp,0x8]
ram:0013d99c	2120c007	j.d [blink]
ram:0013d9a0	0c140d34	_ld.ab r13,[sp,0xc]
ram:0013d9a4	cf701c00ac4c	mov_s r0,0x1c4cac
ram:0013d9aa	a972	mov_s r2,r13
ram:0013d9ac	2220800f0e0060e2	jl 0x000ee260
ram:0013d9b4	3225811f00005804	ldb r1,[r13, 0x458]
ram:0013d9bc	cf701c00e04c	mov_s r0,0x1c4ce0
ram:0013d9c2	0025821f00005804	add r2,r13,0x458
ram:0013d9ca	2220800f0e0060e2	jl 0x000ee260
ram:0013d9d2	cf701c00f84c	mov_s r0,0x1c4cf8
ram:0013d9d8	a971	mov_s r1,r13
ram:0013d9da	cf720000840d	mov_s r2,0xd84
ram:0013d9e0	2220800f0e00a8ec	jl 0x000eeca8
ram:0013d9e8	2220800f03801403	jl 0x80030314
ram:0013d9f0	31160496	ld.as r4,[r14,-0xcf]
ram:0013d9f4	9907efff	b.d 0x0013d98c
ram:0013d9f8	28140500	_ld r5,[r4,0x28]
