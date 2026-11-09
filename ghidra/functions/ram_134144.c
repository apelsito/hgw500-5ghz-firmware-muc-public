/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00134144 */

bool FUN_ram_00134144(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = STATUS32;
  if ((uVar2 & 2) != 0) {
    STATUS32 = uVar2 & 0xfffffffd;
  }
  bVar1 = *(byte *)(param_1 + 0x465d);
  *(byte *)(param_1 + 0x465d) = bVar1 + 1;
  iVar3 = DAT_ram_80038ee0;
  bVar4 = *(char *)(param_1 + 0x465e) != '\0';
  if (!bVar4) {
    if (*(int *)(param_1 + 0x4664) == 0) goto LAB_ram_001341d0;
    if (-1 < (*(int *)(param_1 + 0x4664) + 0xfa) - DAT_ram_80038ee0) {
      if (bVar1 < 0x10) goto LAB_ram_001341d0;
      bVar4 = true;
    }
  }
  *(undefined1 *)(param_1 + 0x465d) = 0;
  *(undefined1 *)(param_1 + 0x465e) = 0;
LAB_ram_001341d0:
  *(int *)(param_1 + 0x4664) = iVar3;
  STATUS32 = uVar2;
  return bVar4;
}


