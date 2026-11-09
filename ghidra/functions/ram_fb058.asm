; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fb058 entry ram:000fb058
ram:000fb058	1d099100	brne r1,0x2,0x000fb074
ram:000fb05c	0a23801f0380f477	mov r11,0x800377f4
ram:000fb064	57130916	ld.as r9,[r11,0x57]
ram:000fb068	40214910	add r9,r9,0x1
ram:000fb06c	21002000	b.d 0x000fb08c
ram:000fb070	571b5812	_st.as r9,[r11,0x57]
ram:000fb074	19095100	brne r1,0x1,0x000fb08c
ram:000fb078	0a22801f0380f477	mov r10,0x800377f4
ram:000fb080	58120516	ld.as r5,[r10,0x58]
ram:000fb084	40254500	add r5,r5,0x1
ram:000fb088	581a5811	st.as r5,[r10,0x58]
ram:000fb08c	4c240080	cmp r4,0x0
ram:000fb090	4a250000	mov r5,0x0
ram:000fb094	ca25820f10000000	mov.ne r5,0x100000
ram:000fb09c	0c100700	ld r7,[r0,0xc]
ram:000fb0a0	0025850f00001c30	add r5,r5,0x301c
ram:000fb0a8	30274601	ld r6,[r7, r5]
ram:000fb0ac	02ba	asl_s r2,r2,0x2
ram:000fb0ae	0426860f00103000	and r6,r6,0x10000030
ram:000fb0b6	10bb	asl_s r3,r3,0x10
ram:000fb0b8	4579	or_s r1,r1,r2
ram:000fb0ba	0a200091	mov.f r8,r4
ram:000fb0be	257b	or_s r3,r3,r1
ram:000fb0c0	ca206210	mov.ne r8,0x1
ram:000fb0c4	0526c600	or r6,r6,r3
ram:000fb0c8	40280815	asl r8,r8,0x14
ram:000fb0cc	0020881f00001c30	add r8,r8,0x301c
ram:000fb0d4	00270702	add r7,r7,r8
ram:000fb0d8	001f8001	st r6,[r7]
ram:000fb0dc	d106efff	b.d 0x000fafac
ram:000fb0e0	0a210001	_mov r1,r4
