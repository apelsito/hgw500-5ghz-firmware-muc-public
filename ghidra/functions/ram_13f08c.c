/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013f08c */

void FUN_ram_0013f08c(int param_1,int param_2,uint param_3,undefined1 param_4)

{
  DAT_ram_80037818 = DAT_ram_80037818 << 8 | (uint)(byte)(&DAT_ram_001a9058)[param_2];
  DAT_ram_8003781c = DAT_ram_8003781c << 8 | param_3;
  *(short *)(param_1 + 0x24d6) = (short)param_2;
  *(char *)(param_1 + 0x24d8) = (char)param_3;
  *(undefined1 *)(param_1 + 0x24da) = 1;
  *(undefined1 *)(param_1 + 0x24d9) = param_4;
  return;
}


