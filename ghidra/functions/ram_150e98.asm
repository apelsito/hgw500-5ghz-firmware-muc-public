; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00150e98 entry ram:00150e98
ram:00150e98	f81c48b3	st.aw r13,[sp,-0x8]
ram:00150e9c	41c6	st_s r14,[sp,0x4]
ram:00150e9e	eb76	mov_s r14,blink
ram:00150ea0	aa251013	lr r13,[0x40c]
ram:00150ea4	ab26107300001000	sr 0x10,[0x40c]
ram:00150eac	ab26447000000000	sr 0x0,[0x101]
ram:00150eb4	ab26047000000000	sr 0x0,[0x100]
ram:00150ebc	ab208400	sr r0,[0x102]
ram:00150ec0	ab26447000000300	sr 0x3,[0x101]
ram:00150ec8	ab26047000000000	sr 0x0,[0x100]
ram:00150ed0	6a208002	lr r0,[status32]
ram:00150ed4	45208101	or r1,r0,0x6
ram:00150ed8	29204000	flag r1
ram:00150edc	6f213f00	sleep 0x0
ram:00150ee0	29200000	flag r0
ram:00150ee4	ab26447000000000	sr 0x0,[0x101]
ram:00150eec	ab251013	sr r13,[0x40c]
ram:00150ef0	fb76	mov_s blink,r14
ram:00150ef2	01c6	ld_s r14,[sp,0x4]
ram:00150ef4	2120c007	j.d [blink]
ram:00150ef8	08140d34	_ld.ab r13,[sp,0x8]
