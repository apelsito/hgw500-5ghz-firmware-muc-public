/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001004dc */

void FUN_ram_001004dc(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x194);
  *puVar1 = 6;
  puVar1[1] = 9;
  puVar1[2] = &DAT_ram_0020000c;
  puVar1[3] = &DAT_ram_00200012;
  puVar1[4] = 0x400018;
  puVar1[5] = 0x400024;
  puVar1[6] = 0x400030;
  puVar1[7] = 0x400036;
  if (param_2 == 0) {
    puVar1[8] = 0x900001;
    puVar1[9] = 0x900002;
    puVar1[10] = 0xa00005;
    puVar1[0xb] = 0xb0000b;
  }
  else {
    puVar1[8] = 1;
    puVar1[9] = 2;
    puVar1[10] = 5;
    puVar1[0xb] = 0xb;
  }
  *(undefined4 **)(*(int *)(param_1 + 0xc) + 0x450) = puVar1;
  return;
}


