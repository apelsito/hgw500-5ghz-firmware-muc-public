/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00109920 */

void FUN_ram_00109920(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  iVar4 = param_2[0x16];
  param_2[0x16] = iVar4 + -1;
  STATUS32 = uVar1;
  if (iVar4 + -1 != 0) {
    FUN_ram_000ee260(s_qtn_framedesc_release__failed_to_ram_001c04c0);
    FUN_ram_001097c4(param_2,0,*(undefined1 *)((int)param_2 + 0x49),0);
    return;
  }
  piVar7 = (int *)*param_2;
  iVar6 = param_2[1];
  iVar4 = param_2[2];
  FUN_ram_000eea80(param_2,0,0xf0);
  param_2[2] = iVar4;
  *param_2 = (int)(param_2 + 0x20);
  if ((piVar7 != param_2 + 0x20 && piVar7 != (int *)0x0) && iVar6 != 0) {
    FUN_ram_000f97d8(*(undefined4 *)(param_1 + 0x3b20),iVar6);
  }
  FUN_ram_00129fc8(param_1,iVar4);
  FUN_ram_000e7d50(param_1 + 0x3d88);
  param_2[0x3b] = 0;
  iVar4 = *(int *)(param_1 + 0x3d90);
  **(int **)(param_1 + 0x3d80) = (int)param_2;
  *(int **)(param_1 + 0x3d80) = param_2 + 0x3b;
  uVar1 = iVar4 + 1;
  *(uint *)(param_1 + 0x3d90) = uVar1;
  DAT_ram_80037898 = DAT_ram_80037898 & 0xffff0000 | uVar1 & 0xffff;
  if ((((DAT_ram_8002c8b8 & 8) != 0) && (*(uint *)(param_1 + 0x3d90) < DAT_ram_8002c8c8)) &&
     (iVar4 = *(int *)(param_1 + 0x3da4), iVar4 != 0)) {
    uVar1 = 0;
    uVar5 = 0;
    do {
      uVar3 = 0;
      uVar2 = 0;
      do {
        for (iVar6 = *(int *)(iVar4 + uVar3 * 8 + 0x48c); iVar6 != 0; iVar6 = *(int *)(iVar6 + 0xec)
            ) {
          uVar2 = uVar2 + 1;
        }
        uVar3 = uVar3 + 1 & 0xffff;
      } while (uVar3 < 4);
      if (uVar1 < uVar2) {
        uVar5 = *(undefined1 *)(iVar4 + 0x67c);
        uVar1 = uVar2;
      }
      iVar4 = *(int *)(iVar4 + 0xd60);
    } while (iVar4 != 0);
    if (DAT_ram_8002c8cc < uVar1) {
      FUN_ram_000efe3c(0xd,uVar5,**(undefined2 **)(param_1 + 0x3a04),0);
    }
  }
  FUN_ram_000e7da8(param_1 + 0x3d88);
  DAT_ram_8003784c = DAT_ram_8003784c + 1;
  return;
}


