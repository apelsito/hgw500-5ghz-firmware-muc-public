; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000eeb28 entry ram:000eeb28
ram:000eeb28	f41c48b3	st.aw r13,[sp,-0xc]
ram:000eeb2c	041cc037	st blink,[sp,0x4]
ram:000eeb30	42c6	st_s r14,[sp,0x8]
ram:000eeb32	0876	mov_s r14,r0
ram:000eeb34	53203e81	bmsk.f 0,r0,0x4
ram:000eeb38	14002100	beq.d 0x000eeb4c
ram:000eeb3c	0a258010	_mov r13,r2
ram:000eeb40	2220800f03801403	jl 0x80030314
ram:000eeb48	21000000	b 0x000eeb68
ram:000eeb4c	53253e91	bmsk.f 0,r13,0x4
ram:000eeb50	f007c2ff	bne 0x000eeb40
ram:000eeb54	2e0fcfff	bl 0x000eea80
ram:000eeb58	0a208003	mov r0,r14
ram:000eeb5c	0a214003	mov r1,r13
ram:000eeb60	2220800f0e0004d0	jl 0x000ed004
ram:000eeb68	04141f30	ld blink,[sp,0x4]
ram:000eeb6c	02c6	ld_s r14,[sp,0x8]
ram:000eeb6e	e07f	j_s.d [blink]
ram:000eeb70	0c140d34	_ld.ab r13,[sp,0xc]
