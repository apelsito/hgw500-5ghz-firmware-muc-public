; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00188958 entry ram:00188958
ram:00188958	0a22800f09e60002	mov r2,0xe6090200
ram:00188960	3c120380	ld r3,[r2,-0xc4]
ram:00188964	0871	mov_s r1,r0
ram:00188966	80e3	cmp_s r3,0x0
ram:00188968	e120c107	jeq.d [blink]
ram:0018896c	4a200000	_mov r0,0x0
ram:00188970	02b9	asl_s r1,r1,0x2
ram:00188972	3021800f09e62c01	ld r0,[r1, 0xe609012c]
ram:0018897a	e07e	j_s [blink]
