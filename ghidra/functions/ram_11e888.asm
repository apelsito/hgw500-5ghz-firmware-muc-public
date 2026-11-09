; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0011e888 entry ram:0011e888
ram:0011e888	e1c5	push_s r13
ram:0011e88a	eb75	mov_s r13,blink
ram:0011e88c	2872	mov_s r2,r1
ram:0011e88e	412a0405	lsr r4,r2,0x14
ram:0011e892	38b9	lsr_s r1,r1,0x18
ram:0011e894	412a0604	lsr r6,r2,0x10
ram:0011e898	5324c400	bmsk r4,r4,0x3
ram:0011e89c	412a0502	lsr r5,r2,0x8
ram:0011e8a0	5326c600	bmsk r6,r6,0x3
ram:0011e8a4	5325c500	bmsk r5,r5,0x3
ram:0011e8a8	42264600	sub r6,r6,0x1
ram:0011e8ac	2f268701	extb r6,r6
ram:0011e8b0	8c21c38f	cmp r1,0xff
ram:0011e8b4	cc24ab80	cmp.lt r4,0x2
ram:0011e8b8	cc262b81	cmp.lt r6,0x4
ram:0011e8bc	cc25eb80	cmp.lt r5,0x3
ram:0011e8c0	5af6	bge_s 0x0011e8f4
ram:0011e8c2	402c8400	asl r4,r4,0x2
ram:0011e8c6	14268601	add1 r6,r6,r6
ram:0011e8ca	14240401	add1 r4,r4,r4
ram:0011e8ce	14214300	add1 r3,r1,r1
ram:0011e8d2	00248401	add r4,r4,r6
ram:0011e8d6	00244401	add r4,r4,r5
ram:0011e8da	1521c500	add2 r5,r1,r3
ram:0011e8de	00240400	add r4,r4,r0
ram:0011e8e2	402d8300	asl r3,r5,0x2
ram:0011e8e6	80249202	add r4,r4,0x48a
ram:0011e8ea	8073	add_s r3,r3,r4
ram:0011e8ec	8a0eefff	bl.d 0x0011e774
ram:0011e8f0	001b8200	_stb r2,[r3]
ram:0011e8f4	0a274033	mov blink,r13
ram:0011e8f8	4a260070	nop
ram:0011e8fc	2120c007	j.d [blink]
ram:0011e900	04140d34	_ld.ab r13,[sp,0x4]
