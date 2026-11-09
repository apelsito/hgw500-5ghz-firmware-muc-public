; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00188938 entry ram:00188938
ram:00188938	0a21800f09e60002	mov r1,0xe6090200
ram:00188940	3c110280	ld r2,[r1,-0xc4]
ram:00188944	4c220080	cmp r2,0x0
ram:00188948	e120c107	jeq.d [blink]
ram:0018894c	4a200000	_mov r0,0x0
ram:00188950	28110080	ld r0,[r1,-0xd8]
ram:00188954	e07e	j_s [blink]
