; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0013ea84 entry ram:0013ea84
ram:0013ea84	10e9	breq_s r1,0,0x0013eaa4
ram:0013ea86	e6b8	btst_s r0,0x6
ram:0013ea88	d020a201	bclr.ne r0,r0,0x6
ram:0013ea8c	e120c207	jne.d [blink]
ram:0013ea90	c0206208	_add.ne r0,r0,0x21
ram:0013ea94	5c68	asr_s r2,r0,0x4
ram:0013ea96	336a	asl_s r1,r2,0x3
ram:0013ea98	c3b8	bmsk_s r0,r0,0x3
ram:0013ea9a	5479	add1_s r1,r1,r2
ram:0013ea9c	2120c007	j.d [blink]
ram:0013eaa0	00204000	_add r0,r0,r1
ram:0013eaa4	2120c007	j.d [blink]
ram:0013eaa8	5020c001	_bclr r0,r0,0x7
