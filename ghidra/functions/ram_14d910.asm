; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0014d910 entry ram:0014d910
ram:0014d910	f81c48b3	st.aw r13,[sp,-0x8]
ram:0014d914	041c8033	st r14,[sp,0x4]
ram:0014d918	eb76	mov_s r14,blink
ram:0014d91a	b870	mov_s r5,r0
ram:0014d91c	2875	mov_s r13,r1
ram:0014d91e	00218c0f00003605	add r12,r1,0x536
ram:0014d926	40ac	stb_s r2,[r12,0x0]
ram:0014d928	0a24800f1400a8e1	mov r4,0x14e1a8
ram:0014d930	6870	mov_s r0,r3
ram:0014d932	a871	mov_s r1,r5
ram:0014d934	a972	mov_s r2,r13
ram:0014d936	8873	mov_s r3,r4
ram:0014d938	4a248000	mov r4,0x2
ram:0014d93c	2220800f0f00107c	jl 0x000f7c10
ram:0014d944	00258c1f00003c05	add r12,r13,0x53c
ram:0014d94c	fb76	mov_s blink,r14
ram:0014d94e	01c6	ld_s r14,[sp,0x4]
ram:0014d950	08140d34	ld.ab r13,[sp,0x8]
ram:0014d954	2120c007	j.d [blink]
ram:0014d958	001c0010	_st r0,[r12]
