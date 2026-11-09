; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0016fcc8 entry ram:0016fcc8
ram:0016fcc8	f81c48b3	st.aw r13,[sp,-0x8]
ram:0016fccc	041c8033	st r14,[sp,0x4]
ram:0016fcd0	eb76	mov_s r14,blink
ram:0016fcd2	0875	mov_s r13,r0
ram:0016fcd4	2220800f1600b479	jl 0x001679b4
ram:0016fcdc	ffda	mov_s r2,0xff
ram:0016fcde	00168170180078c3	ldb r1,[0x18c378]
ram:0016fce6	001e807018005cc3	st r2,[0x18c35c]
ram:0016fcee	80e1	cmp_s r1,0x0
ram:0016fcf0	14002100	beq.d 0x0016fd04
ram:0016fcf4	4a200000	_mov r0,0x0
ram:0016fcf8	a970	mov_s r0,r13
ram:0016fcfa	2220800f170040a2	jl 0x0017a240
ram:0016fd02	01d8	mov_s r0,0x1
ram:0016fd04	fb76	mov_s blink,r14
ram:0016fd06	01c6	ld_s r14,[sp,0x4]
ram:0016fd08	2120c007	j.d [blink]
ram:0016fd0c	08140d34	_ld.ab r13,[sp,0x8]
