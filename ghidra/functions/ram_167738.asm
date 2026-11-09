; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00167738 entry ram:00167738
ram:00167738	f81c48b3	st.aw r13,[sp,-0x8]
ram:0016773c	041c8033	st r14,[sp,0x4]
ram:00167740	eb76	mov_s r14,blink
ram:00167742	cf7521004806	mov_s r13,0x210648
ram:00167748	a0158190	ldb r1,[r13,-0x60]
ram:0016774c	cf701c00448c	mov_s r0,0x1c8c44
ram:00167752	2220800f0e0060e2	jl 0x000ee260
ram:0016775a	a0158190	ldb r1,[r13,-0x60]
ram:0016775e	fb76	mov_s blink,r14
ram:00167760	01c6	ld_s r14,[sp,0x4]
ram:00167762	001e4070180068c3	st r1,[0x18c368]
ram:0016776a	e07f	j_s.d [blink]
ram:0016776c	08140d34	_ld.ab r13,[sp,0x8]
