; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00159594 entry ram:00159594
ram:00159594	f81c48b3	st.aw r13,[sp,-0x8]
ram:00159598	41c6	st_s r14,[sp,0x4]
ram:0015959a	eb76	mov_s r14,blink
ram:0015959c	3221800f00007c06	ldb r0,[r1, 0x67c]
ram:001595a4	72086ffe	bl.d 0x00155e14
ram:001595a8	0a254010	_mov r13,r1
ram:001595ac	0c150611	ldh r6,[r13,0xc]
ram:001595b0	610e1e03	bbit0 r6,0xc,0x00159610
ram:001595b4	94100300	ld r3,[r0,0x94]
ram:001595b8	0a25800f03800070	mov r5,0x80037000
ram:001595c0	310e3e01	bbit0.d r6,0x4,0x001595f0
ram:001595c4	50230304	_bclr r3,r3,0x10
ram:001595c8	3225841f00002004	ldb r4,[r13, 0x420]
ram:001595d0	210c1000	breq r4,0x0,0x001595f0
ram:001595d4	90bb	bset_s r3,r3,0x10
ram:001595d6	9418c000	st r3,[r0,0x94]
ram:001595da	ba150106	ld.as r1,[r5,0xba]
ram:001595de	fb76	mov_s blink,r14
ram:001595e0	01e1	add_s r1,r1,0x1
ram:001595e2	01c6	ld_s r14,[sp,0x4]
ram:001595e4	08140d34	ld.ab r13,[sp,0x8]
ram:001595e8	2120c007	j.d [blink]
ram:001595ec	ba1d5800	_st.as r1,[r5,0xba]
ram:001595f0	0423830ffefff0ff	and r3,r3,0xfffefff0
ram:001595f8	9418c000	st r3,[r0,0x94]
ram:001595fc	bb150206	ld.as r2,[r5,0xbb]
ram:00159600	fb76	mov_s blink,r14
ram:00159602	01e2	add_s r2,r2,0x1
ram:00159604	01c6	ld_s r14,[sp,0x4]
ram:00159606	08140d34	ld.ab r13,[sp,0x8]
ram:0015960a	e07f	j_s.d [blink]
ram:0015960c	bb1d9800	_st.as r2,[r5,0xbb]
ram:00159610	fb76	mov_s blink,r14
ram:00159612	01c6	ld_s r14,[sp,0x4]
ram:00159614	2120c007	j.d [blink]
ram:00159618	08140d34	_ld.ab r13,[sp,0x8]
