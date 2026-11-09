; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0016d584 entry ram:0016d584
ram:0016d584	e1c5	push_s r13
ram:0016d586	00160470180010c0	ld r4,[0x18c010]
ram:0016d58e	eb75	mov_s r13,blink
ram:0016d590	250cf000	breq.d r4,0x3,0x0016d5b4
ram:0016d594	0a210000	_mov r1,r0
ram:0016d598	2f7a	extb_s r2,r1
ram:0016d59a	44ba	asr_s r2,r2,0x4
ram:0016d59c	cf701900784b	mov_s r0,0x194b78
ram:0016d5a2	5578	add2_s r0,r0,r2
ram:0016d5a4	c3b9	bmsk_s r1,r1,0x3
ram:0016d5a6	0080	ld_s r0,[r0,0x0]
ram:0016d5a8	00204000	add r0,r0,r1
ram:0016d5ac	1d002000	b.d 0x0016d5c8
ram:0016d5b0	00200000	_add r0,r0,r0
ram:0016d5b4	001603702000f017	ld r3,[0x2017f0]
ram:0016d5bc	001600701800f0c2	ld r0,[0x18c2f0]
ram:0016d5c4	2220c000	jl [r3]
ram:0016d5c8	0a274033	mov blink,r13
ram:0016d5cc	4a260070	nop
ram:0016d5d0	2120c007	j.d [blink]
ram:0016d5d4	04140d34	_ld.ab r13,[sp,0x4]
