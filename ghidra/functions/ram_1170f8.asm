; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001170f8 entry ram:001170f8
ram:001170f8	3d09be01	bbit0.d r1,0x6,0x00117134
ram:001170fc	84210200	_and r1,r1,0x80
ram:00117100	0a21801f03800070	mov r9,0x80037000
ram:00117108	6e110316	ld.as r3,[r9,0x6e]
ram:0011710c	0a27800f0380e08e	mov r7,0x80038ee0
ram:00117114	0a24800f028064c9	mov r4,0x8002c964
ram:0011711c	40234300	add r3,r3,0x1
ram:00117120	6e19d810	st.as r3,[r9,0x6e]
ram:00117124	00170800	ld r8,[r7]
ram:00117128	04170600	ld r6,[r7,0x4]
ram:0011712c	581c0002	st r8,[r4,0x58]
ram:00117130	5c1c8001	st r6,[r4,0x5c]
ram:00117134	80e1	cmp_s r1,0x0
ram:00117136	e07c	jeq_s [blink]
ram:00117138	0a25800f03800070	mov r5,0x80037000
ram:00117140	6f150206	ld.as r2,[r5,0x6f]
ram:00117144	01e2	add_s r2,r2,0x1
ram:00117146	e07f	j_s.d [blink]
ram:00117148	6f1d9800	_st.as r2,[r5,0x6f]
