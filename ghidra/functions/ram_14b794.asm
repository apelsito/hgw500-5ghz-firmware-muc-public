; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0014b794 entry ram:0014b794
ram:0014b794	0020800f0000485b	add r0,r0,0x5b48
ram:0014b79c	fd108280	ldb r2,[r0,-0x3]
ram:0014b7a0	0d0a1000	breq r2,0x0,0x0014b7ac
ram:0014b7a4	11002000	b.d 0x0014b7b4
ram:0014b7a8	4a204000	_mov r0,0x1
ram:0014b7ac	cd108180	ldb r1,[r0,-0x33]
ram:0014b7b0	fae9	brne_s r1,0,0x0014b7a4
ram:0014b7b2	00d8	mov_s r0,0x0
ram:0014b7b4	2120c007	j.d [blink]
ram:0014b7b8	2f200700	_extb r0,r0
