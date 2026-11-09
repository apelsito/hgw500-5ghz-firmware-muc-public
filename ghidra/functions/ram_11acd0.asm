; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0011acd0 entry ram:0011acd0
ram:0011acd0	42290204	asr r2,r1,0x10
ram:0011acd4	2f228800	extw r2,r2
ram:0011acd8	61ba	sub_s r2,r2,0x1
ram:0011acda	83e2	cmp_s r2,0x3
ram:0011acdc	e020cd07	jhi [blink]
ram:0011ace0	f0268c701100f0ac	ld.as r12,[0x11acf0, r2]
ram:0011ace8	cf73028010ca	mov_s r3,0x8002ca10
ram:0011acee	007c	j_s [r12]
ram:0011ad00	2120c007	j.d [blink]
ram:0011ad04	1c1b4480	_sth r1,[r3,-0xe4]
ram:0011ad08	2120c007	j.d [blink]
ram:0011ad0c	1e1b4480	_sth r1,[r3,-0xe2]
ram:0011ad10	2120c007	j.d [blink]
ram:0011ad14	201b4480	_sth r1,[r3,-0xe0]
ram:0011ad18	2120c007	j.d [blink]
ram:0011ad1c	221b4480	_sth r1,[r3,-0xde]
