; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010bda4 entry ram:0010bda4
ram:0010bda4	4a200010	mov r8,0x0
ram:0010bda8	4a248077	mov lp_count,0x1e
ram:0010bdac	0a21801f18008ccd	mov r9,0x18cd8c
ram:0010bdb4	a8208003	lp 0x0010bdd0
ram:0010bdb8	40288710	asl r7,r8,0x2
ram:0010bdbc	1527c701	add2 r7,r7,r7
ram:0010bdc0	3021ca11	ld r10,[r9, r7]
ram:0010bdc4	1108a002	breq.d r0,r10,0x0010bdd4
ram:0010bdc8	00274702	_add r7,r7,r9
ram:0010bdcc	40204810	add r8,r8,0x1
ram:0010bdd0	2d000000	b 0x0010bdfc
ram:0010bdd4	1909110a	brne r1,0x28,0x0010bdec
ram:0010bdd8	08170800	ld r8,[r7,0x8]
ram:0010bddc	001c0002	st r8,[r4]
ram:0010bde0	04170700	ld r7,[r7,0x4]
ram:0010bde4	19002000	b.d 0x0010bdfc
ram:0010bde8	001bc001	_st r7,[r3]
ram:0010bdec	0c170600	ld r6,[r7,0xc]
ram:0010bdf0	001c8001	st r6,[r4]
ram:0010bdf4	10170500	ld r5,[r7,0x10]
ram:0010bdf8	001b4001	st r5,[r3]
ram:0010bdfc	4a250000	mov r5,0x0
ram:0010be00	4a248074	mov lp_count,0x12
ram:0010be04	0a22801f1800e4cf	mov r10,0x18cfe4
ram:0010be0c	a8200005	lp 0x0010be34
ram:0010be10	402d8600	asl r6,r5,0x2
ram:0010be14	15268601	add2 r6,r6,r6
ram:0010be18	30228b11	ld r11,[r10, r6]
ram:0010be1c	1508e102	brne.d r0,r11,0x0010be30
ram:0010be20	00268602	_add r6,r6,r10
ram:0010be24	2909110a	brne r1,0x28,0x0010be4c
ram:0010be28	04160900	ld r9,[r6,0x4]
ram:0010be2c	0d0a4002	breq r2,r9,0x0010be38
ram:0010be30	40254500	add r5,r5,0x1
ram:0010be34	2020c007	j [blink]
ram:0010be38	08160000	ld r0,[r6,0x8]
ram:0010be3c	001c0000	st r0,[r4]
ram:0010be40	04160200	ld r2,[r6,0x4]
ram:0010be44	2120c007	j.d [blink]
ram:0010be48	001b8000	_st r2,[r3]
ram:0010be4c	001c0000	st r0,[r4]
ram:0010be50	00d9	mov_s r1,0x0
ram:0010be52	e07f	j_s.d [blink]
ram:0010be54	001b4000	_st r1,[r3]
