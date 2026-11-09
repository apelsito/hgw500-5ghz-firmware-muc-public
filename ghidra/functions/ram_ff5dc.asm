; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000ff5dc entry ram:000ff5dc
ram:000ff5dc	5e100306	ld.as r3,[r0,0x5e]
ram:000ff5e0	8a22c401	mov r2,0x107
ram:000ff5e4	7f100106	ld.as r1,[r0,0x7f]
ram:000ff5e8	40a3	st_s r2,[r3,0x0]
ram:000ff5ea	21a3	st_s r1,[r3,0x4]
ram:000ff5ec	42a3	st_s r2,[r3,0x8]
ram:000ff5ee	23a3	st_s r1,[r3,0xc]
ram:000ff5f0	44a3	st_s r2,[r3,0x10]
ram:000ff5f2	25a3	st_s r1,[r3,0x14]
ram:000ff5f4	46a3	st_s r2,[r3,0x18]
ram:000ff5f6	e07f	j_s.d [blink]
ram:000ff5f8	1c1b4000	_st r1,[r3,0x1c]
