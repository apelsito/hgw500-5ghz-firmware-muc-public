; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0013b5e0 entry ram:0013b5e0
ram:0013b5e0	f81c48b3	st.aw r13,[sp,-0x8]
ram:0013b5e4	041c8033	st r14,[sp,0x4]
ram:0013b5e8	0c110600	ld r6,[r1,0xc]
ram:0013b5ec	0875	mov_s r13,r0
ram:0013b5ee	00160500	ld r5,[r6]
ram:0013b5f2	eb76	mov_s r14,blink
ram:0013b5f4	1c150300	ld r3,[r5,0x1c]
ram:0013b5f8	a4c1	sub_s sp,sp,0x10
ram:0013b5fa	3023800f0000203b	ld r0,[r3, 0x3b20]
ram:0013b602	10118500	ldb r5,[r1,0x10]
ram:0013b606	0a24800f1a004887	mov r4,0x1a8748
ram:0013b60e	14140b00	ld r11,[r4,0x14]
ram:0013b612	18140a00	ld r10,[r4,0x18]
ram:0013b616	8b73	mov_s r3,sp
ram:0013b618	1c140900	ld r9,[r4,0x1c]
ram:0013b61c	20140800	ld r8,[r4,0x20]
ram:0013b620	001cc032	st r11,[sp]
ram:0013b624	041c8032	st r10,[sp,0x4]
ram:0013b628	081c4032	st r9,[sp,0x8]
ram:0013b62c	0c1c0032	st r8,[sp,0xc]
ram:0013b630	8c25c39f	cmp r13,0xff
ram:0013b634	ca218200	mov.ne r1,r2
ram:0013b638	ca262201	mov.ne r6,0x4
ram:0013b63c	ca242200	mov.ne r4,0x0
ram:0013b640	ca224203	mov.ne r2,r13
ram:0013b644	e220820f0f005cb5	jlne 0x000fb55c
ram:0013b64c	a970	mov_s r0,r13
ram:0013b64e	fb76	mov_s blink,r14
ram:0013b650	a4c0	add_s sp,sp,0x10
ram:0013b652	01c6	ld_s r14,[sp,0x4]
ram:0013b654	2120c007	j.d [blink]
ram:0013b658	08140d34	_ld.ab r13,[sp,0x8]
