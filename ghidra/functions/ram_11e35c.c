/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011e35c */

void FUN_ram_0011e35c(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = DAT_ram_0018c108;
  uVar2 = param_2 >> 4 & 1;
  param_2 = param_2 & 3;
  if ((uVar2 != DAT_ram_0018c104) ||
     (bVar4 = DAT_ram_0018c108 != param_2, DAT_ram_0018c104 = uVar2, DAT_ram_0018c108 = param_2,
     uVar2 != 0 && bVar4)) {
    DAT_ram_0018c104 = uVar2;
    DAT_ram_0018c108 = param_2;
    FUN_ram_000e7d50(param_1 + 0x3884);
    for (iVar3 = *(int *)(param_1 + 0x388c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x114)) {
      uVar2 = *(uint *)(iVar3 + 0x408);
      if (DAT_ram_0018c104 == 0) {
        if ((uVar1 <= uVar2) && (DAT_ram_0018c108 != 0)) {
          *(char *)(iVar3 + 0x683) = (char)uVar2;
          goto LAB_ram_0011e40c;
        }
      }
      else if (DAT_ram_0018c108 <= uVar2) {
        *(char *)(iVar3 + 0x683) = (char)DAT_ram_0018c108;
LAB_ram_0011e40c:
        FUN_ram_0013d37c(iVar3);
      }
    }
    FUN_ram_000e7da8(param_1 + 0x3884);
  }
  return;
}


