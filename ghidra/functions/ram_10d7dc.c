/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010d7dc */

undefined4 FUN_ram_0010d7dc(int *param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  
  iVar10 = *(int *)(*param_1 + 0x1c);
  iVar8 = *(int *)(param_2 + 0x18);
  uVar6 = *(uint *)(param_2 + 0x14);
  iVar4 = *(int *)(iVar10 + 0x3b20);
  bVar2 = uVar6 != 0;
  bVar3 = iVar8 != 0;
  if (!bVar2 && !bVar3) {
    uVar6 = 5000;
    iVar8 = 0;
  }
  uVar5 = 1;
  uVar7 = uVar6;
  if (bVar2 || bVar3) {
    uVar9 = *(uint *)(*(int *)(iVar4 + 0xc) + 0x3014);
    if (iVar8 - *(int *)(*(int *)(iVar4 + 0xc) + 0x3018) == (uint)(uVar6 < uVar9) &&
        uVar6 - uVar9 < 2000) {
      uVar7 = uVar6 + 2000;
      iVar8 = iVar8 + (uint)(0xfffff82f < uVar6);
    }
    uVar5 = 0;
  }
  iVar4 = FUN_ram_00108bfc(iVar4,uVar5,uVar7,iVar8,FUN_ram_0010e384,0,0,0,0,param_1,param_2);
  uVar1 = *(ushort *)(iVar10 + 0x4022);
  if (iVar4 == 0) {
    if (2 < uVar1) {
      FUN_ram_000ee260(s_SCS__sample_channel_directly_sch_ram_001c0ca4);
    }
    uVar5 = 0;
  }
  else {
    if (1 < uVar1) {
      FUN_ram_000ee260(s_SCS__schedule_sample_channel_dir_ram_001c0ccc);
    }
    *(undefined4 *)(param_2 + 0xc) = 5;
    FUN_ram_0010d538(param_1,param_2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


