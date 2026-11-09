; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fd7a0 entry ram:000fd7a0
ram:000fd7a0	0c100600	ld r6,[r0,0xc]
ram:000fd7a4	3026870f00000020	ld r7,[r6, 0x2000]
ram:000fd7ac	96261000	add3 r6,r6,0x400
ram:000fd7b0	15091000	breq r1,0x0,0x000fd7c4
ram:000fd7b4	0427880f1fc68a85	and r8,r7,0xc61f858a
ram:000fd7bc	00110700	ld r7,[r1]
ram:000fd7c0	05270702	or r7,r7,r8
ram:000fd7c4	001ec001	st r7,[r6]
ram:000fd7c8	0c100800	ld r8,[r0,0xc]
ram:000fd7cc	3020821f00002820	ld r2,[r8, 0x2028]
ram:000fd7d4	00208c1f00002820	add r12,r8,0x2028
ram:000fd7dc	a8ba	bclr_s r2,r2,0x8
ram:000fd7de	40a4	st_s r2,[r12,0x0]
ram:000fd7e0	0c100500	ld r5,[r0,0xc]
ram:000fd7e4	3025830f00002c20	ld r3,[r5, 0x202c]
ram:000fd7ec	0025850f00002c20	add r5,r5,0x202c
ram:000fd7f4	11091000	breq r1,0x0,0x000fd804
ram:000fd7f8	04110400	ld r4,[r1,0x4]
ram:000fd7fc	84232108	and r3,r3,-0x7a0
ram:000fd800	05230301	or r3,r3,r4
ram:000fd804	001dc000	st r3,[r5]
ram:000fd808	e07e	j_s [blink]
