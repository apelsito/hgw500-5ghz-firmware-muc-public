; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000eeb74 entry ram:000eeb74
ram:000eeb74	42224400	sub r4,r2,0x1
ram:000eeb78	8c24ff8f	cmp r4,-0x1
ram:000eeb7c	0ff2	beq_s 0x000eeb9a
ram:000eeb7e	2f248970	abs lp_count,r2
ram:000eeb82	e078	nop_s
ram:000eeb84	a820c002	lp 0x000eeb9a
ram:000eeb88	01118304	ldb.ab r3,[r1,0x1]
ram:000eeb8c	01108204	ldb.ab r2,[r0,0x1]
ram:000eeb90	0222c280	sub.f r2,r2,r3
ram:000eeb94	04f4	bne_s 0x000eeb9c
ram:000eeb96	e078	nop_s
ram:000eeb98	e078	nop_s
ram:000eeb9a	00da	mov_s r2,0x0
ram:000eeb9c	2120c007	j.d [blink]
ram:000eeba0	0a208000	_mov r0,r2
