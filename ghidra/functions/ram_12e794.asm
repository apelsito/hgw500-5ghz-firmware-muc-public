; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0012e794 entry ram:0012e794
ram:0012e794	f41c48b3	st.aw r13,[sp,-0xc]
ram:0012e798	081c8033	st r14,[sp,0x8]
ram:0012e79c	0a220000	mov r2,r0
ram:0012e7a0	00218e0f0000f80f	add r14,r1,0xff8
ram:0012e7a8	50160096	ld.as r0,[r14,-0xb0]
ram:0012e7ac	35083000	breq.d r0,0x0,0x0012e7e0
ram:0012e7b0	041cc037	_st blink,[sp,0x4]
ram:0012e7b4	51160196	ld.as r1,[r14,-0xaf]
ram:0012e7b8	1d093000	breq.d r1,0x0,0x0012e7d4
ram:0012e7bc	4a250010	_mov r13,0x0
ram:0012e7c0	0a208000	mov r0,r2
ram:0012e7c4	2220800f10002099	jl 0x00109920
ram:0012e7cc	50160096	ld.as r0,[r14,-0xb0]
ram:0012e7d0	511e5893	st.as r13,[r14,-0xaf]
ram:0012e7d4	2220800f0e0034e8	jl 0x000ee834
ram:0012e7dc	501e5893	st.as r13,[r14,-0xb0]
ram:0012e7e0	04141f30	ld blink,[sp,0x4]
ram:0012e7e4	02c6	ld_s r14,[sp,0x8]
ram:0012e7e6	e07f	j_s.d [blink]
ram:0012e7e8	0c140d34	_ld.ab r13,[sp,0xc]
