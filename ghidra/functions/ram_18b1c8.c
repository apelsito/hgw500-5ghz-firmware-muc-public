/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018b1c8 */

void FUN_ram_0018b1c8(int param_1)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined *in_blink;
  
  *(undefined1 *)(param_1 + 0x465e) = 1;
  *(undefined1 *)(param_1 + 0x465f) = 1;
  if (DAT_ram_0018c420 != 0) {
    ppuVar5 = &PTR_muc_carrier_entry_ram_001abcdc;
    if (PTR_s__start_ram_001bbe08_ram_001abce4 == (undefined *)0x0) {
      uVar4 = 0;
    }
    else {
      do {
        while ((((in_blink < *ppuVar5 || (ppuVar5[1] <= in_blink + -(int)*ppuVar5)) ||
                (puVar2 = (undefined4 *)ppuVar5[3], puVar2[1] == 0)) ||
               (in_blink < (undefined *)*puVar2))) {
LAB_ram_0018b280:
          ppuVar1 = ppuVar5 + 6;
          ppuVar5 = ppuVar5 + 4;
          if (*ppuVar1 == (undefined *)0x0) goto LAB_ram_0018b28c;
        }
        do {
          puVar3 = puVar2;
          if (puVar3[3] == 0) {
            if (puVar3 == (undefined4 *)0x0) goto LAB_ram_0018b280;
            goto LAB_ram_0018b294;
          }
          puVar2 = puVar3 + 2;
        } while ((undefined *)puVar3[2] <= in_blink);
        if (puVar3 != (undefined4 *)0x0) {
LAB_ram_0018b294:
          uVar4 = puVar3[1];
          goto LAB_ram_0018b2a8;
        }
        ppuVar1 = ppuVar5 + 6;
        ppuVar5 = ppuVar5 + 4;
      } while (*ppuVar1 != (undefined *)0x0);
LAB_ram_0018b28c:
      uVar4 = 0;
    }
LAB_ram_0018b2a8:
    FUN_ram_000ee260(s_Doing_qtn_bb_kickoff_hard_reset__ram_001cb1b0,uVar4);
  }
  FUN_ram_0018b084(param_1,0);
  DAT_ram_800371c8 = DAT_ram_800371c8 + 1;
  return;
}


