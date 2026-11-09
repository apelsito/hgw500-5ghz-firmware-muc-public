; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f99ec entry ram:000f99ec
ram:000f99ec	0c100300	ld r3,[r0,0xc]
ram:000f99f0	53214100	bmsk r1,r1,0x1
ram:000f99f4	3023820f00000030	ld r2,[r3, 0x3000]
ram:000f99fc	00238c0f00000030	add r12,r3,0x3000
ram:000f9a04	84223f0f	and r2,r2,-0x4
ram:000f9a08	4579	or_s r1,r1,r2
ram:000f9a0a	20a4	st_s r1,[r12,0x0]
ram:000f9a0c	e07e	j_s [blink]
