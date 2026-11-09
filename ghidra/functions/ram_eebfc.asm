; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000eebfc entry ram:000eebfc
ram:000eebfc	00118400	ldb r4,[r1]
ram:000eec00	4a220000	mov r2,0x0
ram:000eec04	150c3100	brne.d r4,0x0,0x000eec18
ram:000eec08	40214500	_add r5,r1,0x1
ram:000eec0c	40224200	add r2,r2,0x1
ram:000eec10	2020800f390000fe	j 0x0039fe00
ram:000eec18	01158304	ldb.ab r3,[r5,0x1]
ram:000eec1c	fd0b3180	brne.d r3,0x0,0x000eec18
ram:000eec20	40224200	_add r2,r2,0x1
ram:000eec24	f4f1	b_s 0x000eec0c
