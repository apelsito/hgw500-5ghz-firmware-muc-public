; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00158210 entry ram:00158210
ram:00158210	9870	mov_s r4,r0
ram:00158212	0420800f00ff0000	and r0,r0,0xff000000
ram:0015821a	0424810ff0000000	and r1,r4,0xf00000
ram:00158222	34b9	lsr_s r1,r1,0x14
ram:00158224	0424820f0f000000	and r2,r4,0xf0000
ram:0015822c	0424830f000000ff	and r3,r4,0xff00
ram:00158234	38b8	lsr_s r0,r0,0x18
ram:00158236	28bb	lsr_s r3,r3,0x8
ram:00158238	412a0204	lsr r2,r2,0x10
ram:0015823c	09056fff	b.d 0x00156f44
ram:00158240	2f240701	_extb r4,r4
