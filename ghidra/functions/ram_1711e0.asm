; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001711e0 entry ram:001711e0
ram:001711e0	ec1c48b3	st.aw r13,[sp,-0x14]
ram:001711e4	041cc037	st blink,[sp,0x4]
ram:001711e8	42c6	st_s r14,[sp,0x8]
ram:001711ea	43c7	st_s r15,[sp,0xc]
ram:001711ec	101c0034	st r16,[sp,0x10]
ram:001711f0	1a70	mov_s r16,r0
ram:001711f2	2877	mov_s r15,r1
ram:001711f4	4876	mov_s r14,r2
ram:001711f6	2220800f18008c3c	jl 0x00183c8c
ram:001711fe	e971	mov_s r1,r15
ram:00171200	0875	mov_s r13,r0
ram:00171202	0a70	mov_s r0,r16
ram:00171204	260fefff	bl.d 0x00171128
ram:00171208	0a228003	_mov r2,r14
ram:0017120c	0a260010	mov r14,r0
ram:00171210	0a204003	mov r0,r13
ram:00171214	2220800f1800d03c	jl 0x00183cd0
ram:0017121c	04141f30	ld blink,[sp,0x4]
ram:00171220	c970	mov_s r0,r14
ram:00171222	02c6	ld_s r14,[sp,0x8]
ram:00171224	03c7	ld_s r15,[sp,0xc]
ram:00171226	10141030	ld r16,[sp,0x10]
ram:0017122a	e07f	j_s.d [blink]
ram:0017122c	14140d34	_ld.ab r13,[sp,0x14]
