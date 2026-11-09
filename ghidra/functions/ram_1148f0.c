/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001148f0 */

void FUN_ram_001148f0(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    FUN_ram_000f7d60();
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar2 = DAT_ram_8002c22c / 1000;
    if (0x7ffffffe < uVar2) {
      uVar2 = 0x7ffffffe;
    }
    uVar1 = FUN_ram_000f7c10(uVar2 + 1,param_1,param_2,&LAB_ram_001181c0,3);
  }
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  return;
}


