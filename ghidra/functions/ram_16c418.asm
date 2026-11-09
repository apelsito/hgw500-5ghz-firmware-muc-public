; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0016c418 entry ram:0016c418
ram:0016c418	4a230000	mov r3,0x0
ram:0016c41c	0a22800f21000ce0	mov r2,0x21e00c
ram:0016c424	65a2	st_s r3,[r2,0x14]
ram:0016c426	001680700280bcc8	ldb r0,[0x8002c8bc]
ram:0016c42e	01d9	mov_s r1,0x1
ram:0016c430	001ec07018004cc3	st r3,[0x18c34c]
ram:0016c438	83e0	cmp_s r0,0x3
ram:0016c43a	ca20c100	mov.eq r0,r3
ram:0016c43e	ca204200	mov.ne r0,r1
ram:0016c442	e07f	j_s.d [blink]
ram:0016c444	1c1ac000	_st r3,[r2,0x1c]
