; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0013d4c0 entry ram:0013d4c0
ram:0013d4c0	f01c48b3	st.aw r13,[sp,-0x10]
ram:0013d4c4	041cc037	st blink,[sp,0x4]
ram:0013d4c8	42c6	st_s r14,[sp,0x8]
ram:0013d4ca	43c7	st_s r15,[sp,0xc]
ram:0013d4cc	0a270010	mov r15,r0
ram:0013d4d0	3020880f0000c004	ld r8,[r0, 0x4c0]
ram:0013d4d8	00208d0f0000fc07	add r13,r0,0x7fc
ram:0013d4e0	35083010	breq.d r8,0x0,0x0013d514
ram:0013d4e4	0a264010	_mov r14,r1
ram:0013d4e8	0c100710	ld r7,[r8,0xc]
ram:0013d4ec	290f1000	breq r7,0x0,0x0013d514
ram:0013d4f0	00170610	ld r6,[r15]
ram:0013d4f4	40168500	ldb r5,[r6,0x40]
ram:0013d4f8	1d0d1100	brne r5,0x0,0x0013d514
ram:0013d4fc	33150396	ld.as r3,[r13,-0xcd]
ram:0013d500	cf711c00084d	mov_s r1,0x1c4d08
ram:0013d506	10eb	breq_s r3,0,0x0013d524
ram:0013d508	0a20c003	mov r0,r15
ram:0013d50c	2320c001	jl.d [r7]
ram:0013d510	0a218003	_mov r1,r14
ram:0013d514	04141f30	ld blink,[sp,0x4]
ram:0013d518	08140e30	ld r14,[sp,0x8]
ram:0013d51c	03c7	ld_s r15,[sp,0xc]
ram:0013d51e	e07f	j_s.d [blink]
ram:0013d520	10140d34	_ld.ab r13,[sp,0x10]
ram:0013d524	cf701c00ac4c	mov_s r0,0x1c4cac
ram:0013d52a	e972	mov_s r2,r15
ram:0013d52c	2220800f0e0060e2	jl 0x000ee260
ram:0013d534	3227811f00005804	ldb r1,[r15, 0x458]
ram:0013d53c	cf701c00e04c	mov_s r0,0x1c4ce0
ram:0013d542	0027821f00005804	add r2,r15,0x458
ram:0013d54a	2220800f0e0060e2	jl 0x000ee260
ram:0013d552	cf701c00f84c	mov_s r0,0x1c4cf8
ram:0013d558	e971	mov_s r1,r15
ram:0013d55a	cf720000840d	mov_s r2,0xd84
ram:0013d560	2220800f0e00a8ec	jl 0x000eeca8
ram:0013d568	2220800f03801403	jl 0x80030314
ram:0013d570	31150496	ld.as r4,[r13,-0xcf]
ram:0013d574	9507efff	b.d 0x0013d508
ram:0013d578	0c140700	_ld r7,[r4,0xc]
