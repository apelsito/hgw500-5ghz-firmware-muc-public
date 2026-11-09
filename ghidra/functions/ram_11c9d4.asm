; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0011c9d4 entry ram:0011c9d4
ram:0011c9d4	f81c48b3	st.aw r13,[sp,-0x8]
ram:0011c9d8	041c8033	st r14,[sp,0x4]
ram:0011c9dc	eb76	mov_s r14,blink
ram:0011c9de	0875	mov_s r13,r0
ram:0011c9e0	00208c0f00008c06	add r12,r0,0x68c
ram:0011c9e8	20a4	st_s r1,[r12,0x0]
ram:0011c9ea	cf731200e865	mov_s r3,0x1265e8
ram:0011c9f0	4870	mov_s r0,r2
ram:0011c9f2	a971	mov_s r1,r13
ram:0011c9f4	00da	mov_s r2,0x0
ram:0011c9f6	4a248000	mov r4,0x2
ram:0011c9fa	2220800f0f00107c	jl 0x000f7c10
ram:0011ca02	3225841f00007c06	ldb r4,[r13, 0x67c]
ram:0011ca0a	00258c1f00009006	add r12,r13,0x690
ram:0011ca12	00a4	st_s r0,[r12,0x0]
ram:0011ca14	0a25800f0380f477	mov r5,0x800377f4
ram:0011ca1c	471d1801	st.as r4,[r5,0x47]
ram:0011ca20	3025861f00008c06	ld r6,[r13, 0x68c]
ram:0011ca28	fb76	mov_s blink,r14
ram:0011ca2a	01c6	ld_s r14,[sp,0x4]
ram:0011ca2c	08140d34	ld.ab r13,[sp,0x8]
ram:0011ca30	2120c007	j.d [blink]
ram:0011ca34	481d9801	_st.as r6,[r5,0x48]
