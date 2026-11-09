; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0016c73c entry ram:0016c73c
ram:0016c73c	0a23800f180034c3	mov r3,0x18c334
ram:0016c744	2883	ld_s r1,[r3,0x20]
ram:0016c746	307a	extw_s r2,r1
ram:0016c748	30b9	lsr_s r1,r1,0x10
ram:0016c74a	1a22800f0000a741	mpy r0,r2,0x41a7
ram:0016c752	1a21820f0000a741	mpy r2,r1,0x41a7
ram:0016c75a	53228103	bmsk r1,r2,0xe
ram:0016c75e	10b9	asl_s r1,r1,0x10
ram:0016c760	2fba	lsr_s r2,r2,0xf
ram:0016c762	3860	add_s r0,r0,r1
ram:0016c764	d770ff7fffff	cmp_s r0,0x7fffffff
ram:0016c76a	d320ad07	bmsk.hi r0,r0,0x1e
ram:0016c76e	c0206d00	add.hi r0,r0,0x1
ram:0016c772	5860	add_s r0,r0,r2
ram:0016c774	d770ff7fffff	cmp_s r0,0x7fffffff
ram:0016c77a	d320ad07	bmsk.hi r0,r0,0x1e
ram:0016c77e	c0206d00	add.hi r0,r0,0x1
ram:0016c782	e07f	j_s.d [blink]
ram:0016c784	201b0000	_st r0,[r3,0x20]
