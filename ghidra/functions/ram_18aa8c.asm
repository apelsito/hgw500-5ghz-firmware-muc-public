; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_0018aa8c entry ram:0018aa8c
ram:0018aa8c	0a22800f09e60002	mov r2,0xe6090200
ram:0018aa94	19083000	breq.d r0,0x0,0x0018aaac
ram:0018aa98	4a230000	_mov r3,0x0
ram:0018aa9c	8a244109	mov r4,0x65
ram:0018aaa0	841a0001	st r4,[r2,0x84]
ram:0018aaa4	01d8	mov_s r0,0x1
ram:0018aaa6	08a2	st_s r0,[r2,0x20]
ram:0018aaa8	2020c007	j [blink]
ram:0018aaac	09d9	mov_s r1,0x9
ram:0018aaae	841a4000	st r1,[r2,0x84]
ram:0018aab2	68a2	st_s r3,[r2,0x20]
ram:0018aab4	e07e	j_s [blink]
