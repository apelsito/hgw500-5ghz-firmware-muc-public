/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011066c */

int FUN_ram_0011066c(int param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_ram_001104e4();
  bVar2 = *(char *)(param_1 + 0x416d) + 1;
  *(byte *)(param_1 + 0x416d) = bVar2;
  if (bVar2 == 1) {
    *(int *)(param_1 + 0x4154) = *(int *)(param_1 + 0x4154) + 1;
    if ((iVar1 != 0) || (*(byte *)(param_1 + 0x416c) < 2)) {
LAB_ram_00110718:
      FUN_ram_0010cd00(param_1);
      *(uint *)(param_1 + 0x4060) = *(uint *)(param_1 + 0x4060) & 0xfffffffb;
      if (*(char *)(param_1 + 0x40bd) == '\0') {
        return iVar1;
      }
      FUN_ram_001101c8(param_1);
      return iVar1;
    }
  }
  else {
    *(int *)(param_1 + 0x415c) = *(int *)(param_1 + 0x415c) + 1;
    if ((iVar1 != 0) || (*(byte *)(param_1 + 0x416c) <= bVar2)) goto LAB_ram_00110718;
  }
  FUN_ram_00110768(param_1,0);
  *(int *)(param_1 + 0x4158) = *(int *)(param_1 + 0x4158) + 1;
  return iVar1;
}


