; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00105088 entry ram:00105088
ram:00105088	4c210082	cmp r1,0x8
ram:0010508c	4a260070	nop
ram:00105090	e120ca07	jge.d [blink]
ram:00105094	ca202a00	_mov.ge r0,0x0
ram:00105098	80e1	cmp_s r1,0x0
ram:0010509a	ca20811f00000430	mov.eq r8,0x3004
ram:001050a2	ca23810f00000830	mov.eq r3,0x3008
ram:001050aa	0cf2	beq_s 0x001050c0
ram:001050ac	61b9	sub_s r1,r1,0x1
ram:001050ae	03b9	asl_s r1,r1,0x3
ram:001050b0	0021880f00007c30	add r8,r1,0x307c
ram:001050b8	0021830f00008030	add r3,r1,0x3080
ram:001050c0	0c100700	ld r7,[r0,0xc]
ram:001050c4	30270102	ld r1,[r7, r8]
ram:001050c8	41290602	lsr r6,r1,0x8
ram:001050cc	20aa	stb_s r1,[r2,0x0]
ram:001050ce	41290404	lsr r4,r1,0x10
ram:001050d2	011a8201	stb r6,[r2,0x1]
ram:001050d6	38b9	lsr_s r1,r1,0x18
ram:001050d8	021a0201	stb r4,[r2,0x2]
ram:001050dc	3027c000	ld r0,[r7, r3]
ram:001050e0	23aa	stb_s r1,[r2,0x3]
ram:001050e2	04aa	stb_s r0,[r2,0x4]
ram:001050e4	41280502	lsr r5,r0,0x8
ram:001050e8	0420800f00800000	and r0,r0,0x80000000
ram:001050f0	3fb8	lsr_s r0,r0,0x1f
ram:001050f2	e07f	j_s.d [blink]
ram:001050f4	051a4201	_stb r5,[r2,0x5]
