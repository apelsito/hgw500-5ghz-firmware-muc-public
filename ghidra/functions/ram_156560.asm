; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00156560 entry ram:00156560
ram:00156560	5320c102	bmsk r1,r0,0xb
ram:00156564	0a24800f18004cc2	mov r4,0x18c24c
ram:0015656c	0420820fff0000f0	and r2,r0,0xfff000
ram:00156574	2cba	lsr_s r2,r2,0xc
ram:00156576	081c4400	sth r1,[r4,0x8]
ram:0015657a	0420830f00010000	and r3,r0,0x1000000
ram:00156582	38bb	lsr_s r3,r3,0x18
ram:00156584	0a1c8400	sth r2,[r4,0xa]
ram:00156588	0c1cc200	stb r3,[r4,0xc]
ram:0015658c	cf701c00ec72	mov_s r0,0x1c72ec
ram:00156592	2020800f0e0060e2	j 0x000ee260
