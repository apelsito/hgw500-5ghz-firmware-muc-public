; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e6c98 entry ram:000e6c98
ram:000e6c98	fc1c48b3	st.aw r13,[sp,-0x4]
ram:000e6c9c	0a25c017	mov r13,blink
ram:000e6ca0	1d087206	brlt.d r0,0x19,0x000e6cbc
ram:000e6ca4	0a220000	_mov r2,r0
ram:000e6ca8	cf730e00c8ac	mov_s r3,0xeacc8
ram:000e6cae	cf700000983a	mov_s r0,0x3a98
ram:000e6cb4	39002000	b.d 0x000e6cec
ram:000e6cb8	4a218001	_mov r1,0x6
ram:000e6cbc	9a6a	asr_s r12,r2,0x2
ram:000e6cbe	3dbc	lsr_s r12,r12,0x1d
ram:000e6cc0	00248510	add r5,r12,r2
ram:000e6cc4	422dc600	asr r6,r5,0x3
ram:000e6cc8	53258500	bmsk r5,r5,0x2
ram:000e6ccc	3226830f180034c0	ldb r3,[r6, 0x18c034]
ram:000e6cd4	02250503	sub r5,r5,r12
ram:000e6cd8	210b4f01	bbit1 r3,r5,0x000e6cf8
ram:000e6cdc	cf730e00c8ac	mov_s r3,0xeacc8
ram:000e6ce2	cf700000983a	mov_s r0,0x3a98
ram:000e6ce8	4a21c001	mov r1,0x7
ram:000e6cec	4a248000	mov r4,0x2
ram:000e6cf0	2220800f0f00107c	jl 0x000f7c10
ram:000e6cf8	fb75	mov_s blink,r13
ram:000e6cfa	e07f	j_s.d [blink]
ram:000e6cfc	04140d34	_ld.ab r13,[sp,0x4]
