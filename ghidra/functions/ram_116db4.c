/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00116db4 */

void FUN_ram_00116db4(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  
  if (*(char *)(param_2 + 100) == '\0') {
    if (DAT_ram_8002c954 != 2) {
      return;
    }
  }
  else if (DAT_ram_8002c954 == 0) {
    return;
  }
  if (0x13 < param_4) {
    uVar2 = (int)(*(ushort *)(param_3 + 0x10) & 0xf000) >> 0xc;
    if (uVar2 < 0x10) {
      uVar1 = (uint)*(byte *)(param_3 + 0x13) << 4 | (int)(uint)*(byte *)(param_3 + 0x12) >> 4;
      iVar3 = uVar2 * 0x4c;
      uVar2 = (0x1000 - (uint)*(ushort *)(param_2 + 0x7e0 + iVar3)) + uVar1 & 0xfff;
      puVar4 = (ushort *)(iVar3 + param_2 + 0x7e0);
      if (((uVar2 != 0) && (uVar2 < puVar4[1])) && ((char)puVar4[0x20] == '\x01')) {
        FUN_ram_800221cc(param_1,puVar4,uVar1,(short)uVar2);
        puVar4[6] = *puVar4 & puVar4[1] - 1;
        FUN_ram_800223a0(param_1,puVar4,param_2);
        FUN_ram_800213a0(*(undefined4 *)(puVar4 + 8));
      }
    }
  }
  return;
}


