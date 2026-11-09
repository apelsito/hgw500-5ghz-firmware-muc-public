/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011a598 */

undefined4 FUN_ram_0011a598(int param_1,byte *param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x2c) == '\x01') {
LAB_ram_0011a5b0:
    uVar3 = *(undefined4 *)(param_1 + 0x38);
  }
  else {
    if ((*param_2 & 1) != 0) {
      if ((((*param_2 == 0xff) && (param_2[1] == 0xff)) && (param_2[2] == 0xff)) &&
         ((param_2[3] == 0xff && (param_2[4] != 0xff)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) goto LAB_ram_0011a5b0;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    FUN_ram_000e7d50(iVar1 + 0x3884);
    uVar3 = FUN_ram_00119258(iVar1 + 0x3880,param_2);
    FUN_ram_000e7da8(iVar1 + 0x3884);
  }
  return uVar3;
}


