/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00158b08 */

void FUN_ram_00158b08(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort local_28 [2];
  
  uVar1 = *(undefined1 *)(param_2 + 0x67c);
  iVar4 = FUN_ram_00155e14(uVar1);
  iVar5 = FUN_ram_00155e14(uVar1);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_ram_000e2000(*(undefined4 *)(iVar5 + 0x14));
  }
  local_28[0] = *(ushort *)(iVar5 + 0x92);
  uVar2 = local_28[0] >> 2;
  uVar3 = FUN_ram_0013cad0(param_2,param_1);
  uVar6 = *(uint *)(iVar4 + 100);
  uVar7 = *(uint *)(param_2 + 0x38c) & 0x600;
  if (uVar6 != *(uint *)(param_2 + 0x390)) {
    FUN_ram_000ee260(s_ni_qtn_flags_updated_by_Auc___pM_ram_001c7584,param_2 + 0x96,
                     *(uint *)(param_2 + 0x390),uVar6);
    FUN_ram_000ee260(&DAT_ram_001c75b0);
  }
  if ((uVar2 & 1) != uVar3) {
    local_28[0] = local_28[0] ^ 4;
    FUN_ram_001567ec(iVar5 + 0x92,local_28,2);
    FUN_ram_80025e54(iVar4 + 0x10,2,2);
  }
  if (uVar7 != (uVar6 & 0x600)) {
    uVar7 = uVar6 & 0xfffff9ff | uVar7;
    FUN_ram_80025e54(iVar4 + 100,uVar7,2);
    *(uint *)(param_2 + 0x390) = uVar7;
  }
  return;
}


