; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0012ca88 entry ram:0012ca88
ram:0012ca88	42241c33	sub sp,sp,0xc
ram:0012ca8c	0a23800f20008cfd	mov r3,0x20fd8c
ram:0012ca94	15083501	brhs.d r0,0x4,0x0012caa8
ram:0012ca98	0a260007	_mov r6,sp
ram:0012ca9c	5268	asl_s r2,r0,0x2
ram:0012ca9e	547a	add1_s r2,r2,r2
ram:0012caa0	0d002000	b.d 0x0012caac
ram:0012caa4	0022c200	_add r2,r2,r3
ram:0012caa8	40230209	add r2,r3,0x24
ram:0012caac	28120b80	ld r11,[r2,-0xd8]
ram:0012cab0	2c120a80	ld r10,[r2,-0xd4]
ram:0012cab4	30120980	ld r9,[r2,-0xd0]
ram:0012cab8	001cc032	st r11,[sp]
ram:0012cabc	041c8032	st r10,[sp,0x4]
ram:0012cac0	081c4032	st r9,[sp,0x8]
ram:0012cac4	00160400	ld r4,[r6]
ram:0012cac8	04160000	ld r0,[r6,0x4]
ram:0012cacc	1c2601716210d34d	mpyhu r1,0x10624dd3,r4
ram:0012cad4	9d200f0a	mpyu r0,r0,0x3e8
ram:0012cad8	25b9	lsr_s r1,r1,0x5
ram:0012cada	3860	add_s r0,r0,r1
ram:0012cadc	2120c007	j.d [blink]
ram:0012cae0	40241c33	_add sp,sp,0xc
