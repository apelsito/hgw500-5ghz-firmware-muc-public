/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00137534 */

int FUN_ram_00137534(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  uint local_4c [8];
  int local_2c;
  
  uVar5 = (*(uint *)(param_2 + 4) & 0x70000) >> 0x10;
  uVar1 = FUN_ram_0016d584(*(undefined1 *)(param_2 + 2));
  uVar2 = FUN_ram_00137370(param_2,uVar1,param_1);
  iVar7 = 4;
  iVar3 = 0;
  LP_START = 0x137580;
  LP_END = 0x1375a4;
  pbVar6 = (byte *)(param_2 + 0x10);
  do {
    uVar4 = (uint)*pbVar6;
    if (uVar5 == 1) {
      uVar4 = uVar4 * 2;
    }
    else if (uVar5 == 2) {
      uVar4 = uVar4 << 2;
    }
    local_4c[iVar3] = uVar4;
    iVar3 = iVar3 + 1;
    iVar7 = iVar7 + -1;
    pbVar6 = pbVar6 + 1;
  } while (iVar7 != 0);
  uVar5 = (int)(uVar2 & 0x3f0000) >> 0x10;
  FUN_ram_00137440(local_4c,uVar2 & 0xff,(int)(uVar2 & 0xff00) >> 8,
                   ((int)(uVar5 & 0x38) >> 3) - (uVar5 & 7));
  return (local_2c + -5) / 10;
}


