; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018a580 entry ram:0018a580
ram:0018a580	0a21800fffe584fe	mov r1,0xe5fffe84
ram:0018a588	5f110206	ld.as r2,[r1,0x5f]
ram:0018a58c	e6ba	btst_s r2,0x6
ram:0018a58e	ca20820f00005000	mov.ne r0,0x50
ram:0018a596	e07d	jne_s [blink]
ram:0018a598	5122c080	btst r2,0x3
ram:0018a59c	e120c207	jne.d [blink]
ram:0018a5a0	4a20000a	_mov r0,0x28
ram:0018a5a4	2120c007	j.d [blink]
ram:0018a5a8	4a200005	_mov r0,0x14
