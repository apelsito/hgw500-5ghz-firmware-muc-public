; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0012c67c entry ram:0012c67c
ram:0012c67c	fc1c48b3	st.aw r13,[sp,-0x4]
ram:0012c680	0a25c017	mov r13,blink
ram:0012c684	3020800f0000203b	ld r0,[r0, 0x3b20]
ram:0012c68c	2220800f1000482c	jl 0x00102c48
ram:0012c694	80e0	cmp_s r0,0x0
ram:0012c696	ca206200	mov.ne r0,0x1
ram:0012c69a	fb75	mov_s blink,r13
ram:0012c69c	04b8	asl_s r0,r0,0x4
ram:0012c69e	e07f	j_s.d [blink]
ram:0012c6a0	04140d34	_ld.ab r13,[sp,0x4]
