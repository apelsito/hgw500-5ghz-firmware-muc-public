/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011c9d4 */

void FUN_ram_0011c9d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x68c) = param_2;
  uVar1 = FUN_ram_000f7c10(param_3,param_1,0,&LAB_ram_001265e8,2);
  *(undefined4 *)(param_1 + 0x690) = uVar1;
  DAT_ram_80037910 = (uint)*(byte *)(param_1 + 0x67c);
  DAT_ram_80037914 = *(undefined4 *)(param_1 + 0x68c);
  return;
}


