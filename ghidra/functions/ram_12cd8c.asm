; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0012cd8c entry ram:0012cd8c
ram:0012cd8c	f01c48b3	st.aw r13,[sp,-0x10]
ram:0012cd90	041cc037	st blink,[sp,0x4]
ram:0012cd94	42c6	st_s r14,[sp,0x8]
ram:0012cd96	43c7	st_s r15,[sp,0xc]
ram:0012cd98	0a264090	mov.f r14,r1
ram:0012cd9c	38002200	bne.d 0x0012cdd4
ram:0012cda0	0a270010	_mov r15,r0
ram:0012cda4	30278e1f00001c05	ld r14,[r15, 0x51c]
ram:0012cdac	00278d1f0000fc07	add r13,r15,0x7fc
ram:0012cdb4	90ee	brne_s r14,0,0x0012cdd4
ram:0012cdb6	1ed8	mov_s r0,0x1e
ram:0012cdb8	4a210000	mov r1,0x0
ram:0012cdbc	2220800f0e003ce7	jl 0x000ee73c
ram:0012cdc4	0a260090	mov.f r14,r0
ram:0012cdc8	481d1890	st.as r0,[r13,-0xb8]
ram:0012cdcc	28002100	beq.d 0x0012cdf4
ram:0012cdd0	4a204000	_mov r0,0x1
ram:0012cdd4	c970	mov_s r0,r14
ram:0012cdd6	cf711a003065	mov_s r1,0x1a6530
ram:0012cddc	1eda	mov_s r2,0x1e
ram:0012cdde	2220800f390000fe	jl 0x0039fe00
ram:0012cde6	c970	mov_s r0,r14
ram:0012cde8	fe0cefff	bl.d 0x0012cae4
ram:0012cdec	0a21c003	_mov r1,r15
ram:0012cdf0	4a200000	mov r0,0x0
ram:0012cdf4	04141f30	ld blink,[sp,0x4]
ram:0012cdf8	02c6	ld_s r14,[sp,0x8]
ram:0012cdfa	03c7	ld_s r15,[sp,0xc]
ram:0012cdfc	2120c007	j.d [blink]
ram:0012ce00	10140d34	_ld.ab r13,[sp,0x10]
