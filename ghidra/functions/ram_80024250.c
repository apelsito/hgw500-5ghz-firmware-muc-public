/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80024250 */

undefined4 FUN_ram_80024250(int param_1,int param_2,uint *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  
  *(undefined4 *)param_3[2] = 0;
  *(undefined4 *)(param_3[2] + 0x14) = 0;
  param_3[3] = 0;
  puVar5 = (uint *)*param_3;
  uVar2 = param_3[2];
  *puVar5 = param_3[1];
  puVar5[1] = uVar2;
  puVar5[2] = 0;
  iVar4 = param_2 * 4;
  *(int *)(&DAT_ram_80037304 + iVar4) = *(int *)(&DAT_ram_80037304 + iVar4) + 1;
  piVar3 = &DAT_ram_8002fe34 + param_2 * 5;
  if (*(int *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + param_2 * 4 + 0x2090) != 0) {
    if (*piVar3 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)((&DAT_ram_8002fe38)[param_2 * 5] + -0xc);
    }
    param_3[3] = 0;
    *(uint **)(&DAT_ram_8002fe38)[param_2 * 5] = param_3;
    (&DAT_ram_8002fe38)[param_2 * 5] = param_3 + 3;
    if (piVar3 == (int *)0x0) goto LAB_ram_80024520;
    uVar2 = *param_3;
    if ((uVar2 < 0x80000000) || (0x8007ffff < uVar2)) {
      if (uVar2 < 0x8000000) {
        uVar1 = uVar2 + 0x40000000;
        goto LAB_ram_80024510;
      }
      uVar1 = uVar2;
      if (0xbfffffff < uVar2) goto LAB_ram_80024510;
LAB_ram_8002455c:
      if ((uVar2 < 0x60000000) || (0x6007ffff < uVar2)) {
        if ((uVar2 < 0x40000000) || (0x47ffffff < uVar2)) {
          if (uVar2 < 0xc0000000) {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = uVar2 + 0xc0000000;
        }
      }
      else {
        uVar2 = uVar2 + 0x20000000;
      }
    }
    else {
      uVar1 = uVar2 + 0xe0000000;
LAB_ram_80024510:
      if (uVar1 == 0) goto LAB_ram_8002455c;
    }
    *(uint *)(*piVar3 + 8) = uVar2;
LAB_ram_80024520:
    (&DAT_ram_8002fe3c)[param_2 * 5] = (&DAT_ram_8002fe3c)[param_2 * 5] + 1;
    return 0;
  }
  *(int *)(&DAT_ram_800373c4 + iVar4) = *(int *)(&DAT_ram_800373c4 + iVar4) + 1;
  if ((&DAT_ram_8002fe3c)[param_2 * 5] == 0) {
    iVar4 = *piVar3;
joined_r0x80024348:
    if (iVar4 == 0) goto LAB_ram_80024358;
LAB_ram_8002434c:
    piVar3 = (int *)((&DAT_ram_8002fe38)[param_2 * 5] + -0xc);
  }
  else {
    if (param_4 != 0) {
      iVar4 = *piVar3;
      goto joined_r0x80024348;
    }
    FUN_ram_80023fd0(param_1,param_2,0,1);
    if (*piVar3 != 0) goto LAB_ram_8002434c;
LAB_ram_80024358:
    piVar3 = (int *)0x0;
  }
  param_3[3] = 0;
  *(uint **)(&DAT_ram_8002fe38)[param_2 * 5] = param_3;
  (&DAT_ram_8002fe38)[param_2 * 5] = param_3 + 3;
  if (piVar3 == (int *)0x0) {
    (&DAT_ram_8002fe3c)[param_2 * 5] = (&DAT_ram_8002fe3c)[param_2 * 5] + 1;
    goto joined_r0x80024474;
  }
  uVar2 = *param_3;
  if ((uVar2 < 0x80000000) || (0x8007ffff < uVar2)) {
    if (uVar2 < 0x8000000) {
      uVar1 = uVar2 + 0x40000000;
      goto LAB_ram_800243c4;
    }
    uVar1 = uVar2;
    if (0xbfffffff < uVar2) goto LAB_ram_800243c4;
LAB_ram_80024424:
    if ((uVar2 < 0x60000000) || (0x6007ffff < uVar2)) {
      if ((uVar2 < 0x40000000) || (0x47ffffff < uVar2)) {
        if (uVar2 < 0xc0000000) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = uVar2 + 0xc0000000;
      }
    }
    else {
      uVar2 = uVar2 + 0x20000000;
    }
  }
  else {
    uVar1 = uVar2 + 0xe0000000;
LAB_ram_800243c4:
    if (uVar1 == 0) goto LAB_ram_80024424;
  }
  *(uint *)(*piVar3 + 8) = uVar2;
  (&DAT_ram_8002fe3c)[param_2 * 5] = (&DAT_ram_8002fe3c)[param_2 * 5] + 1;
joined_r0x80024474:
  if (param_4 == 0) {
    FUN_ram_0015cae4(*(undefined4 *)(param_1 + 0x3b20),param_2,param_3);
    return 0;
  }
  return 0;
}


