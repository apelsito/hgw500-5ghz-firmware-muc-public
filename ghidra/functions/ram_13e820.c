/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013e820 */

void FUN_ram_0013e820(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x3dc);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x80) != 0) goto LAB_ram_0013e89c;
  }
  else if ((uVar1 & 0x80) == 0) {
    *(byte *)(*(int *)(param_1 + 0x4c8) + 0x24cf) =
         *(byte *)(*(int *)(param_1 + 0x4c8) + 0x24cf) | 0x80;
    goto LAB_ram_0013e89c;
  }
  iVar2 = *(int *)(param_1 + 0x4c8);
  *(byte *)(iVar2 + 0x24cf) = *(byte *)(iVar2 + 0x24cf) | 0x40;
  *(byte *)(iVar2 + 0x24cf) = *(byte *)(iVar2 + 0x24cf) | 0x80;
LAB_ram_0013e89c:
  if (((uVar1 & 0x10) == 0) || ((uVar1 & 0x20) != 0)) {
    if (((uVar1 & 0x20) == 0) || ((uVar1 & 0x10) != 0)) {
      iVar2 = *(int *)(param_1 + 0x4c8);
      *(byte *)(iVar2 + 0x24ce) = *(byte *)(iVar2 + 0x24ce) | 0x10;
      *(byte *)(iVar2 + 0x24ce) = *(byte *)(iVar2 + 0x24ce) | 0x20;
    }
  }
  else {
    *(byte *)(*(int *)(param_1 + 0x4c8) + 0x24ce) =
         *(byte *)(*(int *)(param_1 + 0x4c8) + 0x24ce) | 0x20;
  }
  if (((uVar1 & 4) == 0) || ((uVar1 & 8) != 0)) {
    if (((uVar1 & 8) == 0) || ((uVar1 & 4) != 0)) {
      iVar2 = *(int *)(param_1 + 0x4c8);
      *(byte *)(iVar2 + 0x24cd) = *(byte *)(iVar2 + 0x24cd) | 4;
      *(byte *)(iVar2 + 0x24cd) = *(byte *)(iVar2 + 0x24cd) | 8;
    }
  }
  else {
    *(byte *)(*(int *)(param_1 + 0x4c8) + 0x24cd) =
         *(byte *)(*(int *)(param_1 + 0x4c8) + 0x24cd) | 8;
  }
  if (((uVar1 & 1) != 0) && ((uVar1 & 2) == 0)) {
    *(byte *)(*(int *)(param_1 + 0x4c8) + 0x24cc) =
         *(byte *)(*(int *)(param_1 + 0x4c8) + 0x24cc) | 2;
    return;
  }
  if (((uVar1 & 2) != 0) && ((uVar1 & 1) == 0)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x4c8);
  *(byte *)(iVar2 + 0x24cc) = *(byte *)(iVar2 + 0x24cc) | 1;
  *(byte *)(iVar2 + 0x24cc) = *(byte *)(iVar2 + 0x24cc) | 2;
  return;
}


