; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00104040 entry ram:00104040
ram:00104040	9520c10f	add2 r0,r0,0x7f
ram:00104044	44100280	ld r2,[r0,-0xbc]
ram:00104048	48100080	ld r0,[r0,-0xb8]
ram:0010404c	2082	ld_s r1,[r2,0x0]
ram:0010404e	89b9	bset_s r1,r1,0x9
ram:00104050	20a2	st_s r1,[r2,0x0]
ram:00104052	cf711a00745e	mov_s r1,0x1a5e74
ram:00104058	f5062ffd	b.d 0x000fe74c
ram:0010405c	4a220007	_mov r2,0x1c
