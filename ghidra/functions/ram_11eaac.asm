; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0011eaac entry ram:0011eaac
ram:0011eaac	11093403	brlo.d r1,0xc,0x0011eabc
ram:0011eab0	0a220000	_mov r2,r0
ram:0011eab4	cf701c00142f	mov_s r0,0x1c2f14
ram:0011eaba	58f0	b_s 0x0011eb68
ram:0011eabc	f0264c701100c8ea	ld.as r12,[0x11eac8, r1]
ram:0011eac4	007c	j_s [r12]
ram:0011eaf8	4a240000	mov r4,0x0
ram:0011eafc	00228c0f0000ac5a	add r12,r2,0x5aac
ram:0011eb04	55002000	b.d 0x0011eb58
ram:0011eb08	001c0011	_st r4,[r12]
ram:0011eb0c	8a231607	mov r3,0x59c
ram:0011eb10	00228c0f0000ac5a	add r12,r2,0x5aac
ram:0011eb18	41002000	b.d 0x0011eb58
ram:0011eb1c	001cc010	_st r3,[r12]
ram:0011eb20	00228c0f0000ac5a	add r12,r2,0x5aac
ram:0011eb28	001c801f0000f70e	st 0xef7,[r12]
ram:0011eb30	29000000	b 0x0011eb58
ram:0011eb34	00228c0f0000ac5a	add r12,r2,0x5aac
ram:0011eb3c	001c801f0000f71e	st 0x1ef7,[r12]
ram:0011eb44	15000000	b 0x0011eb58
ram:0011eb48	00228c0f0000ac5a	add r12,r2,0x5aac
ram:0011eb50	001c801f00007e2c	st 0x2c7e,[r12]
ram:0011eb58	3022810f0000ac5a	ld r1,[r2, 0x5aac]
ram:0011eb60	0a20800f1c00582f	mov r0,0x1c2f58
ram:0011eb68	2020800f0e0060e2	j 0x000ee260
