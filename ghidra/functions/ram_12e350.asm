; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0012e350 entry ram:0012e350
ram:0012e350	2c91	ldw_s r1,[r1,0x18]
ram:0012e352	42230380	sub.f r3,r3,0x0
ram:0012e356	4f7a	extb_s r2,r2
ram:0012e358	ca236200	mov.ne r3,0x1
ram:0012e35c	0421810fffffff3f	and r1,r1,0xffff3fff
ram:0012e364	10ba	asl_s r2,r2,0x10
ram:0012e366	18bb	asl_s r3,r3,0x18
ram:0012e368	3020840f0000043a	ld r4,[r0, 0x3a04]
ram:0012e370	457b	or_s r3,r3,r2
ram:0012e372	0cd8	mov_s r0,0xc
ram:0012e374	00140201	ldh r2,[r4]
ram:0012e378	657a	or_s r2,r2,r3
ram:0012e37a	00db	mov_s r3,0x0
ram:0012e37c	2020800f0e003cfe	j 0x000efe3c
