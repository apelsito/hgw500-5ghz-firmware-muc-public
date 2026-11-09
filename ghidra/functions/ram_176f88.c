/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00176f88 */

int FUN_ram_00176f88(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_1 >> 0xd) >> 0x12;
  iVar1 = (uVar2 + param_1 & 0x3fff) - uVar2;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0x4000;
  }
  if (iVar1 < 0x1001) {
    return *(int *)(s_yywwwttrroommmkkkkkkkkkkkkkkVTRP_ram_00195d64 + iVar1 * 4 + 0x38);
  }
  if (iVar1 < 0x2001) {
    return *(int *)(s_yywwwttrroommmkkkkkkkkkkkkkkVTRP_ram_00195d64 +
                   (0x1000 - (iVar1 + -0x1000)) * 4 + 0x38);
  }
  if (0x3000 < iVar1) {
    return -*(int *)(s_yywwwttrroommmkkkkkkkkkkkkkkVTRP_ram_00195d64 + (0x4000 - iVar1) * 4 + 0x38);
  }
  return -*(int *)(&DAT_ram_0018dd9c + iVar1 * 4);
}


