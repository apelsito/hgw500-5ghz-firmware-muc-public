; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001663e8 entry ram:001663e8
ram:001663e8	0a22800f1900082e	mov r2,0x192e08
ram:001663f0	00120100	ld r1,[r2]
ram:001663f4	8c21ff8f	cmp r1,-0x1
ram:001663f8	e020c207	jne [blink]
ram:001663fc	2120c007	j.d [blink]
ram:00166400	001a0000	_st r0,[r2]
