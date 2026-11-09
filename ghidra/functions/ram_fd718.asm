; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fd718 entry ram:000fd718
ram:000fd718	0c100600	ld r6,[r0,0xc]
ram:000fd71c	3026840f00000020	ld r4,[r6, 0x2000]
ram:000fd724	96261000	add3 r6,r6,0x400
ram:000fd728	19091000	breq r1,0x0,0x000fd740
ram:000fd72c	0424890fe039757a	and r9,r4,0x39e07a75
ram:000fd734	00194002	st r9,[r1]
ram:000fd738	0c100600	ld r6,[r0,0xc]
ram:000fd73c	96261000	add3 r6,r6,0x400
ram:000fd740	0524840fe039757a	or r4,r4,0x39e07a75
ram:000fd748	001e0001	st r4,[r6]
ram:000fd74c	0c100700	ld r7,[r0,0xc]
ram:000fd750	3027830f00002820	ld r3,[r7, 0x2028]
ram:000fd758	00278c0f00002820	add r12,r7,0x2028
ram:000fd760	88bb	bset_s r3,r3,0x8
ram:000fd762	60a4	st_s r3,[r12,0x0]
ram:000fd764	0c100500	ld r5,[r0,0xc]
ram:000fd768	3025820f00002c20	ld r2,[r5, 0x202c]
ram:000fd770	0025850f00002c20	add r5,r5,0x202c
ram:000fd778	1d091000	breq r1,0x0,0x000fd794
ram:000fd77c	0422880f00009f07	and r8,r2,0x79f
ram:000fd784	04190002	st r8,[r1,0x4]
ram:000fd788	0c100500	ld r5,[r0,0xc]
ram:000fd78c	0025850f00002c20	add r5,r5,0x202c
ram:000fd794	8522de07	or r2,r2,0x79f
ram:000fd798	001d8000	st r2,[r5]
ram:000fd79c	e07e	j_s [blink]
