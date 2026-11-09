/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00115de4 */

undefined4 FUN_ram_00115de4(undefined4 param_1,int param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  
  bVar1 = *param_3;
  uVar5 = (uint)*(byte *)(param_2 + 0x4e9);
  bVar4 = bVar1 & 0xf0;
  pbVar6 = param_3 + 0x18;
  if ((bVar1 & 0xc) == 0) {
    if (bVar4 != 0xe0) {
      if ((bVar4 == 0xd0) && (*pbVar6 == 0x15)) {
        bVar2 = param_3[0x19];
        goto joined_r0x00115e3c;
      }
      goto LAB_ram_00115e64;
    }
    if (*pbVar6 != 0x15) goto LAB_ram_00115e64;
    bVar2 = param_3[0x19];
joined_r0x00115e3c:
    if (bVar2 != 0) goto LAB_ram_00115e64;
    iVar3 = FUN_ram_00115cbc(param_1,param_2,param_3);
    if (iVar3 != 0) {
      DAT_ram_800370e8 = DAT_ram_800370e8 + 1;
      if (uVar5 < 10) {
        *(int *)(&DAT_ram_800376b0 + uVar5 * 4) = *(int *)(&DAT_ram_800376b0 + uVar5 * 4) + 1;
        return 1;
      }
      goto LAB_ram_00115eb4;
    }
    if ((*param_3 & 0xc) != 0 || (*param_3 & 0xf0) != 0xd0) {
      return 0;
    }
  }
  else {
LAB_ram_00115e64:
    if ((bVar1 & 0xc) != 0 || bVar4 != 0xd0) {
      return 0;
    }
  }
  if (*pbVar6 != 7) {
    return 0;
  }
  if ((param_3[0x19] != 5) && (param_3[0x19] != 6)) {
    return 0;
  }
  DAT_ram_800370e4 = DAT_ram_800370e4 + 1;
  if (uVar5 < 10) {
    *(int *)(&DAT_ram_80037688 + uVar5 * 4) = *(int *)(&DAT_ram_80037688 + uVar5 * 4) + 1;
    return 1;
  }
LAB_ram_00115eb4:
  DAT_ram_800370ec = DAT_ram_800370ec + 1;
  return 0;
}


