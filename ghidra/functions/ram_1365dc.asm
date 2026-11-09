; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001365dc entry ram:001365dc
ram:001365dc	fc1cc8b7	st.aw blink,[sp,-0x4]
ram:001365e0	0a23800f1a008c66	mov r3,0x1a668c
ram:001365e8	14130400	ld r4,[r3,0x14]
ram:001365ec	a2c1	sub_s sp,sp,0x8
ram:001365ee	4c93	ldw_s r2,[r3,0x18]
ram:001365f0	001c0031	st r4,[sp]
ram:001365f4	00db	mov_s r3,0x0
ram:001365f6	041c8430	sth r2,[sp,0x4]
ram:001365fa	3020800f0000203b	ld r0,[r0, 0x3b20]
ram:00136602	3089	ldb_s r1,[r1,0x10]
ram:00136604	8b72	mov_s r2,sp
ram:00136606	2220800f1000a44f	jl 0x00104fa4
ram:0013660e	a2c0	add_s sp,sp,0x8
ram:00136610	d1c0	pop_s blink
ram:00136612	e07e	j_s [blink]
