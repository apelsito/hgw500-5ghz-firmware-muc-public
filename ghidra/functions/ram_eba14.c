/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000eba14 */

void FUN_ram_000eba14(void)

{
  undefined **ppuVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  int *piVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int local_24;
  
  FUN_ram_000eaac4(0,s_>>>>>_MuC_exception_>>>>>_0x_x_ram_001bd224,uRam80030744);
  FUN_ram_000eaac4(0,s_Lastbuf____s__ram_001bd24c,&DAT_ram_001d4324);
  if (DAT_ram_0018c280 == (undefined4 *)0x0) {
    FUN_ram_000eaac4(0,s_AuC_last_ilink_addresses_are_not_ram_001bd25c);
  }
  else if (DAT_ram_0018c284 == (undefined4 *)0x0) {
    FUN_ram_000eaac4(0,s_AuC_last_ilink_addresses_are_not_ram_001bd25c);
  }
  else {
    FUN_ram_000eaac4(0,s_AuC_last_ilink1__p_ilink2__p_ram_001bd28c,*DAT_ram_0018c280,
                     *DAT_ram_0018c284);
  }
  if (99 < uRam80030744) {
    FUN_ram_000eaac4(0,s_Exception_code_is_triggered_by_s_ram_001bd2ac);
    goto LAB_ram_000ebbe4;
  }
  uVar11 = DAT_ram_800307d4 & 0xff00;
  uVar12 = (DAT_ram_800307d4 & 0xff0000) >> 0x10;
  FUN_ram_000eaac4(0,s_ECR__0x_x__ram_001bd2d8);
  uVar11 = uVar11 >> 8;
  if (uVar12 < 2) {
LAB_ram_000ebb38:
    FUN_ram_000eaac4(0,(&PTR_s_Reset_ram_001a5624_ram_001a54d4)[uVar12]);
    if (uVar12 == 0x22) {
      if ((uVar11 == 0) || (3 < uVar11)) {
        pcVar2 = s__Unknown_cause__ram_001bd2f4;
      }
      else {
        pcVar2 = (&PTR_DAT_ram_001a5650_ram_001a5570)[uVar11];
      }
      FUN_ram_000eaac4(0,pcVar2);
      FUN_ram_000eaac4(0,s_address_0x_x_instruction_addr_0x_ram_001bd304,DAT_ram_800307d8,
                       DAT_ram_800307dc);
    }
  }
  else {
    if (uVar12 < 0x20) {
      if (uVar12 < 3) goto LAB_ram_000ebb98;
      pcVar2 = s_Interrupt_0x_x_ram_001bd2e4;
    }
    else {
      if (uVar12 < 0x27) goto LAB_ram_000ebb38;
LAB_ram_000ebb98:
      pcVar2 = s_Reserved_exception_0x_x_ram_001bd328;
    }
    FUN_ram_000eaac4(0,pcVar2,uVar12);
  }
  FUN_ram_000eaac4(0,&DAT_ram_001bd220);
  FUN_ram_000eaac4(0,s_Prev_ECR_0x_x_EFA_0x_x_ERET_0x_x_ram_001bd340,DAT_ram_80030748,
                   DAT_ram_8003074c,DAT_ram_80030750);
LAB_ram_000ebbe4:
  FUN_ram_000eaac4(0,&DAT_ram_001bd220);
  FUN_ram_000eaac4(0,s_Registers__ram_001bd364);
  iVar14 = 0;
  puVar13 = &DAT_ram_80030754;
  do {
    puVar5 = (undefined *)*puVar13;
    if (&stack0x00000000 != (undefined1 *)0x24) {
      local_24 = 0;
    }
    ppuVar4 = &PTR_muc_carrier_entry_ram_001abcdc;
    puVar3 = PTR_s__start_ram_001bbe08_ram_001abce4;
joined_r0x000ebc34:
    while (puVar3 != (undefined *)0x0) {
      while (((*ppuVar4 <= puVar5 && (puVar5 + -(int)*ppuVar4 < ppuVar4[1])) &&
             (piVar6 = (int *)ppuVar4[3], piVar6[1] != 0))) {
        if ((undefined *)*piVar6 <= puVar5) goto LAB_ram_000ebc64;
        ppuVar1 = ppuVar4 + 6;
        ppuVar4 = ppuVar4 + 4;
        if (*ppuVar1 == (undefined *)0x0) goto LAB_ram_000ebcc8;
      }
LAB_ram_000ebcbc:
      ppuVar1 = ppuVar4 + 6;
      ppuVar4 = ppuVar4 + 4;
      puVar3 = *ppuVar1;
    }
LAB_ram_000ebcc8:
    iVar15 = 0;
LAB_ram_000ebce4:
    FUN_ram_000eaac4(0x18,s__s__0x_x_ram_001bd374,
                     (&PTR_DAT_ram_001a56c8_ram_001a5580)[(int)(puVar13 + 0x1fff3e2b) >> 2],*puVar13
                    );
    if (iVar15 != 0) {
      FUN_ram_000eaac4(0,s___s_0x_x__ram_001bd380,iVar15,local_24);
    }
    puVar13 = puVar13 + 1;
    iVar14 = iVar14 + 1;
    if (iVar14 == 1 || puVar13 == (undefined4 *)0x800307f8) {
      FUN_ram_000eaac4(0,&DAT_ram_001bd220);
      iVar14 = 0;
    }
    if ((undefined4 *)0x800307f7 < puVar13) {
      FUN_ram_000eaac4(0,&DAT_ram_001bd220);
      FUN_ram_000eaac4(0,s_Call_stack__blink_candidates___b_ram_001bd38c,DAT_ram_800307d0);
      FUN_ram_000ebee4(DAT_ram_800307c4);
      puVar9 = (undefined1 *)(DAT_ram_800307c4 + -0x28);
      if (puVar9 < &DAT_ram_8003efc1) {
        puVar9 = &DAT_ram_8003efc0;
      }
      puVar8 = (undefined1 *)(DAT_ram_800307c4 + 200);
      if ((undefined1 *)0x8003ffbf < puVar8) {
        puVar8 = &DAT_ram_8003ffc0;
      }
      FUN_ram_000eaac4(0,s_Stack__sp_0x_x_data__p____p_ram_001bd3cc,DAT_ram_800307c4,puVar9,puVar8);
      if (puVar8 <= puVar9) goto LAB_ram_000ebe0c;
      iVar14 = 0;
      do {
        if (iVar14 == 10) {
          iVar14 = 0;
          FUN_ram_000eaac4(0,&DAT_ram_001bd220);
LAB_ram_000ebde0:
          FUN_ram_000eaac4(0xf,&DAT_ram_001bd3ec,puVar9);
        }
        else if (iVar14 == 0) goto LAB_ram_000ebde0;
        puVar10 = puVar9 + 1;
        FUN_ram_000eaac4(3,&DAT_ram_001bd3f4,*puVar9);
        iVar14 = iVar14 + 1;
        puVar9 = puVar10;
        if (puVar8 <= puVar10) {
LAB_ram_000ebe0c:
          FUN_ram_000eaac4(0,&DAT_ram_001bd3f8);
          FUN_ram_000eaac4(0,s_Try_dump_fragment_around_EFA_0x__ram_001bd400,DAT_ram_800307d8);
          FUN_ram_000eb8d0(DAT_ram_800307d8);
          FUN_ram_000eaac4(0,s_Try_dump_fragment_around_ERET_0x_ram_001bd424,DAT_ram_800307dc);
          FUN_ram_000eb8d0(DAT_ram_800307dc);
          FUN_ram_000eaac4(0,s_Try_dump_fragment_around_LINK1_0_ram_001bd448,DAT_ram_800307c8);
          FUN_ram_000eb8d0(DAT_ram_800307c8);
          if (DAT_ram_800307cc != DAT_ram_800307c8) {
            FUN_ram_000eaac4(0,s_Try_dump_fragment_around_LINK2_0_ram_001bd470);
            FUN_ram_000eb8d0(DAT_ram_800307cc);
          }
          FUN_ram_000eaac4(0,&DAT_ram_001bd220);
          FUN_ram_000f6c44();
          FUN_ram_000eaac4(0,s_<<<<<<<<<<_ram_001bd498);
          FUN_ram_000eabc4(1,0);
          FUN_ram_000ed2b4();
          STATUS32 = 1;
          do {
                    /* WARNING: Do nothing block with infinite loop */
          } while( true );
        }
      } while( true );
    }
  } while( true );
  while (piVar6 = piVar7 + 2, (undefined *)piVar7[2] <= puVar5) {
LAB_ram_000ebc64:
    piVar7 = piVar6;
    if (piVar7[3] == 0) {
      if (piVar7 == (int *)0x0) goto LAB_ram_000ebcbc;
      if (&stack0x00000000 == (undefined1 *)0x24) goto LAB_ram_000ebce0;
      goto LAB_ram_000ebcd4;
    }
  }
  if (piVar7 != (int *)0x0) {
    if (&stack0x00000000 != (undefined1 *)0x24) {
LAB_ram_000ebcd4:
      local_24 = (int)puVar5 - *piVar7;
    }
LAB_ram_000ebce0:
    iVar15 = piVar7[1];
    goto LAB_ram_000ebce4;
  }
  puVar3 = ppuVar4[6];
  ppuVar4 = ppuVar4 + 4;
  goto joined_r0x000ebc34;
}


