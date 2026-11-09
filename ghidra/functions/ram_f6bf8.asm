; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f6bf8 entry ram:000f6bf8
ram:000f6bf8	f81c48b3	st.aw r13,[sp,-0x8]
ram:000f6bfc	41c6	st_s r14,[sp,0x4]
ram:000f6bfe	cf7002800000	mov_s r0,0x80020000
ram:000f6c04	cf710280a461	mov_s r1,0x800261a4
ram:000f6c0a	0279	sub_s r1,r1,r0
ram:000f6c0c	42b9	asr_s r1,r1,0x2
ram:000f6c0e	eb76	mov_s r14,blink
ram:000f6c10	420fcfff	bl 0x000f6b50
ram:000f6c14	cf75180054c0	mov_s r13,0x18c054
ram:000f6c1a	00a5	st_s r0,[r13,0x0]
ram:000f6c1c	cf700e000020	mov_s r0,0xe2000
ram:000f6c22	cf71180092bb	mov_s r1,0x18bb92
ram:000f6c28	02210100	sub r1,r1,r0
ram:000f6c2c	260fefff	bl.d 0x000f6b50
ram:000f6c30	42298100	_asr r1,r1,0x2
ram:000f6c34	041d0010	st r0,[r13,0x4]
ram:000f6c38	0a278033	mov blink,r14
ram:000f6c3c	01c6	ld_s r14,[sp,0x4]
ram:000f6c3e	e07f	j_s.d [blink]
ram:000f6c40	08140d34	_ld.ab r13,[sp,0x8]
