; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00155e80 entry ram:00155e80
ram:00155e80	e1c5	push_s r13
ram:00155e82	eb75	mov_s r13,blink
ram:00155e84	3220800f00007c06	ldb r0,[r0, 0x67c]
ram:00155e8c	4c21c080	cmp r1,0x3
ram:00155e90	1c002100	beq.d 0x00155eac
ram:00155e94	ca21a101	_mov.eq r1,0x6
ram:00155e98	4c218080	cmp r1,0x2
ram:00155e9c	10002100	beq.d 0x00155eac
ram:00155ea0	ca216101	_mov.eq r1,0x5
ram:00155ea4	81e1	cmp_s r1,0x1
ram:00155ea6	01d9	mov_s r1,0x1
ram:00155ea8	c2214200	sub.ne r1,r1,r1
ram:00155eac	9a0fcfff	bl 0x00155e44
ram:00155eb0	4c200080	cmp r0,0x0
ram:00155eb4	ca202100	mov.eq r0,0x0
ram:00155eb8	08000100	beq 0x00155ec0
ram:00155ebc	58100001	ldh r0,[r0,0x58]
ram:00155ec0	fb75	mov_s blink,r13
ram:00155ec2	e07f	j_s.d [blink]
ram:00155ec4	04140d34	_ld.ab r13,[sp,0x4]
