; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001799f8 entry ram:001799f8
ram:001799f8	0a230000	mov r3,r0
ram:001799fc	001602701800f0c2	ld r2,[0x18c2f0]
ram:00179a04	02ba	asl_s r2,r2,0x2
ram:00179a06	0a24800f19002432	mov r4,0x193224
ram:00179a0e	567a	add3_s r2,r2,r2
ram:00179a10	00d8	mov_s r0,0x0
ram:00179a12	02bb	asl_s r3,r3,0x2
ram:00179a14	557a	add2_s r2,r2,r2
ram:00179a16	757b	add2_s r3,r3,r3
ram:00179a18	4a248072	mov lp_count,0xa
ram:00179a1c	747b	add1_s r3,r3,r3
ram:00179a1e	7a62	add_s r2,r2,r3
ram:00179a20	a8200003	lp 0x00179a38
ram:00179a24	34248500	ldh r5,[r4, r2]
ram:00179a28	0d0d3000	breq.d r5,0x0,0x00179a34
ram:00179a2c	00248300	_add r3,r4,r2
ram:00179a30	0d094001	breq r1,r5,0x00179a3c
ram:00179a34	40228201	add r2,r2,0x6
ram:00179a38	09000000	b 0x00179a40
ram:00179a3c	0193	ldw_s r0,[r3,0x2]
ram:00179a3e	e07e	j_s [blink]
ram:00179a40	e07e	j_s [blink]
