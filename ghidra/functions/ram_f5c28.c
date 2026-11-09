/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f5c28 */

int FUN_ram_000f5c28(byte *param_1,byte *param_2,int *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  int *piVar7;
  byte bVar8;
  int iVar9;
  undefined1 *puVar10;
  byte local_40;
  byte local_3f [31];
  
  bVar4 = *param_2;
  param_2 = param_2 + 1;
  pbVar2 = param_1;
  if (bVar4 == 0) {
LAB_ram_000f5c6c:
    *pbVar2 = 0;
    return (int)pbVar2 - (int)param_1;
  }
  bVar8 = 0;
LAB_ram_000f5c5c:
  do {
    pbVar6 = param_2;
    piVar7 = param_3;
    if (bVar4 != 0x25) {
LAB_ram_000f5c60:
      *pbVar2 = bVar4;
      pbVar2 = pbVar2 + 1;
      goto switchD_ram_000f5cc4_caseD_65;
    }
    bVar4 = *param_2;
    if (bVar4 == 0x30) {
      pbVar6 = param_2 + 1;
      bVar4 = param_2[2];
      param_2 = param_2 + 2;
      bVar8 = *pbVar6 - 0x30 & 0xf;
    }
    pbVar6 = param_2 + 1;
    switch(bVar4) {
    case 99:
      piVar7 = param_3 + 1;
      bVar4 = (byte)*param_3;
      goto LAB_ram_000f5c60;
    case 100:
    case 0x75:
      goto LAB_ram_000f5d38;
    case 0x6c:
      pbVar6 = param_2 + 2;
LAB_ram_000f5d38:
      piVar7 = param_3 + 1;
      iVar3 = *param_3;
      pbVar1 = pbVar2;
      if (iVar3 < 0) {
        iVar3 = -iVar3;
        pbVar1 = pbVar2 + 1;
        *pbVar2 = 0x2d;
      }
      local_40 = (char)iVar3 + (char)(iVar3 / 10) * -10 + 0x30;
      pbVar5 = local_3f;
      iVar3 = iVar3 / 10;
      while (iVar3 != 0) {
        *pbVar5 = (char)iVar3 + (char)(iVar3 / 10) * -10 + 0x30;
        pbVar5 = pbVar5 + 1;
        iVar3 = iVar3 / 10;
      }
      do {
        pbVar5 = pbVar5 + -1;
        pbVar2 = pbVar1 + 1;
        *pbVar1 = *pbVar5;
        pbVar1 = pbVar2;
      } while (&local_40 < pbVar5);
      break;
    case 0x70:
      if (*pbVar6 != 0x4d) {
        bVar8 = 8;
        *pbVar2 = 0x30;
        pbVar2[1] = 0x78;
        pbVar2 = pbVar2 + 2;
        goto switchD_ram_000f5cc4_caseD_78;
      }
      piVar7 = param_3 + 1;
      pbVar6 = param_2 + 2;
      iVar9 = 5;
      iVar3 = 6;
      puVar10 = (undefined1 *)*param_3;
      do {
        pbVar1 = (byte *)FUN_ram_000f5bb8(pbVar2,*puVar10,2);
        pbVar2 = pbVar1;
        if (iVar9 != 0) {
          pbVar2 = pbVar1 + 1;
          *pbVar1 = 0x3a;
        }
        iVar3 = iVar3 + -1;
        iVar9 = iVar9 + -1;
        puVar10 = puVar10 + 1;
      } while (iVar3 != 0);
      break;
    case 0x73:
      piVar7 = param_3 + 1;
      pbVar1 = (byte *)*param_3;
      bVar4 = *pbVar1;
      while (bVar4 != 0) {
        pbVar1 = pbVar1 + 1;
        *pbVar2 = bVar4;
        pbVar2 = pbVar2 + 1;
        bVar4 = *pbVar1;
      }
      break;
    case 0x78:
      goto switchD_ram_000f5cc4_caseD_78;
    }
switchD_ram_000f5cc4_caseD_65:
    param_2 = pbVar6 + 1;
    bVar4 = *pbVar6;
    param_3 = piVar7;
  } while (bVar4 != 0);
  goto LAB_ram_000f5c6c;
switchD_ram_000f5cc4_caseD_78:
  pbVar2 = (byte *)FUN_ram_000f5bb8(pbVar2,*param_3,bVar8);
  param_2 = param_2 + 2;
  bVar4 = *pbVar6;
  param_3 = param_3 + 1;
  if (bVar4 == 0) goto LAB_ram_000f5c6c;
  goto LAB_ram_000f5c5c;
}


