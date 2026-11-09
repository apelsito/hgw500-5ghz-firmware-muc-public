/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00140590 */

void FUN_ram_00140590(int param_1,uint param_2,undefined4 param_3,int param_4,undefined1 param_5)

{
  uint uVar1;
  
  if (param_4 == 0) {
    uVar1 = param_2 & 0xff | 0x80;
  }
  else {
    uVar1 = (uint)(byte)(&DAT_ram_001a9058)[param_2];
  }
  FUN_ram_001377c0(uVar1,param_3);
  *(short *)(param_1 + 0x24d6) = (short)param_2;
  *(char *)(param_1 + 0x24d8) = (char)param_3;
  *(char *)(param_1 + 0x24da) = (char)param_4;
  *(undefined1 *)(param_1 + 0x24d9) = param_5;
  return;
}


