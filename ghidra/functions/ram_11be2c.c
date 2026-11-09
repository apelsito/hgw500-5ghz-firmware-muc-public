/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011be2c */

void FUN_ram_0011be2c(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((param_2 & 1) == 0) {
    if (DAT_ram_0018c169 != '\0') {
      FUN_ram_0018b384(param_1,1);
    }
    DAT_ram_0018c169 = 0;
  }
  else {
    uVar1 = 0;
    iVar3 = 0x1e;
    LP_START = 0x11be4c;
    LP_END = 0x11be64;
    puVar2 = &DAT_ram_001a63cc;
    do {
      *(undefined4 *)(&DAT_ram_e60b2000 + uVar1 * 4) = *puVar2;
      uVar1 = uVar1 + 1 & 0xff;
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 1;
    } while (iVar3 != 0);
    DAT_ram_0018c169 = 1;
  }
  return;
}


