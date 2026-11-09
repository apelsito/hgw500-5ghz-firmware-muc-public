; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00159448 entry ram:00159448
ram:00159448	ec1c48b3	st.aw r13,[sp,-0x14]
ram:0015944c	041cc037	st blink,[sp,0x4]
ram:00159450	42c6	st_s r14,[sp,0x8]
ram:00159452	43c7	st_s r15,[sp,0xc]
ram:00159454	101c0034	st r16,[sp,0x10]
ram:00159458	a2c1	sub_s sp,sp,0x8
ram:0015945a	0a24800f1a0064a5	mov r4,0x1aa564
ram:00159462	64140500	ld r5,[r4,0x64]
ram:00159466	0877	mov_s r15,r0
ram:00159468	68140301	ldh r3,[r4,0x68]
ram:0015946c	001c4031	st r5,[sp]
ram:00159470	4a200020	mov r16,0x0
ram:00159474	06dd	mov_s r13,0x6
ram:00159476	0a76	mov_s r14,r16
ram:00159478	041cc430	sth r3,[sp,0x4]
ram:0015947c	3227801f00007c06	ldb r0,[r15, 0x67c]
ram:00159484	c2096ffe	bl.d 0x00155e44
ram:00159488	32248133	_ldb r1,[sp, r14]
ram:0015948c	0d081000	breq r0,0x0,0x00159498
ram:00159490	9c100200	ld r2,[r0,0x9c]
ram:00159494	00209020	add r16,r16,r2
ram:00159498	01e6	add_s r14,r14,0x1
ram:0015949a	61bd	sub_s r13,r13,0x1
ram:0015949c	e10d7590	brhs.d r13,0x1,0x0015947c
ram:001594a0	2f268713	_extb r14,r14
ram:001594a4	0a70	mov_s r0,r16
ram:001594a6	a2c0	add_s sp,sp,0x8
ram:001594a8	04141f30	ld blink,[sp,0x4]
ram:001594ac	02c6	ld_s r14,[sp,0x8]
ram:001594ae	03c7	ld_s r15,[sp,0xc]
ram:001594b0	10141030	ld r16,[sp,0x10]
ram:001594b4	2120c007	j.d [blink]
ram:001594b8	14140d34	_ld.ab r13,[sp,0x14]
