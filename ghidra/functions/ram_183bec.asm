; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00183bec entry ram:00183bec
ram:00183bec	00100400	ld r4,[r0]
ram:00183bf0	002b8300	asl r3,r3,r2
ram:00183bf4	06244400	bic r4,r4,r1
ram:00183bf8	6479	and_s r1,r1,r3
ram:00183bfa	05210101	or r1,r1,r4
ram:00183bfe	20a0	st_s r1,[r0,0x0]
ram:00183c00	e07e	j_s [blink]
