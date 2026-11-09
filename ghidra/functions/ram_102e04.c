/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00102e04 */

void FUN_ram_00102e04(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + 0xc);
  iVar6 = *(int *)(iVar4 + 0x3014);
  uVar5 = *(undefined4 *)(iVar4 + 0x3018);
  if (param_4 == 0) {
    FUN_ram_000f5e64(iVar6,param_3);
    iVar6 = (iVar6 - extraout_r1) + param_3 + (uint)(param_2 * 8 * param_3) / 100;
    iVar2 = iVar6 + param_3;
    iVar3 = (uint)(param_3 * 0x4b) / 100 + iVar6;
  }
  else {
    uVar1 = (100 - param_5) * param_3;
    if (uVar1 / 100 < 0x801) {
      iVar2 = (uVar1 * 0x32) / 10000 + iVar6;
      iVar3 = (uVar1 * 0x19) / 10000 + iVar6;
    }
    else {
      iVar2 = iVar6 + 0x400;
      iVar3 = iVar6 + 0x100;
    }
  }
  if (DAT_ram_0018c080 != 0) {
    FUN_ram_000ee260(s__Starting_beacon__x__x__d__d__x_ram_001bf9dc,uVar5,iVar6,param_2,param_3,
                     iVar2 + 1);
    iVar4 = *(int *)(param_1 + 0xc);
  }
  iVar6 = param_2 * 0x10;
  *(int *)(iVar4 + iVar6 + 0x4e0) = iVar2 + 1;
  *(int *)(*(int *)(param_1 + 0xc) + iVar6 + 0x4e4) = param_3;
  *(int *)(iVar6 + 0x4e8 + *(int *)(param_1 + 0xc)) = iVar3;
  *(uint *)(*(int *)(param_1 + 0xc) + 0x3000) =
       *(uint *)(*(int *)(param_1 + 0xc) + 0x3000) & 0xfffffffc | 1;
  *(uint *)(*(int *)(param_1 + 0xc) + 0x2000) =
       *(uint *)(*(int *)(param_1 + 0xc) + 0x2000) | 0x8000000;
  iVar4 = param_2 * 4 + 0x420;
  *(uint *)(*(int *)(param_1 + 0xc) + iVar4) =
       *(uint *)(iVar4 + *(int *)(param_1 + 0xc)) & 0xffffff3f | 0x80000190;
  return;
}


