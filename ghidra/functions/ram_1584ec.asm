; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001584ec entry ram:001584ec
ram:001584ec	e1c5	push_s r13
ram:001584ee	eb75	mov_s r13,blink
ram:001584f0	3220800f00007c06	ldb r0,[r0, 0x67c]
ram:001584f8	1e09cffe	bl 0x00155e14
ram:001584fc	4c200080	cmp r0,0x0
ram:00158500	ca202100	mov.eq r0,0x0
ram:00158504	0cf2	beq_s 0x0015851c
ram:00158506	94100000	ld r0,[r0,0x94]
ram:0015850a	0420810f0000000f	and r1,r0,0xf00
ram:00158512	c3b8	bmsk_s r0,r0,0x3
ram:00158514	28b9	lsr_s r1,r1,0x8
ram:00158516	0479	and_s r1,r1,r0
ram:00158518	06204000	bic r0,r0,r1
ram:0015851c	fb75	mov_s blink,r13
ram:0015851e	e07f	j_s.d [blink]
ram:00158520	04140d34	_ld.ab r13,[sp,0x4]
