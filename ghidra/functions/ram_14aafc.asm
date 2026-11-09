; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0014aafc entry ram:0014aafc
ram:0014aafc	fc1c48b3	st.aw r13,[sp,-0x4]
ram:0014ab00	0a204000	mov r0,r1
ram:0014ab04	00168170028036c9	ldb r1,[0x8002c936]
ram:0014ab0c	eb75	mov_s r13,blink
ram:0014ab0e	80e1	cmp_s r1,0x0
ram:0014ab10	e220810f180060a8	jleq 0x0018a860
ram:0014ab18	fb75	mov_s blink,r13
ram:0014ab1a	e07f	j_s.d [blink]
ram:0014ab1c	04140d34	_ld.ab r13,[sp,0x4]
