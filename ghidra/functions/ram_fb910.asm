; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000fb910 entry ram:000fb910
ram:000fb910	f01c48b3	st.aw r13,[sp,-0x10]
ram:000fb914	041cc037	st blink,[sp,0x4]
ram:000fb918	42c6	st_s r14,[sp,0x8]
ram:000fb91a	43c7	st_s r15,[sp,0xc]
ram:000fb91c	0c100800	ld r8,[r0,0xc]
ram:000fb920	4877	mov_s r15,r2
ram:000fb922	3020821f00001c30	ld r2,[r8, 0x301c]
ram:000fb92a	40290d04	asl r13,r1,0x10
ram:000fb92e	0876	mov_s r14,r0
ram:000fb930	4f254010	bset r0,r13,0x1
ram:000fb934	4578	or_s r0,r0,r2
ram:000fb936	00208c1f00001c30	add r12,r8,0x301c
ram:000fb93e	00a4	st_s r0,[r12,0x0]
ram:000fb940	0a208003	mov r0,r14
ram:000fb944	6a0eafff	bl.d 0x000fafac
ram:000fb948	4a210000	_mov r1,0x0
ram:000fb94c	0c160710	ld r7,[r14,0xc]
ram:000fb950	402f8511	asl r5,r15,0x6
ram:000fb954	0425850f0000c07f	and r5,r5,0x7fc0
ram:000fb95c	3027840f00003830	ld r4,[r7, 0x3038]
ram:000fb964	00278c0f00003830	add r12,r7,0x3038
ram:000fb96c	0424840fffff3f80	and r4,r4,0xffff803f
ram:000fb974	05244401	or r4,r4,r5
ram:000fb978	001c0011	st r4,[r12]
ram:000fb97c	0c160610	ld r6,[r14,0xc]
ram:000fb980	80bd	bset_s r13,r13,0x0
ram:000fb982	c970	mov_s r0,r14
ram:000fb984	3026830f00001c30	ld r3,[r6, 0x301c]
ram:000fb98c	00268c0f00001c30	add r12,r6,0x301c
ram:000fb994	a57b	or_s r3,r3,r13
ram:000fb996	60a4	st_s r3,[r12,0x0]
ram:000fb998	160eafff	bl.d 0x000fafac
ram:000fb99c	4a210000	_mov r1,0x0
ram:000fb9a0	04141f30	ld blink,[sp,0x4]
ram:000fb9a4	08140e30	ld r14,[sp,0x8]
ram:000fb9a8	03c7	ld_s r15,[sp,0xc]
ram:000fb9aa	e07f	j_s.d [blink]
ram:000fb9ac	10140d34	_ld.ab r13,[sp,0x10]
