; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f1c6c entry ram:000f1c6c
ram:000f1c6c	f81c48b3	st.aw r13,[sp,-0x8]
ram:000f1c70	41c6	st_s r14,[sp,0x4]
ram:000f1c72	eb76	mov_s r14,blink
ram:000f1c74	9e0fcfff	bl 0x000f1c10
ram:000f1c78	0a250090	mov.f r13,r0
ram:000f1c7c	e220840f03801403	jln 0x80030314
ram:000f1c84	a970	mov_s r0,r13
ram:000f1c86	fb76	mov_s blink,r14
ram:000f1c88	01c6	ld_s r14,[sp,0x4]
ram:000f1c8a	e07f	j_s.d [blink]
ram:000f1c8c	08140d34	_ld.ab r13,[sp,0x8]
