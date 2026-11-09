; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001730d0 entry ram:001730d0
ram:001730d0	fc1c48b3	st.aw r13,[sp,-0x4]
ram:001730d4	0a25c017	mov r13,blink
ram:001730d8	51083501	brhs.d r0,0x4,0x00173128
ram:001730dc	0a234000	_mov r3,r1
ram:001730e0	f0260c701700ec30	ld.as r12,[0x1730ec, r0]
ram:001730e8	007c	j_s [r12]
ram:001730fc	1d002000	b.d 0x00173118
ram:00173100	8a200a0f	_mov r0,0x2bc
ram:00173104	15002000	b.d 0x00173118
ram:00173108	8a200b00	_mov r0,0x2c0
ram:0017310c	0d002000	b.d 0x00173118
ram:00173110	8a200b01	_mov r0,0x2c4
ram:00173114	8a200b02	mov r0,0x2c8
ram:00173118	7fd9	mov_s r1,0x7f
ram:0017311a	07b9	asl_s r1,r1,0x7
ram:0017311c	4a22c001	mov r2,0x7
ram:00173120	2220800f1700d010	jl 0x001710d0
ram:00173128	fb75	mov_s blink,r13
ram:0017312a	e07f	j_s.d [blink]
ram:0017312c	04140d34	_ld.ab r13,[sp,0x4]
