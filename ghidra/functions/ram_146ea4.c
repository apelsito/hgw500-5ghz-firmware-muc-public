/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00146ea4 */

int FUN_ram_00146ea4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_00137d34();
  iVar2 = 0xff;
  if (iVar1 != -1000) {
    iVar1 = iVar1 * -0xd >> 7;
    iVar3 = -iVar1;
    if (DAT_ram_0020fdb4 != 0) {
      FUN_ram_000ee260(s_Dynamic_AC__min_rssi__d_ram_001c5aac,iVar3);
    }
    if ((iVar3 < DAT_ram_0020fdb8) &&
       (iVar2 = 0xff - DAT_ram_0020fdbc * (DAT_ram_0020fdb8 + iVar1), iVar2 < 0x20)) {
      iVar2 = 0x20;
    }
  }
  return iVar2;
}


