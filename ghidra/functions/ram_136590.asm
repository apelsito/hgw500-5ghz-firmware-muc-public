; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00136590 entry ram:00136590
ram:00136590	f01c48b3	st.aw r13,[sp,-0x10]
ram:00136594	041cc037	st blink,[sp,0x4]
ram:00136598	42c6	st_s r14,[sp,0x8]
ram:0013659a	43c7	st_s r15,[sp,0xc]
ram:0013659c	c081	ld_s r14,[r1,0x0]
ram:0013659e	b089	ldb_s r13,[r1,0x10]
ram:001365a0	4871	mov_s r1,r2
ram:001365a2	30208f0f0000203b	ld r15,[r0, 0x3b20]
ram:001365aa	40260019	add r0,r14,0x24
ram:001365ae	06da	mov_s r2,0x6
ram:001365b0	2220800f390000fe	jl 0x0039fe00
ram:001365b8	e970	mov_s r0,r15
ram:001365ba	a971	mov_s r1,r13
ram:001365bc	40260219	add r2,r14,0x24
ram:001365c0	01db	mov_s r3,0x1
ram:001365c2	2220800f1000a44f	jl 0x00104fa4
ram:001365ca	04141f30	ld blink,[sp,0x4]
ram:001365ce	02c6	ld_s r14,[sp,0x8]
ram:001365d0	03c7	ld_s r15,[sp,0xc]
ram:001365d2	10140d34	ld.ab r13,[sp,0x10]
ram:001365d6	e07f	j_s.d [blink]
ram:001365d8	4a200000	_mov r0,0x0
