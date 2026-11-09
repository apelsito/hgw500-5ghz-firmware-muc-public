; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f4ba8 entry ram:000f4ba8
ram:000f4ba8	00100700	ld r7,[r0]
ram:000f4bac	0a26800f1d0044c4	mov r6,0x1dc444
ram:000f4bb4	001ec001	st r7,[r6]
ram:000f4bb8	04100500	ld r5,[r0,0x4]
ram:000f4bbc	00db	mov_s r3,0x0
ram:000f4bbe	041e4001	st r5,[r6,0x4]
ram:000f4bc2	08100400	ld r4,[r0,0x8]
ram:000f4bc6	081e0001	st r4,[r6,0x8]
ram:000f4bca	2480	ld_s r1,[r0,0x10]
ram:000f4bcc	101e4000	st r1,[r6,0x10]
ram:000f4bd0	4580	ld_s r2,[r0,0x14]
ram:000f4bd2	141e8000	st r2,[r6,0x14]
ram:000f4bd6	e07f	j_s.d [blink]
ram:000f4bd8	0c1ec000	_st r3,[r6,0xc]
