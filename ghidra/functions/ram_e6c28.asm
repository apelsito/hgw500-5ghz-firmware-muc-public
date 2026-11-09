; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000e6c28 entry ram:000e6c28
ram:000e6c28	1d085306	brge r0,0x19,0x000e6c44
ram:000e6c2c	9a68	asr_s r12,r0,0x2
ram:000e6c2e	3dbc	lsr_s r12,r12,0x1d
ram:000e6c30	9860	add_s r0,r0,r12
ram:000e6c32	7b68	asr_s r3,r0,0x3
ram:000e6c34	c2b8	bmsk_s r0,r0,0x2
ram:000e6c36	3223820f180034c0	ldb r2,[r3, 0x18c034]
ram:000e6c3e	8278	sub_s r0,r0,r12
ram:000e6c40	0d0a0f00	bbit1 r2,r0,0x000e6c4c
ram:000e6c44	2120c007	j.d [blink]
ram:000e6c48	4a200000	_mov r0,0x0
ram:000e6c4c	2120c007	j.d [blink]
ram:000e6c50	4a204000	_mov r0,0x1
