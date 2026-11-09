; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0012e45c entry ram:0012e45c
ram:0012e45c	0a22800f0380c075	mov r2,0x800375c0
ram:0012e464	357a	add2_s r2,r2,r1
ram:0012e466	4a264000	mov r6,0x1
ram:0012e46a	001a8001	st r6,[r2]
ram:0012e46e	18100501	ldh r5,[r0,0x18]
ram:0012e472	4a240000	mov r4,0x0
ram:0012e476	281a4001	st r5,[r2,0x28]
ram:0012e47a	3220830f0000ea04	ldb r3,[r0, 0x4ea]
ram:0012e482	781a0001	st r4,[r2,0x78]
ram:0012e486	a01a0001	st r4,[r2,0xa0]
ram:0012e48a	c81a0001	st r4,[r2,0xc8]
ram:0012e48e	74a2	st_s r3,[r2,0x50]
ram:0012e490	f01a0001	st r4,[r2,0xf0]
ram:0012e494	461a1801	st.as r4,[r2,0x46]
ram:0012e498	501a1801	st.as r4,[r2,0x50]
ram:0012e49c	5a1a1801	st.as r4,[r2,0x5a]
ram:0012e4a0	641a1801	st.as r4,[r2,0x64]
ram:0012e4a4	6e1a1801	st.as r4,[r2,0x6e]
ram:0012e4a8	781a1801	st.as r4,[r2,0x78]
ram:0012e4ac	2120c007	j.d [blink]
ram:0012e4b0	821a1801	_st.as r4,[r2,0x82]
