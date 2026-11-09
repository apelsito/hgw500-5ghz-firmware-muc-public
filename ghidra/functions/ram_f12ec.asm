; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f12ec entry ram:000f12ec
ram:000f12ec	30100400	ld r4,[r0,0x30]
ram:000f12f0	4d240080	rcmp r4,0x0
ram:000f12f4	e020ca07	jge [blink]
ram:000f12f8	44100500	ld r5,[r0,0x44]
ram:000f12fc	0a240071	mov lp_count,r4
ram:000f1300	4a210000	mov r1,0x0
ram:000f1304	a8208002	lp 0x000f1318
ram:000f1308	5569	asl_s r2,r1,0x5
ram:000f130a	32258300	ldb r3,[r5, r2]
ram:000f130e	a072	add_s r2,r2,r5
ram:000f1310	01e1	add_s r1,r1,0x1
ram:000f1312	82bb	bset_s r3,r3,0x2
ram:000f1314	001ac200	stb r3,[r2]
ram:000f1318	e07e	j_s [blink]
