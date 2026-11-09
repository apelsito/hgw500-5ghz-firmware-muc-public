/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011ba78 */

void FUN_ram_0011ba78(int param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar7 = 0;
  iVar2 = 2;
  uVar5 = 0;
  uVar9 = 0;
  uVar8 = 0;
  uVar6 = 0;
  uVar3 = 0;
  do {
    uVar4 = 0;
    do {
      iVar1 = uVar4 * 3 + uVar3 * 0xc;
      uVar7 = uVar7 | (*(byte *)(param_1 + iVar1) & 0xf) << (uVar5 & 0x1f);
      uVar6 = uVar6 | (*(byte *)(param_1 + iVar1 + 1) & 0xf) << (uVar5 & 0x1f);
      uVar8 = uVar8 | (*(byte *)(iVar1 + param_1 + 2) & 0xf) << (uVar5 & 0x1f);
      uVar9 = uVar9 | (*(byte *)(param_1 + 0x18 + uVar4 + uVar3 * 4) & 0xf) << (uVar5 & 0x1f);
      uVar4 = uVar4 + 1 & 0xff;
      uVar5 = uVar5 + 4;
    } while (uVar4 < 4);
    iVar2 = iVar2 + -1;
    uVar3 = uVar3 + 1 & 0xff;
  } while (iVar2 != 0);
  if (0x20 < uVar5) {
    FUN_ram_000ee260(s_Warning__M2A_tx_scale_shift_coun_ram_001c2ae4);
  }
  *param_2 = uVar7;
  *param_3 = uVar6;
  *param_4 = uVar8;
  *param_5 = uVar9;
  return;
}


