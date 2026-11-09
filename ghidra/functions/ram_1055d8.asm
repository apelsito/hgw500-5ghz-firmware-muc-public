; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001055d8 entry ram:001055d8
ram:001055d8	001604700280dcc8	ld r4,[0x8002c8dc]
ram:001055e0	0d0c1201	brlt r4,0x4,0x001055ec
ram:001055e4	0d002000	b.d 0x001055f0
ram:001055e8	4a248000	_mov r4,0x2
ram:001055ec	f90c1280	brlt r4,0x0,0x001055e4
ram:001055f0	cf71180030cd	mov_s r1,0x18cd30
ram:001055f6	15210101	add2 r1,r1,r4
ram:001055fa	4380	ld_s r2,[r0,0xc]
ram:001055fc	6081	ld_s r3,[r1,0x0]
ram:001055fe	00228c0f00006830	add r12,r2,0x3068
ram:00105606	60a4	st_s r3,[r12,0x0]
ram:00105608	e07e	j_s [blink]
