/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80024904 */

/* WARNING: Removing unreachable block (ram,0x80024980) */
/* WARNING: Removing unreachable block (ram,0x80024984) */

undefined4 FUN_ram_80024904(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  
  iVar3 = DAT_ram_80038ee0;
  iVar1 = param_2 * 4;
  *(int *)(&DAT_ram_800372f8 + iVar1) = *(int *)(&DAT_ram_800372f8 + iVar1) + 1;
  piVar11 = (int *)(&DAT_ram_8002fe34)[param_2 * 5];
  piVar9 = &DAT_ram_8002fe34 + param_2 * 5;
  if (piVar11 == (int *)0x0) {
    uVar10 = 0;
    uVar5 = 0;
  }
  else {
    uVar10 = 0;
    do {
      iVar4 = FUN_ram_80023e24(param_1,param_2,piVar11,0);
      if (iVar4 == 0) {
        if (*(uint *)(&DAT_ram_80037394 + iVar1) < uVar10) goto LAB_ram_80024a20;
        goto LAB_ram_80024a28;
      }
      uVar2 = STATUS32;
      if ((uVar2 & 2) != 0) {
        STATUS32 = uVar2 & 0xfffffffd;
      }
      iVar4 = *piVar9;
      if (iVar4 != 0) {
        iVar8 = *(int *)(iVar4 + 0xc);
        iVar6 = (&DAT_ram_8002fe3c)[param_2 * 5];
        *piVar9 = iVar8;
        if (iVar8 == 0) {
          (&DAT_ram_8002fe38)[param_2 * 5] = piVar9;
        }
        *(undefined4 *)(iVar4 + 0xc) = 0;
        (&DAT_ram_8002fe3c)[param_2 * 5] = iVar6 + -1;
      }
      puVar7 = (uint *)piVar11[2];
      if (((*puVar7 & 1) == 0) || (-1 < (int)puVar7[5])) {
        *(undefined4 *)*piVar11 = 0;
        *(int *)(&DAT_ram_80037334 + iVar1) = *(int *)(&DAT_ram_80037334 + iVar1) + 1;
      }
      else {
        *(int *)(&DAT_ram_80037328 + iVar1) = *(int *)(&DAT_ram_80037328 + iVar1) + 1;
        if ((*puVar7 & 0x7fff0000) >> 0x10 < 0x2cbf) {
          (**(code **)(param_1 + 0x3f80))(param_1,piVar11[1]);
          piVar11[1] = 0;
          iVar4 = *piVar11;
          *(undefined4 *)*piVar11 = 0;
          *(undefined4 *)(iVar4 + 8) = 0;
          *(int *)(&DAT_ram_8003734c + iVar1) = *(int *)(&DAT_ram_8003734c + iVar1) + 1;
        }
        else {
          *(int *)(&DAT_ram_80037340 + iVar1) = *(int *)(&DAT_ram_80037340 + iVar1) + 1;
        }
      }
      iVar4 = FUN_ram_800245a4(param_1,param_2,piVar11,0);
      if (iVar4 != 0) {
        *(undefined4 *)(*piVar11 + 8) = 0;
        piVar11[3] = (int)DAT_ram_8002fe20;
        if (DAT_ram_8002fe20 == (int *)0x0) {
          DAT_ram_8002fe24 = piVar11 + 3;
        }
        DAT_ram_8002fe28 = DAT_ram_8002fe28 + 1;
        DAT_ram_8002fe20 = piVar11;
      }
      uVar10 = uVar10 + 1;
      STATUS32 = uVar2;
      if ((iVar3 + 5) - DAT_ram_80038ee0 < 0) {
        *(int *)(&DAT_ram_800373b8 + iVar1) = *(int *)(&DAT_ram_800373b8 + iVar1) + 1;
        uVar5 = 1;
        if (uVar10 <= *(uint *)(&DAT_ram_80037394 + iVar1)) goto LAB_ram_80024b40;
        goto LAB_ram_80024994;
      }
      piVar11 = (int *)*piVar9;
    } while (piVar11 != (int *)0x0);
    if (*(uint *)(&DAT_ram_80037394 + iVar1) < uVar10) {
LAB_ram_80024a20:
      uVar5 = 0;
LAB_ram_80024994:
      *(uint *)(&DAT_ram_80037394 + iVar1) = uVar10;
    }
    else {
LAB_ram_80024a28:
      uVar5 = 0;
    }
  }
LAB_ram_80024b40:
  *(int *)(&DAT_ram_800373ac + iVar1) = *(int *)(&DAT_ram_800373ac + iVar1) + 1;
  *(uint *)(&DAT_ram_800373a0 + iVar1) = *(int *)(&DAT_ram_800373a0 + iVar1) + uVar10;
  return uVar5;
}


