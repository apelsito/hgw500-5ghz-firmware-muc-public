; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0015916c entry ram:0015916c
ram:0015916c	f81c48b3	st.aw r13,[sp,-0x8]
ram:00159170	41c6	st_s r14,[sp,0x4]
ram:00159172	eb76	mov_s r14,blink
ram:00159174	2875	mov_s r13,r1
ram:00159176	1ad8	mov_s r0,0x1a
ram:00159178	00da	mov_s r2,0x0
ram:0015917a	4873	mov_s r3,r2
ram:0015917c	320aaffe	bl.d 0x001563ac
ram:00159180	4a244000	_mov r4,0x1
ram:00159184	8ae8	brne_s r0,0,0x00159198
ram:00159186	cf701c00b475	mov_s r0,0x1c75b4
ram:0015918c	2220800f0e0060e2	jl 0x000ee260
ram:00159194	19000000	b 0x001591ac
ram:00159198	cf701c00d875	mov_s r0,0x1c75d8
ram:0015919e	412d0214	lsr r2,r13,0x10
ram:001591a2	b079	extw_s r1,r13
ram:001591a4	2220800f0e0060e2	jl 0x000ee260
ram:001591ac	fb76	mov_s blink,r14
ram:001591ae	01c6	ld_s r14,[sp,0x4]
ram:001591b0	2120c007	j.d [blink]
ram:001591b4	08140d34	_ld.ab r13,[sp,0x8]
