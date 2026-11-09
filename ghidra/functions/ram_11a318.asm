; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0011a318 entry ram:0011a318
ram:0011a318	f01c48b3	st.aw r13,[sp,-0x10]
ram:0011a31c	0c1cc033	st r15,[sp,0xc]
ram:0011a320	4380	ld_s r2,[r0,0xc]
ram:0011a322	0877	mov_s r15,r0
ram:0011a324	2082	ld_s r1,[r2,0x0]
ram:0011a326	041cc037	st blink,[sp,0x4]
ram:0011a32a	4d100006	ld.as r0,[r0,0x4d]
ram:0011a32e	a781	ld_s r13,[r1,0x1c]
ram:0011a330	39083000	breq.d r0,0x0,0x0011a368
ram:0011a334	081c8033	_st r14,[sp,0x8]
ram:0011a338	2220800f0e0034e8	jl 0x000ee834
ram:0011a340	00de	mov_s r14,0x0
ram:0011a342	4d1f9813	st.as r14,[r15,0x4d]
ram:0011a346	2f87	ld_s r1,[r15,0x3c]
ram:0011a348	a970	mov_s r0,r13
ram:0011a34a	2220800f120030d0	jl 0x0012d030
ram:0011a352	2f87	ld_s r1,[r15,0x3c]
ram:0011a354	a970	mov_s r0,r13
ram:0011a356	2220800f120034d1	jl 0x0012d134
ram:0011a35e	00258c1f0000b85a	add r12,r13,0x5ab8
ram:0011a366	c0ac	stb_s r14,[r12,0x0]
ram:0011a368	04141f30	ld blink,[sp,0x4]
ram:0011a36c	02c6	ld_s r14,[sp,0x8]
ram:0011a36e	03c7	ld_s r15,[sp,0xc]
ram:0011a370	2120c007	j.d [blink]
ram:0011a374	10140d34	_ld.ab r13,[sp,0x10]
