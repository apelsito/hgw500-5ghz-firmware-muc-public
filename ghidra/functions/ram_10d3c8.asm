; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010d3c8 entry ram:0010d3c8
ram:0010d3c8	e1c5	push_s r13
ram:0010d3ca	00100700	ld r7,[r0]
ram:0010d3ce	eb75	mov_s r13,blink
ram:0010d3d0	1c170600	ld r6,[r7,0x1c]
ram:0010d3d4	4a258001	mov r5,0x6
ram:0010d3d8	3026820f00006040	ld r2,[r6, 0x4060]
ram:0010d3e0	00268c0f00006040	add r12,r6,0x4060
ram:0010d3e8	a0ba	bclr_s r2,r2,0x0
ram:0010d3ea	40a4	st_s r2,[r12,0x0]
ram:0010d3ec	0c194001	st r5,[r1,0xc]
ram:0010d3f0	0a23800f00e00400	mov r3,0xe0000004
ram:0010d3f8	281b800f00080008	st 0x8000800,[r3,0x28]
ram:0010d400	0a24800f00e02c00	mov r4,0xe000002c
ram:0010d408	00140008	ld.di r0,[r4]
ram:0010d40c	6f233f00	sync
ram:0010d410	0a274033	mov blink,r13
ram:0010d414	4a260070	nop
ram:0010d418	2120c007	j.d [blink]
ram:0010d41c	04140d34	_ld.ab r13,[sp,0x4]
