/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010a144 */

void FUN_ram_0010a144(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar3 = 1;
  iVar4 = *(int *)(**(int **)(param_1 + 4) + 0x1c);
  iVar2 = 0x3e;
  do {
    if (((uint)*(byte *)(param_1 + 0x3f0 + ((int)uVar3 >> 3)) & 1 << (uVar3 & 7)) != 0) {
      uVar5 = (int)(uint)*(byte *)(param_1 + 0x3f8 + ((int)uVar3 >> 2)) >> (uVar3 & 3) * 2 & 3;
      iVar6 = uVar3 * 0x50 + iVar4 + 0x47dc + uVar5 * 4;
      if (*(int *)(iVar6 + -0x124) == 0) {
        iVar1 = FUN_ram_0013fba0(iVar4,param_1,uVar3,uVar5);
        *(int *)(iVar6 + -0x124) = iVar1;
        if (iVar1 == 0) {
          FUN_ram_000ee260(s_qtn_node_setup_mu_rates__allocat_ram_001c0564,uVar5,uVar3);
          FUN_ram_80030314();
        }
      }
    }
    iVar2 = iVar2 + -1;
    uVar3 = uVar3 + 1 & 0xff;
  } while (iVar2 != 0);
  return;
}


