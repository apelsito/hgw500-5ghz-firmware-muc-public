/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00115a08 */

void FUN_ram_00115a08(int param_1,byte *param_2,uint param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_c;
  undefined1 local_a;
  
  if ((*(ushort *)(param_1 + 0x40c) & 8) != 0) {
    return;
  }
  if ((*(ushort *)(param_1 + 0x40c) & 2) != 0) {
    if (DAT_ram_80038ee0 - *(int *)(param_1 + 0x418) < 0) {
      return;
    }
    local_14 = DAT_ram_001a61b8;
    local_10 = DAT_ram_001a61bc;
    local_c = DAT_ram_001a61c0;
    local_a = DAT_ram_001a61c2;
    if ((*param_2 & 0x8c) == 0x88) {
      if ((param_2[1] & 3) == 3) {
        if (param_3 < 0x2b) {
          return;
        }
        iVar1 = 0x20;
      }
      else {
        if (param_3 < 0x25) {
          return;
        }
        iVar1 = 0x1a;
      }
    }
    else if ((param_2[1] & 3) == 3) {
      if (param_3 < 0x29) {
        return;
      }
      iVar1 = 0x1e;
    }
    else {
      if (param_3 < 0x23) {
        return;
      }
      iVar1 = 0x18;
    }
    iVar1 = FUN_ram_000eeb74(&local_14,param_2 + iVar1,0xb);
    if (iVar1 == 0) {
      FUN_ram_0012c830(param_1,0xb);
    }
    return;
  }
  return;
}


