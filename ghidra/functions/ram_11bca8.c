/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011bca8 */

undefined1 FUN_ram_0011bca8(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_ram_0013d894(param_1,1);
  uVar2 = FUN_ram_000e3a84(uVar1,*(ushort *)(param_1 + 0xc) >> 0xe & 1);
  if (-1 < DAT_ram_0018c14c) {
    return 0;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x683);
  if ((int)uVar2 < 4) {
    uVar2 = uVar2 & 0xff;
    iVar4 = uVar2 * 3;
    if (((DAT_ram_0018c180 == 0) || (*(int *)(param_1 + 0xd28) == 0)) ||
       (*(char *)(param_1 + 0x4e8) != '\x03')) {
      iVar5 = 0;
      goto LAB_ram_0011bd78;
    }
    if (*(char *)(param_1 + 0x4f0) != '\0') {
LAB_ram_0011bd98:
      if (uVar2 == 0) {
        iVar5 = 0;
        goto LAB_ram_0011bd78;
      }
    }
  }
  else {
    if (((DAT_ram_0018c180 == 0) || (*(int *)(param_1 + 0xd28) == 0)) ||
       (*(char *)(param_1 + 0x4e8) != '\x03')) {
      iVar5 = 0;
      iVar4 = 0;
      goto LAB_ram_0011bd78;
    }
    iVar4 = 0;
    if (*(char *)(param_1 + 0x4f0) != '\0') {
      uVar2 = 0;
      goto LAB_ram_0011bd98;
    }
  }
  iVar5 = 1;
LAB_ram_0011bd78:
  if (2 < uVar3) {
    uVar3 = 0;
  }
  return (&DAT_ram_0018d1fc)[uVar3 + iVar4 + iVar5 * 0xc];
}


