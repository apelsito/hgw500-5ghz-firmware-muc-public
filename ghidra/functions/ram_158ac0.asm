; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00158ac0 entry ram:00158ac0
ram:00158ac0	fc1c48b3	st.aw r13,[sp,-0x4]
ram:00158ac4	00160270180070c2	ld r2,[0x18c270]
ram:00158acc	250a3000	breq.d r2,0x0,0x00158af0
ram:00158ad0	0a25c017	_mov r13,blink
ram:00158ad4	15200100	add2 r1,r0,r0
ram:00158ad8	3478	add1_s r0,r0,r1
ram:00158ada	3268	asl_s r1,r0,0x2
ram:00158adc	00224080	add.f r0,r2,r1
ram:00158ae0	ca22220b	mov.ne r2,0x2c
ram:00158ae4	ca212200	mov.ne r1,0x0
ram:00158ae8	e220820f0e0080ea	jlne 0x000eea80
ram:00158af0	fb75	mov_s blink,r13
ram:00158af2	e07f	j_s.d [blink]
ram:00158af4	04140d34	_ld.ab r13,[sp,0x4]
