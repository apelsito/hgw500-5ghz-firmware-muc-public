
/workspace/build/evidence/hgw500-quantenna-firmwares-20261103/run1/muc/segments/segment-00.bin:     file format binary


Disassembly of section .data:

0039fe00 <.data>:
  39fe00:	0a7d 0010           	breq	r2,0,124	;0x39fe7c
  39fe04:	2005 0044           	or	r4,r0,r1
  39fe08:	2444 80fe           	and.f	0,r4,0x3
  39fe0c:	0074 0002           	bne	116	;0x39fe80
  39fe10:	230a 0000           	mov	r3,r0
  39fe14:	2a41 813c           	lsr.f	lp_count,r2,0x4
  39fe18:	20e8 04a2           	lpne	0x24	;0x39fe3c
  39fe1c:	1104 0404           	ld.ab	r4,[r1,4]
  39fe20:	1104 0405           	ld.ab	r5,[r1,4]
  39fe24:	1104 0406           	ld.ab	r6,[r1,4]
  39fe28:	1104 0407           	ld.ab	r7,[r1,4]
  39fe2c:	1b04 0110           	st.ab	r4,[r3,4]
  39fe30:	1b04 0150           	st.ab	r5,[r3,4]
  39fe34:	1b04 0190           	st.ab	r6,[r3,4]
  39fe38:	1b04 01d0           	st.ab	r7,[r3,4]
  39fe3c:	2244 83fe           	and.f	0,r2,0xf
  39fe40:	20e0 07c1           	jeq	[blink]
  39fe44:	0a15 00de           	bbit0	r2,0x3,20	;0x39fe58
  39fe48:	1104 0404           	ld.ab	r4,[r1,4]
  39fe4c:	1104 0405           	ld.ab	r5,[r1,4]
  39fe50:	1b04 0110           	st.ab	r4,[r3,4]
  39fe54:	1b04 0150           	st.ab	r5,[r3,4]
  39fe58:	0a0d 009e           	bbit0	r2,0x2,12	;0x39fe64
  39fe5c:	1104 0404           	ld.ab	r4,[r1,4]
  39fe60:	1b04 0110           	st.ab	r4,[r3,4]
  39fe64:	0a0d 005e           	bbit0	r2,0x1,12	;0x39fe70
  39fe68:	1102 0504           	ldh.ab	r4,[r1,2]
  39fe6c:	1b02 0114           	sth.ab	r4,[r3,2]
  39fe70:	0a0d 001e           	bbit0	r2,0,12	;0x39fe7c
  39fe74:	1101 0484           	ldb.ab	r4,[r1,1]
  39fe78:	1b01 0112           	stb.ab	r4,[r3,1]
  39fe7c:	2020 07c0           	j	[blink]
  39fe80:	240a 7080           	mov	lp_count,r2
  39fe84:	2142 0041           	sub	r1,r1,0x1
  39fe88:	2042 0043           	sub	r3,r0,0x1
  39fe8c:	20a8 0180           	lp	12	;0x39fe98
  39fe90:	1101 0284           	ldb.aw	r4,[r1,1]
  39fe94:	1b01 010a           	stb.aw	r4,[r3,1]
  39fe98:	2020 07c0           	j	[blink]
  39fe9c:	2253 8142           	bmsk.f	r2,r2,0x5
  39fea0:	7ce0                	jeq_s	[blink]
  39fea2:	224e 8803           	rsub.f	r3,r2,0x20
  39fea6:	0016 000c           	ble	22	;0x39feba
  39feaa:	2900 00cc           	asl	r12,r1,r3
  39feae:	2901 0081           	lsr	r1,r1,r2
  39feb2:	2801 0080           	lsr	r0,r0,r2
  39feb6:	7fe0                	j_s.d	[blink]
  39feb8:	7885                	or_s	r0,r0,r12
  39feba:	234e 0003           	neg	r3,r3
  39febe:	2901 00c0           	lsr	r0,r1,r3
  39fec2:	7fe0                	j_s.d	[blink]
  39fec4:	7922                	sub_s	r1,r1,r1
  39fec6:	0000 1cf8           	bnt.d	235520	;0x3d96c4
  39feca:	b348                	stw_s	r2,[r3,0x10]
  39fecc:	1c04 3380           	st	r14,[sp,4]
  39fed0:	76eb                	mov_s	r14,blink
  39fed2:	230a 1f80 8002 fe18 	mov	r11,0x8002fe18
  39feda:	270a 0f80 001c 7fc0 	mov	r7,0x1c7fc0
  39fee2:	214a 1000           	mov	r9,0
  39fee6:	1b08 1240           	st	r9,[r11,8]
  39feea:	2340 1206           	add	r6,r11,0x8
  39feee:	1b0c 1180           	st	r6,[r11,12]
  39fef2:	1b10 1240           	st	r9,[r11,16]
  39fef6:	1b14 11c0           	st	r7,[r11,20]
  39fefa:	1b18 1240           	st	r9,[r11,24]
  39fefe:	250a 0f80 001c 7fc8 	mov	r5,0x1c7fc8
  39ff06:	2340 1704           	add	r4,r11,0x1c
  39ff0a:	260a 0240           	mov	r6,r9
  39ff0e:	1c00 0240           	st	r9,[r4]
  39ff12:	1c04 0100           	st	r4,[r4,4]
  39ff16:	1c08 0240           	st	r9,[r4,8]
  39ff1a:	1c0c 0140           	st	r5,[r4,12]
  39ff1e:	1c10 0180           	st	r6,[r4,16]
  39ff22:	2440 0504           	add	r4,r4,0x14
  39ff26:	2640 0046           	add	r6,r6,0x1
  39ff2a:	1c00 0240           	st	r9,[r4]
  39ff2e:	1c04 0100           	st	r4,[r4,4]
  39ff32:	1c08 0240           	st	r9,[r4,8]
  39ff36:	1c0c 0140           	st	r5,[r4,12]
  39ff3a:	1c10 0180           	st	r6,[r4,16]
  39ff3e:	2440 0504           	add	r4,r4,0x14
  39ff42:	2640 0046           	add	r6,r6,0x1
  39ff46:	1c00 0240           	st	r9,[r4]
  39ff4a:	1c04 0100           	st	r4,[r4,4]
  39ff4e:	1c08 0240           	st	r9,[r4,8]
  39ff52:	1c0c 0140           	st	r5,[r4,12]
  39ff56:	1c10 0180           	st	r6,[r4,16]
  39ff5a:	2440 0504           	add	r4,r4,0x14
  39ff5e:	2640 0046           	add	r6,r6,0x1
  39ff62:	240a 0f80 8000 f000 	mov	r4,0x8000f000
  39ff6a:	220a 1f80 6003 d420 	mov	r10,0x6003d420
  39ff72:	75cf 8002 caa0      	mov_s	r13,0x8002caa0
  39ff78:	270a 0280           	mov	r7,r10
  39ff7c:	200a 1100           	mov	r8,r4
  39ff80:	248a 7706           	mov	lp_count,412
  39ff84:	224a 0000           	mov	r2,0
  39ff88:	20a8 0a80           	lp	84	;0x39ffdc
  39ff8c:	2a40 0105           	asl	r5,r2,0x4
  39ff90:	2040 1303           	add	r3,r8,0xc
  39ff94:	2400 0146           	add	r6,r4,r5
  39ff98:	1e08 0340           	st	r13,[r6,8]
  39ff9c:	2500 0285           	add	r5,r5,r10
  39ffa0:	1d00 0240           	st	r9,[r5]
  39ffa4:	1d08 0240           	st	r9,[r5,8]
  39ffa8:	1d0c 0240           	st	r9,[r5,12]
  39ffac:	1d04 0340           	st	r13,[r5,4]
  39ffb0:	1e00 01c0           	st	r7,[r6]
  39ffb4:	180c 1240           	st	r9,[r8,12]
  39ffb8:	130c 1001           	ld	r1,[r11,12]
  39ffbc:	e520                	add_s	r13,r13,0x20
  39ffbe:	2740 0407           	add	r7,r7,0x10
  39ffc2:	e201                	add_s	r2,r2,0x1
  39ffc4:	1900 0200           	st	r8,[r1]
  39ffc8:	1b0c 10c0           	st	r3,[r11,12]
  39ffcc:	1310 1003           	ld	r3,[r11,16]
  39ffd0:	2040 1408           	add	r8,r8,0x10
  39ffd4:	2340 0043           	add	r3,r3,0x1
  39ffd8:	1b10 10c0           	st	r3,[r11,16]
  39ffdc:	1600 7084 8002 c8bc 	ldb	r4,[0x8002c8bc]
  39ffe4:	244c 80c0           	cmp	r4,0x3
  39ffe8:	20e2 0f81 8002 48c8 	jleq	0x800248c8
  39fff0:	76fb                	mov_s	blink,r14
  39fff2:	c601                	ld_s	r14,[sp,0x4]
  39fff4:	2021 07c0           	j.d	[blink]
  39fff8:	1408 340d           	ld.ab	r13,[sp,8]
