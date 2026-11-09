; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_001101c8 entry ram:001101c8
ram:001101c8	f41c48b3	st.aw r13,[sp,-0xc]
ram:001101cc	041cc037	st blink,[sp,0x4]
ram:001101d0	081c8033	st r14,[sp,0x8]
ram:001101d4	3020810f0000dc40	ld r1,[r0, 0x40dc]
ram:001101dc	00208d0f0000e03f	add r13,r0,0x3fe0
ram:001101e4	19093000	breq.d r1,0x0,0x001101fc
ram:001101e8	0a260010	_mov r14,r0
ram:001101ec	1a0ecfff	bl 0x00110004
ram:001101f0	57150316	ld.as r3,[r13,0x57]
ram:001101f4	40234300	add r3,r3,0x1
ram:001101f8	571dd810	st.as r3,[r13,0x57]
ram:001101fc	42150716	ld.as r7,[r13,0x42]
ram:00110200	43150616	ld.as r6,[r13,0x43]
ram:00110204	fc1dc011	st r7,[r13,0xfc]
ram:00110208	44150416	ld.as r4,[r13,0x44]
ram:0011020c	401d9811	st.as r6,[r13,0x40]
ram:00110210	56150216	ld.as r2,[r13,0x56]
ram:00110214	00268c1f0000bd40	add r12,r14,0x40bd
ram:0011021c	04141f30	ld blink,[sp,0x4]
ram:00110220	02c6	ld_s r14,[sp,0x8]
ram:00110222	4a250000	mov r5,0x0
ram:00110226	01e2	add_s r2,r2,0x1
ram:00110228	411d1811	st.as r4,[r13,0x41]
ram:0011022c	421d5811	st.as r5,[r13,0x42]
ram:00110230	561d9810	st.as r2,[r13,0x56]
ram:00110234	0c140d34	ld.ab r13,[sp,0xc]
ram:00110238	2120c007	j.d [blink]
ram:0011023c	001c4211	_stb r5,[r12]
