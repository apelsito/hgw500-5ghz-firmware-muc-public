; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00171ec4 entry ram:00171ec4
ram:00171ec4	f81c48b3	st.aw r13,[sp,-0x8]
ram:00171ec8	41c6	st_s r14,[sp,0x4]
ram:00171eca	eb76	mov_s r14,blink
ram:00171ecc	18d8	mov_s r0,0x18
ram:00171ece	02d9	mov_s r1,0x2
ram:00171ed0	120bafff	bl.d 0x001711e0
ram:00171ed4	4a224000	_mov r2,0x1
ram:00171ed8	00160270180010c0	ld r2,[0x18c010]
ram:00171ee0	0a250010	mov r13,r0
ram:00171ee4	cf701c000897	mov_s r0,0x1c9708
ram:00171eea	a971	mov_s r1,r13
ram:00171eec	2220800f0e0060e2	jl 0x000ee260
ram:00171ef4	a970	mov_s r0,r13
ram:00171ef6	fb76	mov_s blink,r14
ram:00171ef8	01c6	ld_s r14,[sp,0x4]
ram:00171efa	e07f	j_s.d [blink]
ram:00171efc	08140d34	_ld.ab r13,[sp,0x8]
