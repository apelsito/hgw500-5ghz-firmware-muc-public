; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0012d134 entry ram:0012d134
ram:0012d134	f41c48b3	st.aw r13,[sp,-0xc]
ram:0012d138	081c8033	st r14,[sp,0x8]
ram:0012d13c	00218e0f0000f80f	add r14,r1,0xff8
ram:0012d144	4c160196	ld.as r1,[r14,-0xb4]
ram:0012d148	1d093000	breq.d r1,0x0,0x0012d164
ram:0012d14c	041cc037	_st blink,[sp,0x4]
ram:0012d150	00dd	mov_s r13,0x0
ram:0012d152	a5a1	st_s r13,[r1,0x14]
ram:0012d154	4c160196	ld.as r1,[r14,-0xb4]
ram:0012d158	2220800f10002099	jl 0x00109920
ram:0012d160	4c1e5893	st.as r13,[r14,-0xb4]
ram:0012d164	04141f30	ld blink,[sp,0x4]
ram:0012d168	02c6	ld_s r14,[sp,0x8]
ram:0012d16a	e07f	j_s.d [blink]
ram:0012d16c	0c140d34	_ld.ab r13,[sp,0xc]
