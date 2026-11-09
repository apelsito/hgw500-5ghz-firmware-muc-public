; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0010c600 entry ram:0010c600
ram:0010c600	e81c48b3	st.aw r13,[sp,-0x18]
ram:0010c604	041cc037	st blink,[sp,0x4]
ram:0010c608	42c6	st_s r14,[sp,0x8]
ram:0010c60a	43c7	st_s r15,[sp,0xc]
ram:0010c60c	101c0034	st r16,[sp,0x10]
ram:0010c610	141c4034	st r17,[sp,0x14]
ram:0010c614	3a70	mov_s r17,r0
ram:0010c616	1a71	mov_s r16,r1
ram:0010c618	4877	mov_s r15,r2
ram:0010c61a	cf701c005409	mov_s r0,0x1c0954
ram:0010c620	0a218000	mov r1,r2
ram:0010c624	2220800f0e0060e2	jl 0x000ee260
ram:0010c62c	30218e2f0000a43d	ld r14,[r17, 0x3da4]
ram:0010c634	410e3010	breq.d r14,0x0,0x0010c674
ram:0010c638	4a250010	_mov r13,0x0
ram:0010c63c	01e5	add_s r13,r13,0x1
ram:0010c63e	2d0f4213	brlt r15,r13,0x0010c668
ram:0010c642	2a70	mov_s r0,r17
ram:0010c644	0a218003	mov r1,r14
ram:0010c648	1d083020	breq.d r16,0x0,0x0010c664
ram:0010c64c	0a224003	_mov r2,r13
ram:0010c650	a60e4ffe	bl 0x001094f4
ram:0010c654	30268e1f0000600d	ld r14,[r14, 0xd60]
ram:0010c65c	e10e1190	brne r14,0x0,0x0010c63c
ram:0010c660	15000000	b 0x0010c674
ram:0010c664	0a0ecfff	bl 0x0010c46c
ram:0010c668	30268e1f0000600d	ld r14,[r14, 0xd60]
ram:0010c670	cd0e1190	brne r14,0x0,0x0010c63c
ram:0010c674	cf701c006809	mov_s r0,0x1c0968
ram:0010c67a	a971	mov_s r1,r13
ram:0010c67c	2220800f0e0060e2	jl 0x000ee260
ram:0010c684	04141f30	ld blink,[sp,0x4]
ram:0010c688	02c6	ld_s r14,[sp,0x8]
ram:0010c68a	03c7	ld_s r15,[sp,0xc]
ram:0010c68c	10141030	ld r16,[sp,0x10]
ram:0010c690	14141130	ld r17,[sp,0x14]
ram:0010c694	2120c007	j.d [blink]
ram:0010c698	18140d34	_ld.ab r13,[sp,0x18]
