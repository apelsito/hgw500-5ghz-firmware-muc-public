; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_80025e54 entry ram:80025e54
ram:80025e54	86ea	brne_s r2,0,0x80025e60
ram:80025e56	4080	ld_s r2,[r0,0x0]
ram:80025e58	19002000	b.d 0x80025e70
ram:80025e5c	05218100	_or r1,r1,r2
ram:80025e60	0d0a5100	brne r2,0x1,0x80025e6c
ram:80025e64	4080	ld_s r2,[r0,0x0]
ram:80025e66	267a	bic_s r2,r2,r1
ram:80025e68	40a0	st_s r2,[r0,0x0]
ram:80025e6a	e07e	j_s [blink]
ram:80025e6c	82e2	cmp_s r2,0x2
ram:80025e6e	e07d	jne_s [blink]
ram:80025e70	20a0	st_s r1,[r0,0x0]
ram:80025e72	e07e	j_s [blink]
