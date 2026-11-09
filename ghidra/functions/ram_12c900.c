/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012c900 */

uint FUN_ram_0012c900(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_1c;
  
  uVar3 = 0;
  iVar2 = 4;
  uVar4 = 0;
  local_1c = DAT_ram_001a6658;
  do {
    if ((*(int *)(param_1 + (uint)*(byte *)((int)&local_1c + uVar4) * 8 + 0x48c) != 0) ||
       (iVar1 = FUN_ram_00155e80(param_1), iVar1 != 0)) {
      uVar3 = uVar3 | 1 << (uVar4 & 0x1f);
    }
    iVar2 = iVar2 + -1;
    uVar4 = uVar4 + 1;
  } while (iVar2 != 0);
  if ((uVar3 == 0) &&
     ((*(ushort *)(param_1 + 0x40c) & 2) == 0 && (*(ushort *)(param_1 + 0x40c) & 8) == 0)) {
    FUN_ram_0012c830(param_1,0);
  }
  return uVar3;
}


