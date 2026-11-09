; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00171ea0 entry ram:00171ea0
ram:00171ea0	0a22800f03e684fc	mov r2,0xe603fc84
ram:00171ea8	e5120006	ld.as r0,[r2,0xe5]
ram:00171eac	27b8	lsr_s r0,r0,0x7
ram:00171eae	84200308	and r0,r0,0xe0
ram:00171eb2	e07f	j_s.d [blink]
ram:00171eb4	41284001	_lsr r0,r0,0x5
