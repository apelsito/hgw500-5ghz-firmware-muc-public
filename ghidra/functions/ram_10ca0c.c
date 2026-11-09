/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010ca0c */

void FUN_ram_0010ca0c(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (((param_2 & 5) == 0) || (DAT_ram_0018c0a8 != 0)) {
    if (((param_2 & 1) == 0) && (DAT_ram_0018c0a8 != 0)) {
      FUN_ram_000f7d60(DAT_ram_0018c0a8,param_2 & 5);
      DAT_ram_0018c0a8 = 0;
    }
  }
  else {
    DAT_ram_0018c0a8 = FUN_ram_000f7c10(10000,param_1,0,&LAB_ram_001123a8,(param_2 & 4) == 0 | 2);
  }
  if ((param_2 & 0x10) != 0) {
    iVar1 = (param_3 >> 0x18 & 0xffU) * 0xf0;
    FUN_ram_001097c4(DAT_ram_0018c0a4 + iVar1,0,*(undefined1 *)(DAT_ram_0018c0a4 + iVar1 + 0x49),1);
  }
  if ((param_2 & 0x20) != 0) {
    FUN_ram_0010c950(param_1);
  }
  return;
}


