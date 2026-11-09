/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011c26c */

int FUN_ram_0011c26c(int param_1,byte *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if ((*param_2 & 1) != 0) {
    if ((((*param_2 == 0xff) && (param_2[1] == 0xff)) && (param_2[2] == 0xff)) &&
       ((param_2[3] == 0xff && (param_2[4] != 0xff)))) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) goto LAB_ram_0011c2d8;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_ram_000e7d50(iVar1 + 0x3884);
  iVar2 = FUN_ram_00119258(iVar1 + 0x3880,param_2);
  FUN_ram_000e7da8(iVar1 + 0x3884);
  if (iVar2 != 0) {
    return iVar2;
  }
  if (*(char *)(param_1 + 0x2c) != '\x01') {
    return 0;
  }
LAB_ram_0011c2d8:
  return *(int *)(param_1 + 0x38);
}


