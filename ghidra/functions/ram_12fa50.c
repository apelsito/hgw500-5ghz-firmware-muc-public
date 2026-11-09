/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012fa50 */

undefined4 FUN_ram_0012fa50(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar1 = (int *)(param_1 + 0x3fb4);
  LP_START = 0x12fa6c;
  LP_END = 0x12fa78;
  do {
    if (*piVar1 != 0) {
      uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + 0x3014);
      DAT_ram_80037838 = DAT_ram_80037838 + 1;
      FUN_ram_00103230(*(undefined4 *)(param_1 + 0x3b20),2,10000,uVar2,6000);
      FUN_ram_00103230(*(undefined4 *)(param_1 + 0x3b20),1,10000,uVar2,4000);
      return 0;
    }
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_ram_001032e0(*(undefined4 *)(param_1 + 0x3b20),2);
  FUN_ram_001032e0(*(undefined4 *)(param_1 + 0x3b20),1);
  return 0;
}


