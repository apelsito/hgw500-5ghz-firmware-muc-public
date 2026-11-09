/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80023fd0 */

void FUN_ram_80023fd0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  
  iVar1 = param_2 * 4;
  *(int *)(&DAT_ram_8003731c + iVar1) = *(int *)(&DAT_ram_8003731c + iVar1) + 1;
  piVar9 = (int *)(&DAT_ram_8002fe34)[param_2 * 5];
  piVar8 = &DAT_ram_8002fe34 + param_2 * 5;
  if (piVar9 != (int *)0x0) {
    iVar10 = 1;
    do {
      if (param_3 == 0) {
        iVar10 = FUN_ram_80023e24(param_1,param_2,piVar9,1);
      }
      else {
        FUN_ram_80025588(piVar9[2],0x20);
      }
      if (iVar10 == 0) {
        return;
      }
      uVar2 = STATUS32;
      if ((uVar2 & 2) != 0) {
        STATUS32 = uVar2 & 0xfffffffd;
      }
      iVar6 = *piVar8;
      if (iVar6 != 0) {
        iVar7 = *(int *)(iVar6 + 0xc);
        iVar5 = (&DAT_ram_8002fe3c)[param_2 * 5];
        *piVar8 = iVar7;
        if (iVar7 == 0) {
          (&DAT_ram_8002fe38)[param_2 * 5] = piVar8;
        }
        *(undefined4 *)(iVar6 + 0xc) = 0;
        (&DAT_ram_8002fe3c)[param_2 * 5] = iVar5 + -1;
      }
      puVar3 = (uint *)piVar9[2];
      if (((*puVar3 & 1) == 0) || (-1 < (int)puVar3[5])) {
        *(undefined4 *)*piVar9 = 0;
        *(int *)(&DAT_ram_80037334 + iVar1) = *(int *)(&DAT_ram_80037334 + iVar1) + 1;
      }
      else {
        *(int *)(&DAT_ram_80037328 + iVar1) = *(int *)(&DAT_ram_80037328 + iVar1) + 1;
        if ((*puVar3 & 0x7fff0000) >> 0x10 < 0x2cbf) {
          (**(code **)(param_1 + 0x3f80))(param_1,piVar9[1]);
          piVar9[1] = 0;
          iVar6 = *piVar9;
          *(undefined4 *)*piVar9 = 0;
          *(undefined4 *)(iVar6 + 8) = 0;
          *(int *)(&DAT_ram_8003734c + iVar1) = *(int *)(&DAT_ram_8003734c + iVar1) + 1;
        }
        else {
          *(int *)(&DAT_ram_80037340 + iVar1) = *(int *)(&DAT_ram_80037340 + iVar1) + 1;
        }
      }
      piVar9[3] = 0;
      piVar4 = piVar9 + 3;
      *DAT_ram_8002fe24 = (int)piVar9;
      DAT_ram_8002fe28 = DAT_ram_8002fe28 + 1;
      STATUS32 = uVar2;
      piVar9 = (int *)*piVar8;
      DAT_ram_8002fe24 = piVar4;
    } while (piVar9 != (int *)0x0);
  }
  return;
}


