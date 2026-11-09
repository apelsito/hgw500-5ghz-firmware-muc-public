; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001567ec entry ram:001567ec
ram:001567ec	f01c48b3	st.aw r13,[sp,-0x10]
ram:001567f0	041cc037	st blink,[sp,0x4]
ram:001567f4	42c6	st_s r14,[sp,0x8]
ram:001567f6	43c7	st_s r15,[sp,0xc]
ram:001567f8	0a270010	mov r15,r0
ram:001567fc	290a3000	breq.d r2,0x0,0x00156824
ram:00156800	0a264010	_mov r14,r1
ram:00156804	2f258910	abs r13,r2
ram:00156808	01168214	ldb.ab r2,[r14,0x1]
ram:0015680c	e970	mov_s r0,r15
ram:0015680e	01d9	mov_s r1,0x1
ram:00156810	2a0fefff	bl.d 0x00156738
ram:00156814	4a238000	_mov r3,0x2
ram:00156818	42254d10	sub r13,r13,0x1
ram:0015681c	ed0d7590	brhs.d r13,0x1,0x00156808
ram:00156820	40274f10	_add r15,r15,0x1
ram:00156824	04141f30	ld blink,[sp,0x4]
ram:00156828	02c6	ld_s r14,[sp,0x8]
ram:0015682a	03c7	ld_s r15,[sp,0xc]
ram:0015682c	2120c007	j.d [blink]
ram:00156830	10140d34	_ld.ab r13,[sp,0x10]
