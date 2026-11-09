; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018ad88 entry ram:0018ad88
ram:0018ad88	f81c48b3	st.aw r13,[sp,-0x8]
ram:0018ad8c	41c6	st_s r14,[sp,0x4]
ram:0018ad8e	eb76	mov_s r14,blink
ram:0018ad90	80e0	cmp_s r0,0x0
ram:0018ad92	ca20810ffffff0d8	mov.eq r0,0xffffd8f0
ram:0018ad9a	1ef2	beq_s 0x0018add4
ram:0018ad9c	8c20cb8f	cmp r0,0x2ff
ram:0018ada0	ca208d0f0000ff02	mov.hi r0,0x2ff
ram:0018ada8	08f7	bhi_s 0x0018adb8
ram:0018adaa	04208d0f00000003	and r13,r0,0x300
ram:0018adb2	28bd	lsr_s r13,r13,0x8
ram:0018adb4	090dd210	brlt r13,0x3,0x0018adbc
ram:0018adb8	4a258010	mov r13,0x2
ram:0018adbc	ea0eefff	bl.d 0x0018aca4
ram:0018adc0	01284003	_lsr r0,r0,r13
ram:0018adc4	00254113	add r1,r13,r13
ram:0018adc8	15214100	add2 r1,r1,r1
ram:0018adcc	82204708	sub r0,r0,0x1e1
ram:0018add0	3479	add1_s r1,r1,r1
ram:0018add2	3860	add_s r0,r0,r1
ram:0018add4	fb76	mov_s blink,r14
ram:0018add6	01c6	ld_s r14,[sp,0x4]
ram:0018add8	2120c007	j.d [blink]
ram:0018addc	08140d34	_ld.ab r13,[sp,0x8]
