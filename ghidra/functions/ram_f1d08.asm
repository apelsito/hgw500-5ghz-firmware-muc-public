; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f1d08 entry ram:000f1d08
ram:000f1d08	4c210080	cmp r1,0x0
ram:000f1d0c	4a260070	nop
ram:000f1d10	e07d	jne_s [blink]
ram:000f1d12	cf721c004cb2	mov_s r2,0x1cb24c
ram:000f1d18	3382	ld_s r1,[r2,0x4c]
ram:000f1d1a	002e037000000100	asl r3,0x1,r0
ram:000f1d22	6679	bic_s r1,r1,r3
ram:000f1d24	2120c007	j.d [blink]
ram:000f1d28	4c1a4000	_st r1,[r2,0x4c]
