; Ghidra ARC instruction reconstruction. Addresses and bytes are preserved below.
; function FUN_ram_00182484 entry ram:00182484
ram:00182484	4c200080	cmp r0,0x0
ram:00182488	ca22811f09e6f423	mov.eq r10,0xe60923f4
ram:00182490	0cf2	beq_s 0x001824a8
ram:00182492	0a22801f09e6b424	mov r10,0xe60924b4
ram:0018249a	01d8	mov_s r0,0x1
ram:0018249c	0a23801f09e6f021	mov r11,0xe60921f0
ram:001824a4	e11b1810	st.as r0,[r11,0xe1]
ram:001824a8	e078	nop_s
ram:001824aa	041a5010	st.ab r1,[r10,0x4]
ram:001824ae	041a5010	st.ab r1,[r10,0x4]
ram:001824b2	041a5010	st.ab r1,[r10,0x4]
ram:001824b6	041a5010	st.ab r1,[r10,0x4]
ram:001824ba	001a8010	st r2,[r10]
ram:001824be	041ac010	st r3,[r10,0x4]
ram:001824c2	081a0011	st r4,[r10,0x8]
ram:001824c6	0c1a4011	st r5,[r10,0xc]
ram:001824ca	40220a14	add r10,r10,0x10
ram:001824ce	001a8011	st r6,[r10]
ram:001824d2	041ac011	st r7,[r10,0x4]
ram:001824d6	40220a12	add r10,r10,0x8
ram:001824da	001a8011	st r6,[r10]
ram:001824de	041ac011	st r7,[r10,0x4]
ram:001824e2	40220a12	add r10,r10,0x8
ram:001824e6	001a8011	st r6,[r10]
ram:001824ea	041ac011	st r7,[r10,0x4]
ram:001824ee	40220a12	add r10,r10,0x8
ram:001824f2	001a8011	st r6,[r10]
ram:001824f6	041ac011	st r7,[r10,0x4]
ram:001824fa	40220a12	add r10,r10,0x8
ram:001824fe	e07e	j_s [blink]
