; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0015ce50 entry ram:0015ce50
ram:0015ce50	fc1c48b3	st.aw r13,[sp,-0x4]
ram:0015ce54	42241c31	sub sp,sp,0x4
ram:0015ce58	eb75	mov_s r13,blink
ram:0015ce5a	0a26800f028018fe	mov r6,0x8002fe18
ram:0015ce62	4c160400	ld r4,[r6,0x4c]
ram:0015ce66	001c803f00008033	st 0x3380,[sp]
ram:0015ce6e	10160100	ld r1,[r6,0x10]
ram:0015ce72	24160200	ld r2,[r6,0x24]
ram:0015ce76	cf701c00cc7f	mov_s r0,0x1c7fcc
ram:0015ce7c	38160300	ld r3,[r6,0x38]
ram:0015ce80	0a25800f008000f0	mov r5,0x8000f000
ram:0015ce88	0a26800f0000c019	mov r6,0x19c0
ram:0015ce90	0a27800f0280a0ca	mov r7,0x8002caa0
ram:0015ce98	2220800f0e0060e2	jl 0x000ee260
ram:0015cea0	4a254000	mov r5,0x1
ram:0015cea4	001e4071180098c2	st r5,[0x18c298]
ram:0015ceac	fb75	mov_s blink,r13
ram:0015ceae	a1c0	add_s sp,sp,0x4
ram:0015ceb0	2120c007	j.d [blink]
ram:0015ceb4	04140d34	_ld.ab r13,[sp,0x4]
