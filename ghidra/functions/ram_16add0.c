/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016add0 */

undefined4 FUN_ram_0016add0(byte *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_1[1] < 4) {
    iVar7 = param_2 + 0xdc4;
    iVar6 = param_2 + 0xff8 + (uint)param_1[1] * 4;
    uVar1 = (uint)*param_1;
    iVar3 = *(int *)(iVar6 + -0x234);
    if (((uVar1 < *(uint *)(iVar6 + -0x224)) && (iVar3 != 0)) &&
       (*(short *)param_1 == *(short *)(iVar3 + uVar1 * 0x10))) {
      DAT_ram_0018c304 = uVar1;
      iVar3 = FUN_ram_0016ab9c(1,uVar1 * 0x10 + iVar3);
      iVar5 = (uint)*param_1 * 0x10;
      iVar6 = *(int *)(iVar7 + (uint)param_1[1] * 4);
      pcVar2 = *(code **)(iVar6 + iVar5 + 8);
      puVar4 = (undefined4 *)(iVar6 + iVar5);
      if (iVar3 != 0) {
        FUN_ram_0016abe8(1,param_1,*puVar4,puVar4[1],pcVar2,puVar4[3]);
        iVar5 = (uint)*param_1 * 0x10;
        iVar6 = *(int *)(iVar7 + (uint)param_1[1] * 4);
        pcVar2 = *(code **)(iVar6 + 8 + iVar5);
      }
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(param_1);
        iVar5 = (uint)*param_1 << 4;
        iVar6 = *(int *)(iVar7 + (uint)param_1[1] * 4);
      }
      iVar3 = FUN_ram_0016ab9c(2,iVar6 + iVar5);
      if (iVar3 != 0) {
        iVar6 = (uint)*param_1 * 0x10;
        iVar3 = *(int *)(iVar7 + (uint)param_1[1] * 4);
        FUN_ram_0016acf8(2,param_1,*(undefined4 *)(iVar3 + iVar6),*(undefined4 *)(iVar3 + iVar6 + 4)
                         ,*(undefined4 *)(iVar3 + iVar6 + 8),*(undefined4 *)(iVar3 + iVar6 + 0xc));
      }
      return 1;
    }
    FUN_ram_000ee260(s_msg_>id__d__cmd_>id__d__cmd_>typ_ram_001c8d84);
  }
  else {
    FUN_ram_000ee260(s_cmd_>type_greater_than_max_eleme_ram_001c8d5c);
  }
  return 0;
}


