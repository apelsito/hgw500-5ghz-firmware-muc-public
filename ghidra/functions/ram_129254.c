/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00129254 */

void FUN_ram_00129254(int *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *param_1;
  if (*(char *)(iVar5 + 0x2c) != '\x06') {
    return;
  }
  uVar4 = *(ushort *)(param_1 + 6) & 0xffff3fff;
  if (uVar4 <= *(ushort *)(iVar5 + 0x2e)) {
    uVar4 = uVar4 >> 3;
    uVar3 = 1 << (*(ushort *)(param_1 + 6) & 7);
    bVar2 = *(byte *)(*(int *)(iVar5 + 0x78) + uVar4);
    if (param_2 != ((uVar3 & bVar2) != 0)) {
      bVar1 = (byte)uVar3;
      if (param_2 == 0) {
        bVar2 = bVar2 & ~bVar1;
      }
      else {
        bVar2 = bVar2 | bVar1;
      }
      *(byte *)(*(int *)(iVar5 + 0x78) + uVar4) = bVar2;
      return;
    }
    return;
  }
  return;
}


