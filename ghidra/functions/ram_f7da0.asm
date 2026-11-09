; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f7da0 entry ram:000f7da0
ram:000f7da0	fc1c48b3	st.aw r13,[sp,-0x4]
ram:000f7da4	0a25c017	mov r13,blink
ram:000f7da8	0a230000	mov r3,r0
ram:000f7dac	0420868fffff00f0	and.f r6,r0,0xfffff000
ram:000f7db4	3c002100	beq.d 0x000f7df0
ram:000f7db8	5320c502	_bmsk r5,r0,0xb
ram:000f7dbc	350d850f00000002	brhs r5,0x200,0x000f7df0
ram:000f7dc4	402d8500	asl r5,r5,0x2
ram:000f7dc8	16254501	add3 r5,r5,r5
ram:000f7dcc	0025850f1f00bcbe	add r5,r5,0x1fbebc
ram:000f7dd4	18150400	ld r4,[r5,0x18]
ram:000f7dd8	0424840fffff00f0	and r4,r4,0xfffff000
ram:000f7de0	110e0101	brne r6,r4,0x000f7df0
ram:000f7de4	0d0d1000	breq r5,0x0,0x000f7df0
ram:000f7de8	21002000	b.d 0x000f7e08
ram:000f7dec	141d4000	_st r1,[r5,0x14]
ram:000f7df0	cf701b00fcea	mov_s r0,0x1beafc
ram:000f7df6	cf711b0030eb	mov_s r1,0x1beb30
ram:000f7dfc	8a22020c	mov r2,0xb0
ram:000f7e00	2220800f0e0060e2	jl 0x000ee260
ram:000f7e08	fb75	mov_s blink,r13
ram:000f7e0a	e07f	j_s.d [blink]
ram:000f7e0c	04140d34	_ld.ab r13,[sp,0x4]
