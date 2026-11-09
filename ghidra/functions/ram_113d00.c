/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00113d00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00113d00(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar1 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar1 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = _DAT_ram_e00000bc + 0xe0000000;
  }
  puVar3 = *(undefined4 **)(uVar1 + 0x5c);
  if ((puVar3 < (undefined4 *)0x80000000) || ((undefined4 *)0x8007ffff < puVar3)) {
    if (puVar3 < (undefined4 *)0x8000000) {
      puVar3 = puVar3 + 0x10000000;
    }
    else if (puVar3 < (undefined4 *)0xc0000000) {
      puVar3 = (undefined4 *)0x0;
    }
  }
  else {
    puVar3 = puVar3 + -0x8000000;
  }
  iVar4 = 0;
  iVar2 = 0x20;
  do {
    FUN_ram_000ee260(s_idx__d__u__u_ram_001c1bac,iVar4,puVar3[iVar4 * 0x10 + 9],
                     puVar3[iVar4 * 0x10 + 8]);
    iVar2 = iVar2 + -1;
    iVar4 = iVar4 + 1;
  } while (iVar2 != 0);
  FUN_ram_000ee260(s_mbox__p__p_ram_001c1bbc,*puVar3,puVar3[1]);
  if ((puVar3[1] != -1) && (FUN_ram_000ee260(s_message_pending_from_DSP_ram_001c1bc8), param_2 == 1)
     ) {
    puVar3[1] = 0xffffffff;
  }
  return;
}


