; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0013a934 entry ram:0013a934
ram:0013a934	fc1c48b3	st.aw r13,[sp,-0x4]
ram:0013a938	0a25c017	mov r13,blink
ram:0013a93c	cf711800c4c1	mov_s r1,0x18c1c4
ram:0013a942	0781	ld_s r0,[r1,0x1c]
ram:0013a944	4a220000	mov r2,0x0
ram:0013a948	15083000	breq.d r0,0x0,0x0013a95c
ram:0013a94c	18198000	_st r2,[r1,0x18]
ram:0013a950	2220800f18000ca9	jl 0x0018a90c
ram:0013a958	0d000000	b 0x0013a964
ram:0013a95c	2220800f1800f8a8	jl 0x0018a8f8
ram:0013a964	fb75	mov_s blink,r13
ram:0013a966	e07f	j_s.d [blink]
ram:0013a968	04140d34	_ld.ab r13,[sp,0x4]
