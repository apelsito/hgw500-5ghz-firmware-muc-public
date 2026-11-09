; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000efab8 entry ram:000efab8
ram:000efab8	31090500	brhs r1,r0,0x000efae8
ram:000efabc	00218400	add r4,r1,r2
ram:000efac0	42224900	sub r9,r2,0x1
ram:000efac4	8c21ff9f	cmp r9,-0x1
ram:000efac8	e120c107	jeq.d [blink]
ram:000efacc	00208100	_add r1,r0,r2
ram:000efad0	2f248970	abs lp_count,r2
ram:000efad4	4a260070	nop
ram:000efad8	a8208001	lp 0x000efae4
ram:000efadc	ff148882	ldb.aw r8,[r4,-0x1]
ram:000efae0	ff190a82	stb.aw r8,[r1,-0x1]
ram:000efae4	29000000	b 0x000efb0c
ram:000efae8	3070	cmp_s r0,r1
ram:000efaea	e020c607	jnc [blink]
ram:000efaee	42224500	sub r5,r2,0x1
ram:000efaf2	8c25ff8f	cmp r5,-0x1
ram:000efaf6	e07c	jeq_s [blink]
ram:000efaf8	2f248970	abs lp_count,r2
ram:000efafc	0a270000	mov r7,r0
ram:000efb00	a8208001	lp 0x000efb0c
ram:000efb04	01118604	ldb.ab r6,[r1,0x1]
ram:000efb08	011f9201	stb.ab r6,[r7,0x1]
ram:000efb0c	e07e	j_s [blink]
