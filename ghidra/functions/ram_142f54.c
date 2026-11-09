/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00142f54 */

undefined4
FUN_ram_00142f54(undefined4 param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
                int param_7,uint param_8)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  
  if ((param_7 < 0x400) && (0x8000 < param_6)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  uVar4 = (uint)*(ushort *)(param_4 + 8 + param_5 * 2);
  if (param_8 < uVar4) {
    bVar3 = true;
  }
  else {
    if (uVar4 < param_8) {
      return 0;
    }
    bVar3 = false;
  }
  uVar4 = *param_3;
  if (((uVar4 & 1) == 0) && ((uVar4 >> 4 & 1) == 0)) {
    if (bVar2) {
      if ((uVar4 >> 1 & 1) == 0) {
        *param_3 = uVar4 | 2;
        return 0;
      }
      FUN_ram_00142cc8(param_1,param_2,param_3);
      *param_3 = *param_3 & 0xffffffed | 1;
      return 1;
    }
    *param_3 = uVar4 & 0xfffffffd;
    if (((param_7 < 0x400) && (0xccd < param_6)) && (bVar3)) {
      if ((uVar4 >> 2 & 1) != 0) {
        *param_3 = uVar4 & 0xfffffff9 | 0x10;
        return 0;
      }
      uVar4 = uVar4 & 0xfffffffd | 4;
    }
    else {
      if (!bVar3) {
        return 0;
      }
      uVar4 = uVar4 & 0xfffffff9;
    }
    *param_3 = uVar4;
    return 0;
  }
  if (!bVar3) {
    return 0;
  }
  if (param_6 <= param_7 + (param_7 >> 1)) {
    if ((uVar4 >> 3 & 1) == 0) {
      *param_3 = uVar4 | 8;
      return 0;
    }
    bVar1 = *(byte *)(param_2 + 0x14);
    *param_3 = uVar4 & 0xffffffe6;
    param_3[3] = (uint)bVar1;
    return 0;
  }
  *param_3 = uVar4 & 0xfffffff7;
  return 0;
}


