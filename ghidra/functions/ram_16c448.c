/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016c448 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0016c448(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  
  iVar4 = 1 - DAT_ram_0021e010;
  if (1 < DAT_ram_0021e010) {
    iVar4 = 0;
  }
  if (DAT_ram_8002c8bc == '\x03') {
    return 0;
  }
  if (DAT_ram_0021e00c == 0) {
    FUN_ram_000ee260(s_mac_is_not_enabled__ram_001c90bc);
    return 0xffffffff;
  }
  if (param_2 == 0) {
    iVar2 = *DAT_ram_0021e014;
  }
  else {
    if (param_2 != 1 && param_2 != 2) {
      FUN_ram_000ee260(s_bw_is_the_same_as_set_test_mode__ram_001c90d4);
      goto LAB_ram_0016c578;
    }
    iVar2 = *DAT_ram_0021e014;
  }
  uVar1 = param_2 << 9;
  *(uint *)(iVar2 + 0x4c) =
       *(uint *)(iVar2 + 0x4c) & 0xfffff9ff | uVar1 & 0xfffff9ff | uVar1 & 0xfffff9ff |
       uVar1 & 0xfffff9ff | uVar1;
  if (param_2 < 3) {
    uVar1 = param_2 << 9;
    *(uint *)(*DAT_ram_0021e018 + 0x4c) =
         *(uint *)(*DAT_ram_0021e018 + 0x4c) & 0xfffff9ff | uVar1 & 0xfffff9ff | uVar1 & 0xfffff9ff
         | uVar1 & 0xfffff9ff | uVar1;
  }
  else {
    FUN_ram_000ee260(s_bw____d_not_supported__Has_to_be_ram_001c90f8);
  }
LAB_ram_0016c578:
  DAT_ram_0021e028 = 0;
  DAT_ram_0021e024 = 0;
  bVar6 = DAT_ram_0021e020 != 0;
  DAT_ram_0021e020 = DAT_ram_0021e020 + param_1;
  DAT_ram_0021e010 = iVar4;
  if (bVar6) {
    return 1;
  }
  uVar5 = *(&DAT_ram_0021e014)[iVar4];
  iVar3 = *(int *)(DAT_ram_0021e01c + 0x3b20);
  sync();
  iVar2 = *(int *)(iVar3 + 0xc);
  if ((*(uint *)(iVar2 + (uint)DAT_ram_0018c302 * 4 + 0x400) & 0xf) == 0) {
    DAT_ram_8003787c = DAT_ram_8003787c + 1;
    iVar2 = *(int *)(iVar3 + 0xc);
  }
  *(undefined4 *)((uint)DAT_ram_0018c302 * 0x20 + iVar2) = 1;
  *(undefined4 *)((uint)DAT_ram_0018c302 * 0x20 + *(int *)(iVar3 + 0xc)) = uVar5;
  return 1;
}


