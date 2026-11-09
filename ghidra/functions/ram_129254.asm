; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00129254 entry ram:00129254
ram:00129254	00100a00	ld r10,[r0]
ram:00129258	2c128910	ldb r9,[r10,0x2c]
ram:0012925c	4c218091	cmp r9,0x6
ram:00129260	e07d	jne_s [blink]
ram:00129262	18100701	ldh r7,[r0,0x18]
ram:00129266	2e120811	ldh r8,[r10,0x2e]
ram:0012926a	0427860fffffff3f	and r6,r7,0xffff3fff
ram:00129272	0c260082	cmp r6,r8
ram:00129276	e020c907	jgt [blink]
ram:0012927a	78120510	ld r5,[r10,0x78]
ram:0012927e	412ec600	lsr r6,r6,0x3
ram:00129282	53278700	bmsk r7,r7,0x2
ram:00129286	002ec37100000100	asl r3,0x1,r7
ram:0012928e	32258201	ldb r2,[r5, r6]
ram:00129292	04238400	and r4,r3,r2
ram:00129296	42240480	sub.f r4,r4,0x0
ram:0012929a	ca246200	mov.ne r4,0x1
ram:0012929e	9071	cmp_s r1,r4
ram:001292a0	e120c107	jeq.d [blink]
ram:001292a4	00258501	_add r5,r5,r6
ram:001292a8	80e1	cmp_s r1,0x0
ram:001292aa	c622c100	bic.eq r2,r2,r3
ram:001292ae	04f2	beq_s 0x001292b4
ram:001292b0	0522c200	or r2,r2,r3
ram:001292b4	2120c007	j.d [blink]
ram:001292b8	001d8200	_stb r2,[r5]
