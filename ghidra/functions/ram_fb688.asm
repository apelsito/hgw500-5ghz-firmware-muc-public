; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fb688 entry ram:000fb688
ram:000fb688	0a234000	mov r3,r1
ram:000fb68c	0a248080	mov.f r4,r2
ram:000fb690	0c100600	ld r6,[r0,0xc]
ram:000fb694	28002100	beq.d 0x000fb6bc
ram:000fb698	4a270000	_mov r7,0x0
ram:000fb69c	00268c0f10002030	add r12,r6,0x103020
ram:000fb6a4	001cc011	st r7,[r12]
ram:000fb6a8	0c100500	ld r5,[r0,0xc]
ram:000fb6ac	00258c0f10002430	add r12,r5,0x103024
ram:000fb6b4	001cc011	st r7,[r12]
ram:000fb6b8	2d000000	b 0x000fb6e4
ram:000fb6bc	00268c0f00002030	add r12,r6,0x3020
ram:000fb6c4	001cc011	st r7,[r12]
ram:000fb6c8	2380	ld_s r1,[r0,0xc]
ram:000fb6ca	00218c0f00002430	add r12,r1,0x3024
ram:000fb6d2	001cc011	st r7,[r12]
ram:000fb6d6	4380	ld_s r2,[r0,0xc]
ram:000fb6d8	00228c0f00003830	add r12,r2,0x3038
ram:000fb6e0	001cc011	st r7,[r12]
ram:000fb6e4	4a214000	mov r1,0x1
ram:000fb6e8	7101efff	b.d 0x000fb058
ram:000fb6ec	4a220000	_mov r2,0x0
