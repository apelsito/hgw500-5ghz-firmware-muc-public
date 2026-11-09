; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f1bd8 entry ram:000f1bd8
ram:000f1bd8	42280c01	asr r12,r0,0x4
ram:000f1bdc	0a22800f1c004cb2	mov r2,0x1cb24c
ram:000f1be4	3bbc	lsr_s r12,r12,0x1b
ram:000f1be6	9860	add_s r0,r0,r12
ram:000f1be8	42284501	asr r5,r0,0x5
ram:000f1bec	c4b8	bmsk_s r0,r0,0x4
ram:000f1bee	8278	sub_s r0,r0,r12
ram:000f1bf0	15224301	add2 r3,r2,r5
ram:000f1bf4	002e047000000100	asl r4,0x1,r0
ram:000f1bfc	3183	ld_s r1,[r3,0x44]
ram:000f1bfe	1282	ld_s r0,[r2,0x48]
ram:000f1c00	06210101	bic r1,r1,r4
ram:000f1c04	31a3	st_s r1,[r3,0x44]
ram:000f1c06	01e0	add_s r0,r0,0x1
ram:000f1c08	2120c007	j.d [blink]
ram:000f1c0c	481a0000	_st r0,[r2,0x48]
