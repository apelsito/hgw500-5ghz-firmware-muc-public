/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ebee4 */

void FUN_ram_000ebee4(undefined4 *param_1)

{
  undefined **ppuVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  undefined **ppuVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int local_28;
  
  if (param_1 < &DAT_ram_8003efc0) {
LAB_ram_000ebfa0:
    FUN_ram_000eaac4(0,&DAT_ram_001bd220);
    return;
  }
joined_r0x000ebf28:
  if (param_1 < &DAT_ram_8003ffc0) {
    do {
      pcVar3 = (code *)*param_1;
      bVar2 = false;
      if ((pcVar3 < FUN_ram_000e2000) || ((code *)0x18bb91 < pcVar3)) {
        if ((pcVar3 < &LAB_ram_80020000) || (&DAT_ram_800261a4 <= pcVar3)) goto LAB_ram_000ebf7c;
LAB_ram_000ebf84:
        bVar4 = true;
      }
      else {
        bVar2 = true;
        if ((&LAB_ram_80020000 <= pcVar3) && (pcVar3 < &DAT_ram_800261a4)) goto LAB_ram_000ebf84;
LAB_ram_000ebf7c:
        bVar4 = false;
      }
      if (!bVar2 && !bVar4) goto code_r0x000ebf94;
      if (&stack0x00000000 != (undefined1 *)0x28) {
        local_28 = 0;
      }
      if (PTR_s__start_ram_001bbe08_ram_001abce4 != (undefined *)0x0) {
        ppuVar5 = &PTR_muc_carrier_entry_ram_001abcdc;
        do {
          while ((((*ppuVar5 <= pcVar3 && (pcVar3 + -(int)*ppuVar5 < ppuVar5[1])) &&
                  (piVar6 = (int *)ppuVar5[3], piVar6[1] != 0)) && ((code *)*piVar6 <= pcVar3))) {
            do {
              piVar7 = piVar6;
              if (piVar7[3] == 0) {
                if (piVar7 == (int *)0x0) goto LAB_ram_000ec07c;
                iVar8 = piVar7[1];
                goto joined_r0x000ec090;
              }
              piVar6 = piVar7 + 2;
            } while ((code *)piVar7[2] <= pcVar3);
            if (piVar7 != (int *)0x0) {
              iVar8 = piVar7[1];
joined_r0x000ec090:
              if (&stack0x00000000 != (undefined1 *)0x28) {
                local_28 = (int)pcVar3 - *piVar7;
              }
              goto LAB_ram_000ec0a8;
            }
            ppuVar1 = ppuVar5 + 6;
            ppuVar5 = ppuVar5 + 4;
            if (*ppuVar1 == (undefined *)0x0) goto LAB_ram_000ec088;
          }
LAB_ram_000ec07c:
          ppuVar1 = ppuVar5 + 6;
          ppuVar5 = ppuVar5 + 4;
        } while (*ppuVar1 != (undefined *)0x0);
      }
LAB_ram_000ec088:
      iVar8 = 0;
LAB_ram_000ec0a8:
      FUN_ram_000eaac4(0,s_sp__0x_x_blink__0x_x_ram_001bd4a8,param_1);
      if (iVar8 != 0) {
        FUN_ram_000eaac4(0,s___s_0x_x__ram_001bd4c0,iVar8,local_28);
      }
      FUN_ram_000eaac4(0,&DAT_ram_001bd220);
      param_1 = param_1 + 1;
      if ((param_1 < &DAT_ram_8003efc0) || ((undefined4 *)0x8003ffbf < param_1)) break;
    } while( true );
  }
  goto LAB_ram_000ebfa0;
code_r0x000ebf94:
  param_1 = param_1 + 1;
  if (param_1 < &DAT_ram_8003efc0) goto LAB_ram_000ebfa0;
  goto joined_r0x000ebf28;
}


