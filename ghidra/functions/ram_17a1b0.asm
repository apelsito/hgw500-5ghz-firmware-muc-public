; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0017a1b0 entry ram:0017a1b0
ram:0017a1b0	f41c48b3	st.aw r13,[sp,-0xc]
ram:0017a1b4	041cc037	st blink,[sp,0x4]
ram:0017a1b8	42c6	st_s r14,[sp,0x8]
ram:0017a1ba	0873	mov_s r3,r0
ram:0017a1bc	0a254010	mov r13,r1
ram:0017a1c0	750b3501	brhs.d r3,0x4,0x0017a234
ram:0017a1c4	4a200000	_mov r0,0x0
ram:0017a1c8	00168470180063c3	ldb r4,[0x18c363]
ram:0017a1d0	001600701800ccc2	ld r0,[0x18c2cc]
ram:0017a1d8	4e240200	neg r2,r4
ram:0017a1dc	cf761800c0c2	mov_s r14,0x18c2c0
ram:0017a1e2	f026cc701700f0a1	ld.as r12,[0x17a1f0, r3]
ram:0017a1ea	16220201	add3 r2,r2,r4
ram:0017a1ee	007c	j_s [r12]
ram:0017a200	1d002000	b.d 0x0017a21c
ram:0017a204	4a218001	_mov r1,0x6
ram:0017a208	15002000	b.d 0x0017a21c
ram:0017a20c	4a21c001	_mov r1,0x7
ram:0017a210	0d002000	b.d 0x0017a21c
ram:0017a214	4a210002	_mov r1,0x8
ram:0017a218	4a214002	mov r1,0x9
ram:0017a21c	07db	mov_s r3,0x7
ram:0017a21e	9876	mov_s r4,r14
ram:0017a220	2220800f0f00184d	jl 0x000f4d18
ram:0017a228	0616c110	ldb.x r1,[r14,0x6]
ram:0017a22c	058e	ldb_s r0,[r14,0x5]
ram:0017a22e	227d	sub_s r13,r13,r1
ram:0017a230	14204003	add1 r0,r0,r13
ram:0017a234	04141f30	ld blink,[sp,0x4]
ram:0017a238	02c6	ld_s r14,[sp,0x8]
ram:0017a23a	e07f	j_s.d [blink]
ram:0017a23c	0c140d34	_ld.ab r13,[sp,0xc]
