; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00104120 entry ram:00104120
ram:00104120	f81c48b3	st.aw r13,[sp,-0x8]
ram:00104124	041c8033	st r14,[sp,0x4]
ram:00104128	eb76	mov_s r14,blink
ram:0010412a	0875	mov_s r13,r0
ram:0010412c	01d9	mov_s r1,0x1
ram:0010412e	2220800f0f001095	jl 0x000f9510
ram:00104136	2385	ld_s r1,[r13,0xc]
ram:00104138	fb76	mov_s blink,r14
ram:0010413a	3021800f00002c20	ld r0,[r1, 0x202c]
ram:00104142	00218c0f00002c20	add r12,r1,0x202c
ram:0010414a	85b8	bset_s r0,r0,0x5
ram:0010414c	00a4	st_s r0,[r12,0x0]
ram:0010414e	01c6	ld_s r14,[sp,0x4]
ram:00104150	2120c007	j.d [blink]
ram:00104154	08140d34	_ld.ab r13,[sp,0x8]
