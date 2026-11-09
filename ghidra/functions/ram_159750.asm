; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00159750 entry ram:00159750
ram:00159750	f41c48b3	st.aw r13,[sp,-0xc]
ram:00159754	42c6	st_s r14,[sp,0x8]
ram:00159756	0876	mov_s r14,r0
ram:00159758	0a254010	mov r13,r1
ram:0015975c	58118000	ldb r0,[r1,0x58]
ram:00159760	20158410	ldb r4,[r13,0x20]
ram:00159764	59118100	ldb r1,[r1,0x59]
ram:00159768	250c3000	breq.d r4,0x0,0x0015978c
ram:0015976c	041cc037	_st blink,[sp,0x4]
ram:00159770	d60e0ffe	bl 0x00155e44
ram:00159774	0ce8	breq_s r0,0,0x0015978c
ram:00159776	e2160316	ld.as r3,[r14,0xe2]
ram:0015977a	0aeb	breq_s r3,0,0x0015978c
ram:0015977c	04108500	ldb r5,[r0,0x4]
ram:00159780	15234301	add2 r3,r3,r5
ram:00159784	4f95	ldw_s r2,[r13,0x1e]
ram:00159786	2e83	ld_s r1,[r3,0x38]
ram:00159788	5961	add_s r1,r1,r2
ram:0015978a	2ea3	st_s r1,[r3,0x38]
ram:0015978c	04141f30	ld blink,[sp,0x4]
ram:00159790	02c6	ld_s r14,[sp,0x8]
ram:00159792	e07f	j_s.d [blink]
ram:00159794	0c140d34	_ld.ab r13,[sp,0xc]
