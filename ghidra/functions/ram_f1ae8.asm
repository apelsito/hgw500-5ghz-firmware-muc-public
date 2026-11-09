; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f1ae8 entry ram:000f1ae8
ram:000f1ae8	e81c48b3	st.aw r13,[sp,-0x18]
ram:000f1aec	041cc037	st blink,[sp,0x4]
ram:000f1af0	42c6	st_s r14,[sp,0x8]
ram:000f1af2	43c7	st_s r15,[sp,0xc]
ram:000f1af4	101c0034	st r16,[sp,0x10]
ram:000f1af8	141c4034	st r17,[sp,0x14]
ram:000f1afc	0a210020	mov r17,r0
ram:000f1b00	6a208002	lr r0,[status32]
ram:000f1b04	46208101	bic r1,r0,0x6
ram:000f1b08	4420be81	and.f 0,r0,0x6
ram:000f1b0c	e9204200	flag.ne r1
ram:000f1b10	0876	mov_s r14,r0
ram:000f1b12	4a200020	mov r16,0x0
ram:000f1b16	01df	mov_s r15,0x1
ram:000f1b18	002e4d7400000100	asl r13,0x1,r17
ram:000f1b20	cf7200e00400	mov_s r2,0xe0000004
ram:000f1b26	94120000	ld r0,[r2,0x94]
ram:000f1b2a	a578	or_s r0,r0,r13
ram:000f1b2c	941a0000	st r0,[r2,0x94]
ram:000f1b30	0a21800f00e09800	mov r1,0xe0000098
ram:000f1b38	00110008	ld.di r0,[r1]
ram:000f1b3c	6f233f00	sync
ram:000f1b40	a478	and_s r0,r0,r13
ram:000f1b42	80e0	cmp_s r0,0x0
ram:000f1b44	ca25c213	mov.ne r13,r15
ram:000f1b48	ca250114	mov.eq r13,r16
ram:000f1b4c	29208003	flag r14
ram:000f1b50	04141f30	ld blink,[sp,0x4]
ram:000f1b54	08140e30	ld r14,[sp,0x8]
ram:000f1b58	a970	mov_s r0,r13
ram:000f1b5a	03c7	ld_s r15,[sp,0xc]
ram:000f1b5c	10141030	ld r16,[sp,0x10]
ram:000f1b60	14141130	ld r17,[sp,0x14]
ram:000f1b64	2120c007	j.d [blink]
ram:000f1b68	18140d34	_ld.ab r13,[sp,0x18]
