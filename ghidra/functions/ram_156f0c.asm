; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00156f0c entry ram:00156f0c
ram:00156f0c	f01c48b3	st.aw r13,[sp,-0x10]
ram:00156f10	041cc037	st blink,[sp,0x4]
ram:00156f14	42c6	st_s r14,[sp,0x8]
ram:00156f16	43c7	st_s r15,[sp,0xc]
ram:00156f18	0877	mov_s r15,r0
ram:00156f1a	4875	mov_s r13,r2
ram:00156f1c	6876	mov_s r14,r3
ram:00156f1e	6872	mov_s r2,r3
ram:00156f20	2220800f0280545e	jl 0x80025e54
ram:00156f28	a971	mov_s r1,r13
ram:00156f2a	046f	add_s r0,r15,0x4
ram:00156f2c	c972	mov_s r2,r14
ram:00156f2e	2220800f0280545e	jl 0x80025e54
ram:00156f36	04141f30	ld blink,[sp,0x4]
ram:00156f3a	02c6	ld_s r14,[sp,0x8]
ram:00156f3c	03c7	ld_s r15,[sp,0xc]
ram:00156f3e	e07f	j_s.d [blink]
ram:00156f40	10140d34	_ld.ab r13,[sp,0x10]
