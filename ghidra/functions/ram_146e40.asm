; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00146e40 entry ram:00146e40
ram:00146e40	f81c48b3	st.aw r13,[sp,-0x8]
ram:00146e44	0a234080	mov.f r3,r1
ram:00146e48	0a25801f20006cfd	mov r13,0x20fd6c
ram:00146e50	28002100	beq.d 0x00146e78
ram:00146e54	041cc037	_st blink,[sp,0x4]
ram:00146e58	412b0404	lsr r4,r3,0x10
ram:00146e5c	412b0106	lsr r1,r3,0x18
ram:00146e60	28bb	lsr_s r3,r3,0x8
ram:00146e62	2f240701	extb r4,r4
ram:00146e66	6f7b	extb_s r3,r3
ram:00146e68	4e240200	neg r2,r4
ram:00146e6c	32a5	st_s r1,[r13,0x48]
ram:00146e6e	53a5	st_s r2,[r13,0x4c]
ram:00146e70	1d002000	b.d 0x00146e8c
ram:00146e74	501dc010	_st r3,[r13,0x50]
ram:00146e78	cf701c00585a	mov_s r0,0x1c5a58
ram:00146e7e	2220800f0e0060e2	jl 0x000ee260
ram:00146e86	3285	ld_s r1,[r13,0x48]
ram:00146e88	5385	ld_s r2,[r13,0x4c]
ram:00146e8a	7485	ld_s r3,[r13,0x50]
ram:00146e8c	cf701c007c5a	mov_s r0,0x1c5a7c
ram:00146e92	2220800f0e0060e2	jl 0x000ee260
ram:00146e9a	04141f30	ld blink,[sp,0x4]
ram:00146e9e	e07f	j_s.d [blink]
ram:00146ea0	08140d34	_ld.ab r13,[sp,0x8]
