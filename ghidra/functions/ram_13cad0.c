/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013cad0 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0013cad0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  if (DAT_ram_0018c10c == 0) {
    if ((param_1[0xe3] & 0x400U) == 0) {
      iVar2 = FUN_ram_0014b794(param_2);
      if (iVar2 == 0) {
        if (((*(ushort *)(param_1 + 3) & 8) == 0) || (*(char *)((int)param_1 + 0x72) != '\x01')) {
          return 0;
        }
        if (_DAT_ram_0046e000 == 0) goto LAB_ram_0013cb90;
        cVar1 = *(char *)(*param_1 + 0x10);
      }
      else {
        if (_DAT_ram_0046e000 == 0) goto LAB_ram_0013cb90;
        cVar1 = *(char *)(*param_1 + 0x10);
      }
    }
    else {
      if (_DAT_ram_0046e000 == 0) goto LAB_ram_0013cb90;
      cVar1 = *(char *)(*param_1 + 0x10);
    }
  }
  else {
    if (_DAT_ram_0046e000 == 0) goto LAB_ram_0013cb90;
    cVar1 = *(char *)(*param_1 + 0x10);
  }
  if (cVar1 == '\0') {
    return 1;
  }
LAB_ram_0013cb90:
  if (_DAT_ram_0046e000 == 0) {
    return 1;
  }
  return 0;
}


