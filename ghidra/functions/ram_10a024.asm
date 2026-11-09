; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010a024 entry ram:0010a024
ram:0010a024	f01c48b3	st.aw r13,[sp,-0x10]
ram:0010a028	041cc037	st blink,[sp,0x4]
ram:0010a02c	42c6	st_s r14,[sp,0x8]
ram:0010a02e	43c7	st_s r15,[sp,0xc]
ram:0010a030	00df	mov_s r15,0x0
ram:0010a032	00218e0f0000f007	add r14,r1,0x7f0
ram:0010a03a	10dd	mov_s r13,0x10
ram:0010a03c	1627c513	add3 r5,r15,r15
ram:0010a040	14274311	add1 r3,r15,r5
ram:0010a044	402b8500	asl r5,r3,0x2
ram:0010a048	30264411	ld r4,[r14, r5]
ram:0010a04c	310c1100	brne r4,0x0,0x0010a07c
ram:0010a050	cf7202802cc2	mov_s r2,0x8002c22c
ram:0010a056	2082	ld_s r1,[r2,0x0]
ram:0010a058	1c2641706210d34d	mpyhu r1,0x10624dd3,r1
ram:0010a060	00d8	mov_s r0,0x0
ram:0010a062	26b9	lsr_s r1,r1,0x6
ram:0010a064	0c21808fff7ffeff	cmp r1,0x7ffffffe
ram:0010a06c	ca218d0fff7ffeff	mov.hi r1,0x7ffffffe
ram:0010a074	2220800f0f00a07d	jl 0x000f7da0
ram:0010a07c	42254d10	sub r13,r13,0x1
ram:0010a080	bd0d7590	brhs.d r13,0x1,0x0010a03c
ram:0010a084	40274f10	_add r15,r15,0x1
ram:0010a088	04141f30	ld blink,[sp,0x4]
ram:0010a08c	02c6	ld_s r14,[sp,0x8]
ram:0010a08e	03c7	ld_s r15,[sp,0xc]
ram:0010a090	2120c007	j.d [blink]
ram:0010a094	10140d34	_ld.ab r13,[sp,0x10]
