/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f17c8 */

void FUN_ram_000f17c8(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_18;
  
  piVar2 = (int *)(param_1 + 0x2c);
  if ((*(ushort *)(param_1 + 0xe) & 0x40) == 0) {
    iVar3 = *(int *)(param_1 + 0x44);
    local_1c = 0x82;
    local_18 = 3;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x44);
    local_1c = 0;
    local_18 = 0;
  }
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      return;
    }
    FUN_ram_000ee834();
    *(undefined4 *)(param_1 + 0x2c) = 0;
    return;
  }
  if (local_1c == 0) {
    if (local_18 == 0) goto LAB_ram_000f18d0;
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    do {
      iVar4 = iVar3 + iVar5 * 0x20;
      iVar3 = FUN_ram_000f1ae8(*(undefined1 *)(iVar3 + iVar5 * 0x20 + 1));
      while (iVar3 == 0) {
        iVar3 = FUN_ram_000f1ae8(*(undefined1 *)(iVar4 + 1));
      }
      uVar1 = *(undefined1 *)(iVar4 + 1);
      *(undefined4 *)(*piVar2 + iVar5 * 4) = 0;
      FUN_ram_000f1b6c(uVar1);
      iVar5 = iVar5 + 1;
      iVar3 = *(int *)(param_1 + 0x44);
    } while (iVar5 < local_1c);
    if (local_18 == 0) goto LAB_ram_000f18d0;
    iVar5 = 0;
  }
  do {
    FUN_ram_000f1bd8(*(undefined1 *)(iVar5 * 0x20 + 1 + iVar3));
    iVar5 = iVar5 + 1;
    iVar3 = *(int *)(param_1 + 0x44);
  } while (iVar5 < local_18);
LAB_ram_000f18d0:
  FUN_ram_000ee834(iVar3);
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (*piVar2 == 0) {
    return;
  }
  FUN_ram_000ee834();
  *piVar2 = 0;
  return;
}


