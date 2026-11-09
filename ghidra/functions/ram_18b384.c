/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018b384 */

void FUN_ram_0018b384(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = STATUS32;
  if ((uVar1 & 6) != 0) {
    STATUS32 = uVar1 & 0xfffffff9;
  }
  iVar2 = 1 - param_2;
  if (1 < param_2) {
    iVar2 = 0;
  }
  FUN_ram_0018b004(param_1,iVar2);
  FUN_ram_0018b2dc(param_1,param_2);
  DAT_ram_800371f8 = DAT_ram_800371f8 + 1;
  STATUS32 = uVar1;
  return;
}


