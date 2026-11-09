; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f0ba4 entry ram:000f0ba4
ram:000f0ba4	40294101	asl r1,r1,0x5
ram:000f0ba8	18100400	ld r4,[r0,0x18]
ram:000f0bac	4a270000	mov r7,0x0
ram:000f0bb0	8071	add_s r1,r1,r4
ram:000f0bb2	40210604	add r6,r1,0x10
ram:000f0bb6	60a9	stb_s r3,[r1,0x0]
ram:000f0bb8	41a9	stb_s r2,[r1,0x1]
ram:000f0bba	0819c001	st r7,[r1,0x8]
ram:000f0bbe	0c19c001	st r7,[r1,0xc]
ram:000f0bc2	01a1	st_s r0,[r1,0x4]
ram:000f0bc4	1019c001	st r7,[r1,0x10]
ram:000f0bc8	14198001	st r6,[r1,0x14]
ram:000f0bcc	1819c001	st r7,[r1,0x18]
ram:000f0bd0	40210506	add r5,r1,0x18
ram:000f0bd4	2120c007	j.d [blink]
ram:000f0bd8	1c194001	_st r5,[r1,0x1c]
