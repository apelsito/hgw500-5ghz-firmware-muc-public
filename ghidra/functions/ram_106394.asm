; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00106394 entry ram:00106394
ram:00106394	f41c48b3	st.aw r13,[sp,-0xc]
ram:00106398	041cc037	st blink,[sp,0x4]
ram:0010639c	42c6	st_s r14,[sp,0x8]
ram:0010639e	5924dc3b	sub3 sp,sp,0x2f
ram:001063a2	cf752000bc17	mov_s r13,0x2017bc
ram:001063a8	5524ce3b	add2 r14,sp,0x2f
ram:001063ac	6e0fefff	bl.d 0x00106318
ram:001063b0	0a208003	_mov r0,r14
ram:001063b4	0a204003	mov r0,r13
ram:001063b8	0a210007	mov r1,sp
ram:001063bc	bcda	mov_s r2,0xbc
ram:001063be	2220800f0e00f8cd	jl 0x000ecdf8
ram:001063c6	5525c01b	add2 r0,r13,0x2f
ram:001063ca	c971	mov_s r1,r14
ram:001063cc	bcda	mov_s r2,0xbc
ram:001063ce	2220800f0e00f8cd	jl 0x000ecdf8
ram:001063d6	5624dc3b	add3 sp,sp,0x2f
ram:001063da	04141f30	ld blink,[sp,0x4]
ram:001063de	02c6	ld_s r14,[sp,0x8]
ram:001063e0	2120c007	j.d [blink]
ram:001063e4	0c140d34	_ld.ab r13,[sp,0xc]
