; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010bd44 entry ram:0010bd44
ram:0010bd44	f41c48b3	st.aw r13,[sp,-0xc]
ram:0010bd48	041cc037	st blink,[sp,0x4]
ram:0010bd4c	42c6	st_s r14,[sp,0x8]
ram:0010bd4e	0876	mov_s r14,r0
ram:0010bd50	30208d0f0000203b	ld r13,[r0, 0x3b20]
ram:0010bd58	2870	mov_s r0,r1
ram:0010bd5a	2220800f110078bb	jl 0x0011bb78
ram:0010bd62	00d8	mov_s r0,0x0
ram:0010bd64	0871	mov_s r1,r0
ram:0010bd66	0872	mov_s r2,r0
ram:0010bd68	2220800f110070bc	jl 0x0011bc70
ram:0010bd70	0871	mov_s r1,r0
ram:0010bd72	c970	mov_s r0,r14
ram:0010bd74	2220800f1200bc92	jl 0x001292bc
ram:0010bd7c	00d8	mov_s r0,0x0
ram:0010bd7e	0871	mov_s r1,r0
ram:0010bd80	0872	mov_s r2,r0
ram:0010bd82	2220800f110070bc	jl 0x0011bc70
ram:0010bd8a	0871	mov_s r1,r0
ram:0010bd8c	a970	mov_s r0,r13
ram:0010bd8e	2220800f1000b83d	jl 0x00103db8
ram:0010bd96	04141f30	ld blink,[sp,0x4]
ram:0010bd9a	02c6	ld_s r14,[sp,0x8]
ram:0010bd9c	2120c007	j.d [blink]
ram:0010bda0	0c140d34	_ld.ab r13,[sp,0xc]
