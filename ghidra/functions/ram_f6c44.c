/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f6c44 */

void FUN_ram_000f6c44(void)

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  bool bVar4;
  
  bVar4 = false;
  if (DAT_ram_0018c054 == 0) {
    bVar3 = bVar4;
    if (DAT_ram_0018c058 != 0) goto LAB_ram_000f6ca4;
    bVar4 = false;
  }
  else {
    iVar1 = FUN_ram_000f6b50(&LAB_ram_80020000,0x1869);
    bVar3 = iVar1 == DAT_ram_0018c054;
    if (DAT_ram_0018c058 != 0) {
LAB_ram_000f6ca4:
      iVar1 = FUN_ram_000f6b50(FUN_ram_000e2000,0x2a6e4);
      bVar4 = iVar1 == DAT_ram_0018c058;
    }
    if (bVar3) {
      pcVar2 = &DAT_ram_001be8b0;
      goto LAB_ram_000f6cdc;
    }
  }
  pcVar2 = s_FAILED_ram_001be8a8;
LAB_ram_000f6cdc:
  FUN_ram_000eaac4(0,s_Fast_Text__SRAM__checksum___s_ram_001be888,pcVar2);
  if (bVar4) {
    pcVar2 = &DAT_ram_001be8b0;
  }
  else {
    pcVar2 = s_FAILED_ram_001be8a8;
  }
  FUN_ram_000eaac4(0,s_Slow_Text__DRAM__checksum___s_ram_001be8b4,pcVar2);
  return;
}


