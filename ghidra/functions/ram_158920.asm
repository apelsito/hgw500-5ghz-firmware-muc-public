; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00158920 entry ram:00158920
ram:00158920	e1c5	push_s r13
ram:00158922	38110400	ld r4,[r1,0x38]
ram:00158926	eb75	mov_s r13,blink
ram:00158928	01da	mov_s r2,0x1
ram:0015892a	00db	mov_s r3,0x0
ram:0015892c	3224810f00007c06	ldb r1,[r4, 0x67c]
ram:00158934	f20befff	bl.d 0x00158524
ram:00158938	0a24c000	_mov r4,r3
ram:0015893c	0a23800f0380f477	mov r3,0x800377f4
ram:00158944	5b130206	ld.as r2,[r3,0x5b]
ram:00158948	fb75	mov_s blink,r13
ram:0015894a	01e2	add_s r2,r2,0x1
ram:0015894c	c1c5	pop_s r13
ram:0015894e	e07f	j_s.d [blink]
ram:00158950	5b1b9800	_st.as r2,[r3,0x5b]
