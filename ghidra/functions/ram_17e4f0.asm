; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0017e4f0 entry ram:0017e4f0
ram:0017e4f0	e41c48b3	st.aw r13,[sp,-0x1c]
ram:0017e4f4	041cc037	st blink,[sp,0x4]
ram:0017e4f8	42c6	st_s r14,[sp,0x8]
ram:0017e4fa	43c7	st_s r15,[sp,0xc]
ram:0017e4fc	101c0034	st r16,[sp,0x10]
ram:0017e500	141c4034	st r17,[sp,0x14]
ram:0017e504	181c8034	st r18,[sp,0x18]
ram:0017e508	4a220020	mov r18,0x0
ram:0017e50c	0a27801f21000c48	mov r15,0x21480c
ram:0017e514	40271019	add r16,r15,0x24
ram:0017e518	8a210220	mov r17,0x80
ram:0017e51c	16228e24	add3 r14,r18,r18
ram:0017e520	14228023	add1 r0,r18,r14
ram:0017e524	d368	asl_s r14,r0,0x3
ram:0017e526	32208123	ldb r1,[r16, r14]
ram:0017e52a	0ee9	breq_s r1,0,0x0017e544
ram:0017e52c	4a250011	mov r13,0x4
ram:0017e530	8e0fefff	bl.d 0x0017e4bc
ram:0017e534	00278013	_add r0,r15,r14
ram:0017e538	42254d10	sub r13,r13,0x1
ram:0017e53c	f50d7590	brhs.d r13,0x1,0x0017e530
ram:0017e540	40268e19	_add r14,r14,0x26
ram:0017e544	42215120	sub r17,r17,0x1
ram:0017e548	d50975a0	brhs.d r17,0x1,0x0017e51c
ram:0017e54c	40225220	_add r18,r18,0x1
ram:0017e550	04141f30	ld blink,[sp,0x4]
ram:0017e554	02c6	ld_s r14,[sp,0x8]
ram:0017e556	03c7	ld_s r15,[sp,0xc]
ram:0017e558	10141030	ld r16,[sp,0x10]
ram:0017e55c	14141130	ld r17,[sp,0x14]
ram:0017e560	18141230	ld r18,[sp,0x18]
ram:0017e564	2120c007	j.d [blink]
ram:0017e568	1c140d34	_ld.ab r13,[sp,0x1c]
