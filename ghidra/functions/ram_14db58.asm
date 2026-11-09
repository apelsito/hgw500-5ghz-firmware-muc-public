; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0014db58 entry ram:0014db58
ram:0014db58	3220840f00002c05	ldb r4,[r0, 0x52c]
ram:0014db60	4c240080	cmp r4,0x0
ram:0014db64	e07c	jeq_s [blink]
ram:0014db66	40290302	asl r3,r1,0x8
ram:0014db6a	00208c0f00002005	add r12,r0,0x520
ram:0014db72	0023820f000000f6	add r2,r3,0xf600
ram:0014db7a	46ba	asr_s r2,r2,0x6
ram:0014db7c	0023810f000040f6	add r1,r3,0xf640
ram:0014db84	40a4	st_s r2,[r12,0x0]
ram:0014db86	46b9	asr_s r1,r1,0x6
ram:0014db88	00208c0f00002405	add r12,r0,0x524
ram:0014db90	20a4	st_s r1,[r12,0x0]
ram:0014db92	c773000080f6	add_s r3,r3,0xf680
ram:0014db98	46bb	asr_s r3,r3,0x6
ram:0014db9a	00208c0f00002805	add r12,r0,0x528
ram:0014dba2	e07f	j_s.d [blink]
ram:0014dba4	001cc010	_st r3,[r12]
