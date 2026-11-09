; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001377c0 entry ram:001377c0
ram:001377c0	0a23800f0380f477	mov r3,0x800377f4
ram:001377c8	98130200	ld r2,[r3,0x98]
ram:001377cc	08ba	asl_s r2,r2,0x8
ram:001377ce	4578	or_s r0,r0,r2
ram:001377d0	9c130200	ld r2,[r3,0x9c]
ram:001377d4	08ba	asl_s r2,r2,0x8
ram:001377d6	981b0000	st r0,[r3,0x98]
ram:001377da	4579	or_s r1,r1,r2
ram:001377dc	2120c007	j.d [blink]
ram:001377e0	9c1b4000	_st r1,[r3,0x9c]
