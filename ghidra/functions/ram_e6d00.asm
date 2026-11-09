; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e6d00 entry ram:000e6d00
ram:000e6d00	9a68	asr_s r12,r0,0x2
ram:000e6d02	3dbc	lsr_s r12,r12,0x1d
ram:000e6d04	9860	add_s r0,r0,r12
ram:000e6d06	3b68	asr_s r1,r0,0x3
ram:000e6d08	c2b8	bmsk_s r0,r0,0x2
ram:000e6d0a	8278	sub_s r0,r0,r12
ram:000e6d0c	002e027000000100	asl r2,0x1,r0
ram:000e6d14	c771180034c0	add_s r1,r1,0x18c034
ram:000e6d1a	0089	ldb_s r0,[r1,0x0]
ram:000e6d1c	06208000	bic r0,r0,r2
ram:000e6d20	8503efff	b.d 0x000e68a4
ram:000e6d24	00190200	_stb r0,[r1]
