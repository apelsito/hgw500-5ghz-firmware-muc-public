/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00110240 */

undefined4 FUN_ram_00110240(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1[0x1037] == 0) {
    param_1[0x104d] = param_1[0x104d] + 1;
  }
  else {
    uVar1 = (uint)*(ushort *)((int)param_1 + (uint)*(byte *)((int)param_1 + 0x416d) * 2 + 0x416e) *
            1000 + 0x251c;
    if (uVar1 < 0x7fff) {
      iVar2 = FUN_ram_0010e7f0(param_1,param_1[0x1037],(short)param_1[0x1038],(short)param_1[0x1039]
                               ,uVar1,7,&LAB_ram_00110798,param_1,0);
      if (iVar2 == 0) {
        return 0;
      }
      param_1[0x1051] = param_1[0x1051] + 1;
      return 0;
    }
    param_1[0x1050] = param_1[0x1050] + 1;
  }
  FUN_ram_0010cd00(param_1);
  iVar2 = *(int *)(*param_1 + 0x1c);
  *(uint *)(iVar2 + 0x4060) = *(uint *)(iVar2 + 0x4060) & 0xfffffffb;
  FUN_ram_000eea80(iVar2 + 0x416c,0,6);
  if (*(char *)(iVar2 + 0x40bd) == '\0') {
    return 0;
  }
  FUN_ram_001101c8(iVar2);
  return 0;
}


