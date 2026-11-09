/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00137600 */

void FUN_ram_00137600(int param_1,int param_2,uint param_3,int param_4,int param_5,
                     undefined4 param_6)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int *piVar5;
  
  if ((DAT_ram_0018c1d8 & 1) != 0) {
    if ((*(ushort *)(param_2 + 0xc) & 0x4000) == 0) {
      puVar3 = (ushort *)((uint)(param_5 != 0) * 0x9a + (uint)(param_4 != 0) * 0x134 + 0x1a94c4);
      if (param_3 < 0x4d) {
        uVar2 = (uint)puVar3[param_3];
      }
      else {
        uVar2 = (uint)*puVar3;
      }
    }
    else if (param_3 < 0x28) {
      uVar2 = param_3 + (uint)(byte)(&DAT_ram_001a86e4)[param_3] * -10;
      puVar3 = (ushort *)
               ((uint)(byte)(&DAT_ram_001a86e4)[param_3] * 0x14 +
                (uint)(param_5 != 0) * 0xa0 + param_4 * 0x140 + 0x1a9aec);
      if (uVar2 < 10) {
        uVar1 = puVar3[uVar2];
      }
      else {
        uVar1 = *puVar3;
      }
      uVar2 = (uint)uVar1;
      if (uVar2 == 0) {
        FUN_ram_000ee260(s_zero_inv_phy_rate__bw__u_sgi__u_n_ram_001c4850);
        FUN_ram_000ee260(&DAT_ram_001c4880);
      }
    }
    else {
      uVar2 = param_3 - 0x21;
      iVar4 = param_4 * 0xb0 + (uint)(param_5 != 0) * 0x58;
      if ((uVar2 < 0x21) || (0x4c < uVar2)) {
        uVar2 = (uint)*(ushort *)(iVar4 + 0x1aa0bc);
      }
      else {
        uVar2 = (uint)*(ushort *)(iVar4 + 0x1aa07a + uVar2 * 2);
      }
    }
    iVar4 = *(int *)(param_2 + 0x388);
    *(uint *)(param_2 + 0x4ac) = uVar2;
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0xc) = uVar2;
      *(undefined4 *)(iVar4 + 0x20) = param_6;
    }
    piVar5 = *(int **)(param_1 + 0x3a08);
    piVar5[*piVar5 * 0x39 + 0x30] = param_3 | piVar5[*piVar5 * 0x39 + 0x30] << 8;
  }
  return;
}


