/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013423c */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_ram_0013423c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0x10 << (DAT_ram_0018c18c & 0x1f);
  if ((*(char *)(param_1 + 0x402e) != '\0') &&
     (iVar1 = (int)((0xfa - uVar2) * (DAT_ram_0020fd44 * 10 + -300)) / 700, 0 < iVar1)) {
    uVar2 = iVar1 + uVar2;
  }
  if (param_2 < DAT_ram_0020fc94) {
    param_2 = DAT_ram_0020fc94;
  }
  if (param_2 < uVar2) {
    return 0;
  }
  DAT_ram_800371dc = DAT_ram_800371dc + 1;
  return 1;
}


