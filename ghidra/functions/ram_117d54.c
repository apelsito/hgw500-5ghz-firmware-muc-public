/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00117d54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_00117d54(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint local_20;
  
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar3 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar3 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = _DAT_ram_e00000bc + 0xe0000000;
  }
  iVar4 = *(int *)(uVar3 + 0xc0);
  iVar1 = *(int *)(iVar4 + 0x5e0);
  if (iVar1 == *(int *)(iVar4 + 0x5e4)) {
    if ((DAT_ram_0018c0dc != (int *)0x0) && (param_2 == *(ushort *)((int)DAT_ram_0018c0dc + 0x1a)))
    {
      if (param_2 == 8) {
        uVar2 = 4;
      }
      else {
        uVar2 = 0x10;
      }
      uVar3 = FUN_ram_000eeb74(param_1,DAT_ram_0018c0dc + 1,uVar2);
      iVar1 = 1 - uVar3;
      if (1 < uVar3) {
        iVar1 = 0;
      }
      if (iVar1 != 0) {
        return DAT_ram_0018c0dc;
      }
    }
  }
  else {
    FUN_ram_80025588(iVar4,0x5e8);
    *(int *)(iVar4 + 0x5e4) = iVar1;
  }
  if (param_2 == 8) {
    FUN_ram_0039fe00(&local_20,param_1,4);
    local_20 = local_20 >> 0x18;
  }
  else {
    local_20 = (uint)*(byte *)(param_1 + 0xf);
  }
  DAT_ram_0018c0dc = *(int **)(iVar4 + (local_20 & 0x7f) * 4);
  do {
    if (DAT_ram_0018c0dc == (int *)0x0) {
      return (int *)0x0;
    }
    if (param_2 == *(ushort *)((int)DAT_ram_0018c0dc + 0x1a)) {
      uVar2 = 4;
      if (param_2 != 8) {
        uVar2 = 0x10;
      }
      uVar3 = FUN_ram_000eeb74(param_1,DAT_ram_0018c0dc + 1,uVar2);
      iVar1 = 1 - uVar3;
      if (1 < uVar3) {
        iVar1 = 0;
      }
      if (iVar1 != 0) {
        return DAT_ram_0018c0dc;
      }
    }
    DAT_ram_0018c0dc = (int *)*DAT_ram_0018c0dc;
  } while( true );
}


