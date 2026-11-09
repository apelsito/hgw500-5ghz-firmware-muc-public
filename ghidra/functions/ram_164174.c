/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00164174 */

uint FUN_ram_00164174(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)DAT_ram_0020fe0d;
  if (uVar3 == 0) {
    uVar3 = (uint)DAT_ram_0020fe21;
  }
  DAT_ram_800379b4 = uVar3;
  uVar1 = FUN_ram_0018ae54();
  if (param_1 == 0) {
    if (uVar3 == 1) {
      uVar3 = (uVar1 >> 5) + (uVar1 >> 2) + (uVar1 >> 1);
      uVar2 = FUN_ram_0018ae6c();
      if (uVar2 <= uVar3) goto LAB_ram_001642a0;
    }
    else if (uVar3 == 2) {
      uVar3 = (uVar1 >> 1) + (uVar1 >> 3);
      uVar2 = FUN_ram_0018ae6c();
      if (uVar2 <= uVar3) goto LAB_ram_001642a0;
    }
    else if (uVar3 == 3) {
      uVar2 = FUN_ram_0018ae6c();
      uVar3 = uVar1 >> 1;
      if (uVar2 <= uVar1 >> 1) goto LAB_ram_001642a0;
    }
    else {
      uVar2 = FUN_ram_0018ae6c();
      uVar3 = uVar1;
      if (uVar2 <= uVar1) goto LAB_ram_001642a0;
    }
    uVar3 = FUN_ram_0018ae6c();
  }
  else if (uVar3 == 1) {
    uVar3 = (uVar1 >> 6) + (uVar1 >> 2) + uVar1;
    if (DAT_ram_0020fe1c < uVar3) {
      uVar3 = DAT_ram_0020fe1c;
    }
  }
  else if (uVar3 == 2) {
    uVar3 = (uVar1 >> 4) + (uVar1 >> 1) + uVar1;
    if (DAT_ram_0020fe1c < uVar3) {
      uVar3 = DAT_ram_0020fe1c;
    }
  }
  else if (uVar3 == 3) {
    uVar3 = uVar1 * 2;
    if (DAT_ram_0020fe1c < uVar1 * 2) {
      uVar3 = DAT_ram_0020fe1c;
    }
  }
  else {
    uVar3 = DAT_ram_0020fe1c;
    if (uVar1 <= DAT_ram_0020fe1c) {
      if (DAT_ram_0020fe0c < 2) {
        return uVar1;
      }
      FUN_ram_000ee260(s_AutoCS__Adjust_cs_threshold_from_ram_001c8558,uVar1,uVar1);
      return uVar1;
    }
  }
LAB_ram_001642a0:
  if (1 < DAT_ram_0020fe0c) {
    FUN_ram_000ee260(s_AutoCS__Adjust_cs_threshold_from_ram_001c8558,uVar1,uVar3);
  }
  return uVar3;
}


