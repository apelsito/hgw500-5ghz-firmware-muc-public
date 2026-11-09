; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0014bf74 entry ram:0014bf74
ram:0014bf74	f81c48b3	st.aw r13,[sp,-0x8]
ram:0014bf78	041cc037	st blink,[sp,0x4]
ram:0014bf7c	5e0defff	bl.d 0x0014bcd8
ram:0014bf80	0a250010	_mov r13,r0
ram:0014bf84	fe0defff	bl.d 0x0014bd80
ram:0014bf88	0a204003	_mov r0,r13
ram:0014bf8c	9a0eefff	bl.d 0x0014be24
ram:0014bf90	0a204003	_mov r0,r13
ram:0014bf94	360fefff	bl.d 0x0014bec8
ram:0014bf98	0a204003	_mov r0,r13
ram:0014bf9c	0a23800f140084c7	mov r3,0x14c784
ram:0014bfa4	8a200f0a	mov r0,0x3e8
ram:0014bfa8	a971	mov_s r1,r13
ram:0014bfaa	00da	mov_s r2,0x0
ram:0014bfac	4a24c000	mov r4,0x3
ram:0014bfb0	2220800f0f00107c	jl 0x000f7c10
ram:0014bfb8	04141f30	ld blink,[sp,0x4]
ram:0014bfbc	2120c007	j.d [blink]
ram:0014bfc0	08140d34	_ld.ab r13,[sp,0x8]
