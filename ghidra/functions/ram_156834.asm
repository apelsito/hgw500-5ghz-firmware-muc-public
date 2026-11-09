; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00156834 entry ram:00156834
ram:00156834	f1c0	push_s blink
ram:00156836	00100700	ld r7,[r0]
ram:0015683a	a1c1	sub_s sp,sp,0x4
ram:0015683c	00170501	ldh r5,[r7]
ram:00156840	402d0501	asl r5,r5,0x4
ram:00156844	3021860f0000203b	ld r6,[r1, 0x3b20]
ram:0015684c	00160470180078c2	ld r4,[0x18c278]
ram:00156854	14254501	add1 r5,r5,r5
ram:00156858	fe160307	ldh.as r3,[r6,0xfe]
ram:0015685c	10bb	asl_s r3,r3,0x10
ram:0015685e	e2160207	ldh.as r2,[r6,0xe2]
ram:00156862	40240408	add r4,r4,0x20
ram:00156866	8b71	mov_s r1,sp
ram:00156868	00244001	add r0,r4,r5
ram:0015686c	657a	or_s r2,r2,r3
ram:0015686e	40c2	st_s r2,[sp,0x0]
ram:00156870	7e0fefff	bl.d 0x001567ec
ram:00156874	4a220001	_mov r2,0x4
ram:00156878	40241c31	add sp,sp,0x4
ram:0015687c	04141f34	ld.ab blink,[sp,0x4]
ram:00156880	e07e	j_s [blink]
