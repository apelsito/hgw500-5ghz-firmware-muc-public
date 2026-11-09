; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0015727c entry ram:0015727c
ram:0015727c	e1c5	push_s r13
ram:0015727e	0016037018005cc2	ld r3,[0x18c25c]
ram:00157286	eb75	mov_s r13,blink
ram:00157288	4c230080	cmp r3,0x0
ram:0015728c	ca206100	mov.eq r0,0x1
ram:00157290	ac0dc2ff	blne 0x0015703c
ram:00157294	0a274033	mov blink,r13
ram:00157298	4a260070	nop
ram:0015729c	2120c007	j.d [blink]
ram:001572a0	04140d34	_ld.ab r13,[sp,0x4]
