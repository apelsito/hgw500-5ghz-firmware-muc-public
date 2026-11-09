; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00102d9c entry ram:00102d9c
ram:00102d9c	0c100400	ld r4,[r0,0xc]
ram:00102da0	0a210000	mov r1,r0
ram:00102da4	3024800f00004c05	ld r0,[r4, 0x54c]
ram:00102dac	f8110200	ld r2,[r1,0xf8]
ram:00102db0	057a	or_s r2,r2,r0
ram:00102db2	6381	ld_s r3,[r1,0xc]
ram:00102db4	f8198000	st r2,[r1,0xf8]
ram:00102db8	00238c0f00004c05	add r12,r3,0x54c
ram:00102dc0	00a4	st_s r0,[r12,0x0]
ram:00102dc2	e07e	j_s [blink]
