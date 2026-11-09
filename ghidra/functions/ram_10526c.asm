; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010526c entry ram:0010526c
ram:0010526c	4c21c080	cmp r1,0x3
ram:00105270	4a260070	nop
ram:00105274	e020c907	jgt [blink]
ram:00105278	80e1	cmp_s r1,0x0
ram:0010527a	e020cb07	jlt [blink]
ram:0010527e	cf73180020cd	mov_s r3,0x18cd20
ram:00105284	357b	add2_s r3,r3,r1
ram:00105286	0c100600	ld r6,[r0,0xc]
ram:0010528a	00130700	ld r7,[r3]
ram:0010528e	cf72180030cd	mov_s r2,0x18cd30
ram:00105294	00268c0f00005030	add r12,r6,0x3050
ram:0010529c	001cc011	st r7,[r12]
ram:001052a0	357a	add2_s r2,r2,r1
ram:001052a2	0c100500	ld r5,[r0,0xc]
ram:001052a6	00120400	ld r4,[r2]
ram:001052aa	00258c0f00006830	add r12,r5,0x3068
ram:001052b2	001c0011	st r4,[r12]
ram:001052b6	e07e	j_s [blink]
