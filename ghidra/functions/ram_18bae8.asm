; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018bae8 entry ram:0018bae8
ram:0018bae8	f81c48b3	st.aw r13,[sp,-0x8]
ram:0018baec	001684700280bcc8	ldb r4,[0x8002c8bc]
ram:0018baf4	041c8033	st r14,[sp,0x4]
ram:0018baf8	4c24c080	cmp r4,0x3
ram:0018bafc	42002200	bne.d 0x0018bb3e
ram:0018bb00	0a26c017	_mov r14,blink
ram:0018bb04	cf750280c8c9	mov_s r13,0x8002c9c8
ram:0018bb0a	0085	ld_s r0,[r13,0x0]
ram:0018bb0c	88e8	brne_s r0,0,0x0018bb1c
ram:0018bb0e	4185	ld_s r2,[r13,0x4]
ram:0018bb10	4c220080	cmp r2,0x0
ram:0018bb14	2a000100	beq 0x0018bb3e
ram:0018bb18	21000000	b 0x0018bb38
ram:0018bb1c	2220800f1500601a	jl 0x00151a60
ram:0018bb24	0d083000	breq.d r0,0x0,0x0018bb30
ram:0018bb28	04150110	_ld r1,[r13,0x4]
ram:0018bb2c	00db	mov_s r3,0x0
ram:0018bb2e	60a5	st_s r3,[r13,0x0]
ram:0018bb30	4c210080	cmp r1,0x0
ram:0018bb34	0a000100	beq 0x0018bb3e
ram:0018bb38	e078	nop_s
ram:0018bb3a	6f213f00	sleep 0x0
ram:0018bb3e	0a278033	mov blink,r14
ram:0018bb42	04140e30	ld r14,[sp,0x4]
ram:0018bb46	2120c007	j.d [blink]
ram:0018bb4a	08140d34	_ld.ab r13,[sp,0x8]
