; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018bb50 entry ram:0018bb50
ram:0018bb50	40218307	add r3,r1,0x1e
ram:0018bb54	4a250000	mov r5,0x0
ram:0018bb58	011b5201	stb.ab r5,[r3,0x1]
ram:0018bb5c	011b5201	stb.ab r5,[r3,0x1]
ram:0018bb60	1d194201	stb r5,[r1,0x1d]
ram:0018bb64	28110400	ld r4,[r1,0x28]
ram:0018bb68	20194001	st r5,[r1,0x20]
ram:0018bb6c	3020800f0000203b	ld r0,[r0, 0x3b20]
ram:0018bb74	30190001	st r4,[r1,0x30]
ram:0018bb78	2089	ldb_s r1,[r1,0x0]
ram:0018bb7a	2020800f10002c25	j 0x0010252c
