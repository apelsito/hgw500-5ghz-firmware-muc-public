; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f2ddc entry ram:000f2ddc
ram:000f2ddc	f81c48b3	st.aw r13,[sp,-0x8]
ram:000f2de0	041cc037	st blink,[sp,0x4]
ram:000f2de4	cf701d004444	mov_s r0,0x1d4444
ram:000f2dea	00dd	mov_s r13,0x0
ram:000f2dec	a971	mov_s r1,r13
ram:000f2dee	00da	mov_s r2,0x0
ram:000f2df0	8fba	bset_s r2,r2,0xf
ram:000f2df2	2220800f0e0080ea	jl 0x000eea80
ram:000f2dfa	001e4073180050c0	st r13,[0x18c050]
ram:000f2e02	cf701b0094e1	mov_s r0,0x1be194
ram:000f2e08	c60ecfff	bl 0x000f2ccc
ram:000f2e0c	04141f30	ld blink,[sp,0x4]
ram:000f2e10	4a260070	nop
ram:000f2e14	2120c007	j.d [blink]
ram:000f2e18	08140d34	_ld.ab r13,[sp,0x8]
