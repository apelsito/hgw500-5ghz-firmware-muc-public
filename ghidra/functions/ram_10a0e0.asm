; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010a0e0 entry ram:0010a0e0
ram:0010a0e0	ec1c48b3	st.aw r13,[sp,-0x14]
ram:0010a0e4	041cc037	st blink,[sp,0x4]
ram:0010a0e8	42c6	st_s r14,[sp,0x8]
ram:0010a0ea	43c7	st_s r15,[sp,0xc]
ram:0010a0ec	101c0034	st r16,[sp,0x10]
ram:0010a0f0	1a70	mov_s r16,r0
ram:0010a0f2	2877	mov_s r15,r1
ram:0010a0f4	4876	mov_s r14,r2
ram:0010a0f6	00dd	mov_s r13,0x0
ram:0010a0f8	a972	mov_s r2,r13
ram:0010a0fa	2220800f1100f048	jl 0x001148f0
ram:0010a102	0287	ld_s r0,[r15,0x8]
ram:0010a104	0ee8	breq_s r0,0,0x0010a120
ram:0010a106	0a70	mov_s r0,r16
ram:0010a108	e971	mov_s r1,r15
ram:0010a10a	c972	mov_s r2,r14
ram:0010a10c	2220800f1100b047	jl 0x001147b0
ram:0010a114	0287	ld_s r0,[r15,0x8]
ram:0010a116	2220800f0e0034e8	jl 0x000ee834
ram:0010a11e	a2a7	st_s r13,[r15,0x8]
ram:0010a120	04141f30	ld blink,[sp,0x4]
ram:0010a124	02c6	ld_s r14,[sp,0x8]
ram:0010a126	03c7	ld_s r15,[sp,0xc]
ram:0010a128	10141030	ld r16,[sp,0x10]
ram:0010a12c	2120c007	j.d [blink]
ram:0010a130	14140d34	_ld.ab r13,[sp,0x14]
