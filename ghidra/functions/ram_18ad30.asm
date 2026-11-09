; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018ad30 entry ram:0018ad30
ram:0018ad30	f01c48b3	st.aw r13,[sp,-0x10]
ram:0018ad34	041cc037	st blink,[sp,0x4]
ram:0018ad38	42c6	st_s r14,[sp,0x8]
ram:0018ad3a	43c7	st_s r15,[sp,0xc]
ram:0018ad3c	0a274010	mov r15,r1
ram:0018ad40	660fefff	bl.d 0x0018aca4
ram:0018ad44	0a268010	_mov r14,r2
ram:0018ad48	0a250010	mov r13,r0
ram:0018ad4c	5a0fefff	bl.d 0x0018aca4
ram:0018ad50	0a20c003	_mov r0,r15
ram:0018ad54	17250d10	sub1 r13,r13,r0
ram:0018ad58	402e8010	asl r0,r14,0x2
ram:0018ad5c	04141f30	ld blink,[sp,0x4]
ram:0018ad60	1578	add2_s r0,r0,r0
ram:0018ad62	02c6	ld_s r14,[sp,0x8]
ram:0018ad64	1478	add1_s r0,r0,r0
ram:0018ad66	03c7	ld_s r15,[sp,0xc]
ram:0018ad68	0e204003	rsub r0,r0,r13
ram:0018ad6c	10140d34	ld.ab r13,[sp,0x10]
ram:0018ad70	2120c007	j.d [blink]
ram:0018ad74	8020020d	_add r0,r0,0xb4
