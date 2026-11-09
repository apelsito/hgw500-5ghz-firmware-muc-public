; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0015950c entry ram:0015950c
ram:0015950c	e1c5	push_s r13
ram:0015950e	6d90	ldw_s r3,[r0,0x1a]
ram:00159510	eb75	mov_s r13,blink
ram:00159512	0423820f00000008	and r2,r3,0x800
ram:0015951a	4bba	asr_s r2,r2,0xb
ram:0015951c	0581	ld_s r0,[r1,0x14]
ram:0015951e	2f2687f0	extb.f 0,r2
ram:00159522	0a25800f03800070	mov r5,0x80037000
ram:0015952a	a4150200	ld r2,[r5,0xa4]
ram:0015952e	0420800ff8030000	and r0,r0,0x3f80000
ram:00159536	0423810f000000f0	and r1,r3,0xf000
ram:0015953e	33b8	lsr_s r0,r0,0x13
ram:00159540	4cb9	asr_s r1,r1,0xc
ram:00159542	01e2	add_s r2,r2,0x1
ram:00159544	24002200	bne.d 0x00159568
ram:00159548	a41d8000	_st r2,[r5,0xa4]
ram:0015954c	fa084ffe	bl 0x00155e44
ram:00159550	19081000	breq r0,0x0,0x00159568
ram:00159554	87108300	ldb r3,[r0,0x87]
ram:00159558	4a240000	mov r4,0x0
ram:0015955c	86180201	stb r4,[r0,0x86]
ram:00159560	8423fe0e	and r3,r3,-0x45
ram:00159564	8718c200	stb r3,[r0,0x87]
ram:00159568	fb75	mov_s blink,r13
ram:0015956a	e07f	j_s.d [blink]
ram:0015956c	04140d34	_ld.ab r13,[sp,0x4]
