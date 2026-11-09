; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0013665c entry ram:0013665c
ram:0013665c	fc1c48b3	st.aw r13,[sp,-0x4]
ram:00136660	0a25c017	mov r13,blink
ram:00136664	2872	mov_s r2,r1
ram:00136666	0780	ld_s r0,[r0,0x1c]
ram:00136668	00d9	mov_s r1,0x0
ram:0013666a	3020800f0000203b	ld r0,[r0, 0x3b20]
ram:00136672	2220800f10008850	jl 0x00105088
ram:0013667a	fb75	mov_s blink,r13
ram:0013667c	c1c5	pop_s r13
ram:0013667e	e07f	j_s.d [blink]
ram:00136680	4a200000	_mov r0,0x0
