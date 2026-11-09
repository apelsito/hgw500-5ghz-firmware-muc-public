; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fafac entry ram:000fafac
ram:000fafac	fc1c48b3	st.aw r13,[sp,-0x4]
ram:000fafb0	0a25c017	mov r13,blink
ram:000fafb4	2872	mov_s r2,r1
ram:000fafb6	cf7300003f9c	mov_s r3,0x9c3f
ram:000fafbc	0a24c070	mov lp_count,r3
ram:000fafc0	0c100800	ld r8,[r0,0xc]
ram:000fafc4	a8200005	lp 0x000fafec
ram:000fafc8	150a1000	breq r2,0x0,0x000fafdc
ram:000fafcc	3020811f10001c30	ld r1,[r8, 0x10301c]
ram:000fafd4	1509de07	bbit0 r1,0x1f,0x000fafe8
ram:000fafd8	41000000	b 0x000fb018
ram:000fafdc	3020811f00001c30	ld r1,[r8, 0x301c]
ram:000fafe4	3509df07	bbit1 r1,0x1f,0x000fb018
ram:000fafe8	42234300	sub r3,r3,0x1
ram:000fafec	0a26800f0380f477	mov r6,0x800377f4
ram:000faff4	5a160406	ld.as r4,[r6,0x5a]
ram:000faff8	0a20800f1b00d0f2	mov r0,0x1bf2d0
ram:000fb000	40244400	add r4,r4,0x1
ram:000fb004	5a1e1801	st.as r4,[r6,0x5a]
ram:000fb008	2220800f0e0060e2	jl 0x000ee260
ram:000fb010	41002000	b.d 0x000fb050
ram:000fb014	4a204000	_mov r0,0x1
ram:000fb018	0a25800f0380f477	mov r5,0x800377f4
ram:000fb020	59150706	ld.as r7,[r5,0x59]
ram:000fb024	0e23810f0000409c	rsub r1,r3,0x9c40
ram:000fb02c	0909c401	brlo r1,r7,0x000fb034
ram:000fb030	591d5800	st.as r1,[r5,0x59]
ram:000fb034	190b850f0000204e	brhs r3,0x4e20,0x000fb04c
ram:000fb03c	0a20800f1b0008f3	mov r0,0x1bf308
ram:000fb044	2220800f0e0060e2	jl 0x000ee260
ram:000fb04c	4a200000	mov r0,0x0
ram:000fb050	fb75	mov_s blink,r13
ram:000fb052	e07f	j_s.d [blink]
ram:000fb054	04140d34	_ld.ab r13,[sp,0x4]
