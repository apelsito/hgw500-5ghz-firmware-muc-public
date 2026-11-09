; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_000f5e44 entry ram:000f5e44
ram:000f5e44	fc1c88b1	st.aw r6,[sp,-0x4]
ram:000f5e48	fc1c48b1	st.aw r5,[sp,-0x4]
ram:000f5e4c	fc1c08b1	st.aw r4,[sp,-0x4]
ram:000f5e50	e1c3	push_s r3
ram:000f5e52	e1c2	push_s r2
ram:000f5e54	e1c1	push_s r1
ram:000f5e56	e1c0	push_s r0
ram:000f5e58	07c0	ld_s r0,[sp,0x1c]
ram:000f5e5a	1c1cc031	st r7,[sp,0x1c]
ram:000f5e5e	e1c0	push_s r0
ram:000f5e60	e07f	j_s.d [blink]
ram:000f5e62	01c0	_ld_s r0,[sp,0x4]
