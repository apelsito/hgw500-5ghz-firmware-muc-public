; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010517c entry ram:0010517c
ram:0010517c	0c100600	ld r6,[r0,0xc]
ram:00105180	3026830f00000c30	ld r3,[r6, 0x300c]
ram:00105188	412b0502	lsr r5,r3,0x8
ram:0010518c	60a9	stb_s r3,[r1,0x0]
ram:0010518e	412b0404	lsr r4,r3,0x10
ram:00105192	01194201	stb r5,[r1,0x1]
ram:00105196	38bb	lsr_s r3,r3,0x18
ram:00105198	02190201	stb r4,[r1,0x2]
ram:0010519c	3026820f00001030	ld r2,[r6, 0x3010]
ram:001051a4	63a9	stb_s r3,[r1,0x3]
ram:001051a6	44a9	stb_s r2,[r1,0x4]
ram:001051a8	28ba	lsr_s r2,r2,0x8
ram:001051aa	e07f	j_s.d [blink]
ram:001051ac	05198200	_stb r2,[r1,0x5]
