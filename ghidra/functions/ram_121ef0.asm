; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00121ef0 entry ram:00121ef0
ram:00121ef0	1c100900	ld r9,[r0,0x1c]
ram:00121ef4	0c118200	ldb r2,[r1,0xc]
ram:00121ef8	0c110810	ld r8,[r9,0xc]
ram:00121efc	04ba	asl_s r2,r2,0x4
ram:00121efe	00100710	ld r7,[r8]
ram:00121f02	557a	add2_s r2,r2,r2
ram:00121f04	1c170300	ld r3,[r7,0x1c]
ram:00121f08	10110400	ld r4,[r1,0x10]
ram:00121f0c	0023830f0000a546	add r3,r3,0x46a5
ram:00121f14	32238500	ldb r5,[r3, r2]
ram:00121f18	0d0d5100	brne r5,0x1,0x00121f24
ram:00121f1c	11002000	b.d 0x00121f2c
ram:00121f20	4a264000	_mov r6,0x1
ram:00121f24	f90d9080	breq r5,0x2,0x00121f1c
ram:00121f28	4a260000	mov r6,0x0
ram:00121f2c	2120c007	j.d [blink]
ram:00121f30	001c8001	_st r6,[r4]
