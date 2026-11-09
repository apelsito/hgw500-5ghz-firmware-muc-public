; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0013d37c entry ram:0013d37c
ram:0013d37c	fc1c48b3	st.aw r13,[sp,-0x4]
ram:0013d380	3020830f0000c004	ld r3,[r0, 0x4c0]
ram:0013d388	1d0b3000	breq.d r3,0x0,0x0013d3a4
ram:0013d38c	0a25c017	_mov r13,blink
ram:0013d390	3220820f0000e504	ldb r2,[r0, 0x4e5]
ram:0013d398	06ea	breq_s r2,0,0x0013d3a4
ram:0013d39a	2d83	ld_s r1,[r3,0x34]
ram:0013d39c	4c210080	cmp r1,0x0
ram:0013d3a0	e2204200	jlne [r1]
ram:0013d3a4	0a274033	mov blink,r13
ram:0013d3a8	4a260070	nop
ram:0013d3ac	2120c007	j.d [blink]
ram:0013d3b0	04140d34	_ld.ab r13,[sp,0x4]
