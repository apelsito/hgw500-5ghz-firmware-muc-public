/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014da74 */

void FUN_ram_0014da74(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  bVar2 = *(byte *)(param_2 + 0x52f);
  uVar3 = *(uint *)(param_2 + 0x5a4);
  if (DAT_ram_8002c8bd == '\x03') {
    FUN_ram_000ee260(s_Stats_index__u_stats__u_qn__p_ram_001c6a74);
    bVar2 = *(byte *)(param_2 + 0x52f);
    uVar3 = *(uint *)(param_2 + 0x5a4);
  }
  bVar1 = *(byte *)(param_2 + 0x52e);
  bVar2 = *(byte *)(*(int *)(param_2 + 0x538) + (uint)bVar2);
  *(uint *)(param_2 + 0x614 + (uint)bVar2 * 4) = uVar3;
  if (((uint)bVar2 != (uint)bVar1) && (uVar3 < 0x28)) {
    iVar8 = 5;
    iVar5 = 0;
    LP_START = 0x14daf8;
    LP_END = 0x14db08;
    do {
      iVar6 = param_2 + 0x7fc + iVar5 * 4;
      if (uVar3 < *(uint *)(iVar6 + -0x254)) {
        iVar4 = 5;
        iVar9 = 5 - iVar5;
        iVar8 = param_2 + 0x810;
        LP_START = 0x14db1c;
        LP_END = 0x14db3c;
        do {
          uVar7 = *(undefined4 *)(iVar8 + -600);
          *(undefined1 *)(param_2 + 0x5f4 + iVar4 + -0x34) =
               *(undefined1 *)(param_2 + 0x5f4 + iVar4 + -0x35);
          iVar4 = iVar4 + -1;
          *(undefined4 *)(iVar8 + -0x254) = uVar7;
          iVar8 = iVar8 + -4;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        *(byte *)(param_2 + 0x5c0 + iVar5) = bVar2;
        *(uint *)(iVar6 + -0x254) = uVar3;
        return;
      }
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}


