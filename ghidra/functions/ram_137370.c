/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00137370 */

int FUN_ram_00137370(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = DAT_ram_800261e0;
  switch(*(uint *)(param_1 + 4) & 0xff) {
  case 1:
  case 2:
  case 5:
  case 0xb:
    if (*(char *)(param_3 + 0x4660) == '\0') goto LAB_ram_00137400;
  }
  if ((*(uint *)(param_1 + 4) & 0x8000) == 0) {
    iVar1 = DAT_ram_800261e4;
  }
LAB_ram_00137400:
  return (*(uint *)(param_1 + 0x18) & 0x3f0000) +
         (uint)*(byte *)(param_1 + 3) * 0x100 +
         (iVar1 + param_2 + -4 + (DAT_ram_0018c1cc - 1) * 2 + (DAT_ram_0018c1cd - 3) * 4 & 0xff);
}


