; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00159118 entry ram:00159118
ram:00159118	f1c0	push_s blink
ram:0015911a	0871	mov_s r1,r0
ram:0015911c	00160070180088c2	ld r0,[0x18c288]
ram:00159124	96da	mov_s r2,0x96
ram:00159126	2220800f390000fe	jl 0x0039fe00
ram:0015912e	18d8	mov_s r0,0x18
ram:00159130	00d9	mov_s r1,0x0
ram:00159132	2872	mov_s r2,r1
ram:00159134	0a234000	mov r3,r1
ram:00159138	760aaffe	bl.d 0x001563ac
ram:0015913c	4a244000	_mov r4,0x1
ram:00159140	04141f34	ld.ab blink,[sp,0x4]
ram:00159144	4a260070	nop
ram:00159148	e07e	j_s [blink]
