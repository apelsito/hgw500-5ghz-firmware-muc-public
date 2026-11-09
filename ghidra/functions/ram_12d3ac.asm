; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0012d3ac entry ram:0012d3ac
ram:0012d3ac	0a22800f0380e08e	mov r2,0x80038ee0
ram:0012d3b4	6082	ld_s r3,[r2,0x0]
ram:0012d3b6	2182	ld_s r1,[r2,0x4]
ram:0012d3b8	cf7020008cfd	mov_s r0,0x20fd8c
ram:0012d3be	2018c080	st r3,[r0,-0xe0]
ram:0012d3c2	e07f	j_s.d [blink]
ram:0012d3c4	24184080	_st r1,[r0,-0xdc]
