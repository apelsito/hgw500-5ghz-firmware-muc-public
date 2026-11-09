; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00173074 entry ram:00173074
ram:00173074	fc1c48b3	st.aw r13,[sp,-0x4]
ram:00173078	0a25c017	mov r13,blink
ram:0017307c	4d083501	brhs.d r0,0x4,0x001730c8
ram:00173080	0a234000	_mov r3,r1
ram:00173084	f0260c7017009030	ld.as r12,[0x173090, r0]
ram:0017308c	007c	j_s [r12]
ram:001730a0	1d002000	b.d 0x001730bc
ram:001730a4	8a200a0f	_mov r0,0x2bc
ram:001730a8	15002000	b.d 0x001730bc
ram:001730ac	8a200b00	_mov r0,0x2c0
ram:001730b0	0d002000	b.d 0x001730bc
ram:001730b4	8a200b01	_mov r0,0x2c4
ram:001730b8	8a200b02	mov r0,0x2c8
ram:001730bc	7fd9	mov_s r1,0x7f
ram:001730be	00da	mov_s r2,0x0
ram:001730c0	2220800f1700d010	jl 0x001710d0
ram:001730c8	fb75	mov_s blink,r13
ram:001730ca	e07f	j_s.d [blink]
ram:001730cc	04140d34	_ld.ab r13,[sp,0x4]
