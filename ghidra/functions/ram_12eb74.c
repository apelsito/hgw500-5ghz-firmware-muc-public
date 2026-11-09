/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012eb74 */

void FUN_ram_0012eb74(int param_1,int *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_28;
  
  iVar5 = *param_2;
  local_44 = DAT_ram_001a665c;
  local_40 = DAT_ram_001a6660;
  local_3c = DAT_ram_001a6664;
  local_38 = DAT_ram_001a6668;
  local_34 = DAT_ram_001a666c;
  local_30 = DAT_ram_001a6670;
  local_2c = DAT_ram_001a6674;
  local_28 = DAT_ram_001a6678;
  iVar3 = *(int *)(param_1 + 300);
  if (iVar3 == 0) {
    iVar3 = FUN_ram_000ee73c(0x1e,0);
    *(int *)(param_1 + 300) = iVar3;
    if (iVar3 == 0) {
      return;
    }
  }
  piVar6 = (int *)((int)param_2 + 0x96);
  FUN_ram_0039fe00(iVar3,&local_44,0x1e);
  piVar1 = param_2 + 0x27;
  piVar4 = (int *)(iVar5 + 0x18);
  switch(*(undefined1 *)(iVar5 + 0x2c)) {
  case 0:
  case 3:
    if (((iVar3 + 10U & 1) == 0) && (((uint)piVar4 & 1) == 0)) {
      *(undefined2 *)(iVar3 + 10) = *(undefined2 *)(iVar5 + 0x18);
      *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(iVar5 + 0x1a);
      *(undefined2 *)(iVar3 + 0xe) = *(undefined2 *)(iVar5 + 0x1c);
    }
    else {
      FUN_ram_0039fe00(iVar3 + 10U,piVar4,6);
    }
    if (((iVar3 + 0x10U & 1) == 0) && (((uint)piVar1 & 1) == 0)) {
      *(short *)(iVar3 + 0x10) = (short)*piVar1;
      *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)((int)param_2 + 0x9e);
      *(short *)(iVar3 + 0x14) = (short)param_2[0x28];
      return;
    }
    break;
  case 1:
    if (*(char *)((int)param_2 + 0x40e) == '\0') {
      *(byte *)(*(int *)(param_1 + 300) + 1) = *(byte *)(*(int *)(param_1 + 300) + 1) | 1;
      if (((iVar3 + 10U & 1) == 0) && (((uint)piVar4 & 1) == 0)) {
        *(undefined2 *)(iVar3 + 10) = *(undefined2 *)(iVar5 + 0x18);
        *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(iVar5 + 0x1a);
        *(undefined2 *)(iVar3 + 0xe) = *(undefined2 *)(iVar5 + 0x1c);
      }
      else {
        FUN_ram_0039fe00(iVar3 + 10U,piVar4,6);
      }
      piVar1 = piVar6;
      if (((iVar3 + 0x10U & 1) == 0) && (((uint)piVar6 & 1) == 0)) {
        *(undefined2 *)(iVar3 + 0x10) = *(undefined2 *)piVar6;
        *(short *)(iVar3 + 0x12) = (short)param_2[0x26];
        uVar2 = *(undefined2 *)((int)param_2 + 0x9a);
        goto LAB_ram_0012ee60;
      }
    }
    else {
      if (((iVar3 + 10U & 1) == 0) && (((uint)piVar4 & 1) == 0)) {
        *(undefined2 *)(iVar3 + 10) = *(undefined2 *)(iVar5 + 0x18);
        *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(iVar5 + 0x1a);
        *(undefined2 *)(iVar3 + 0xe) = *(undefined2 *)(iVar5 + 0x1c);
      }
      else {
        FUN_ram_0039fe00(iVar3 + 10U,piVar4,6);
      }
      if ((iVar3 + 0x10U & 1) == 0 && ((uint)piVar1 & 1) == 0) {
        *(short *)(iVar3 + 0x10) = (short)*piVar1;
        *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)((int)param_2 + 0x9e);
        *(short *)(iVar3 + 0x14) = (short)param_2[0x28];
        return;
      }
    }
    break;
  case 2:
    if (((iVar3 + 10U & 1) == 0) && (((uint)piVar4 & 1) == 0)) {
      *(undefined2 *)(iVar3 + 10) = *(undefined2 *)(iVar5 + 0x18);
      *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)(iVar5 + 0x1a);
      *(undefined2 *)(iVar3 + 0xe) = *(undefined2 *)(iVar5 + 0x1c);
    }
    else {
      FUN_ram_0039fe00(iVar3 + 10U,piVar4,6);
    }
    piVar1 = piVar4;
    if (((iVar3 + 0x10U & 1) == 0) && (((uint)piVar4 & 1) == 0)) {
      *(undefined2 *)(iVar3 + 0x10) = *(undefined2 *)piVar4;
      *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar5 + 0x1a);
      uVar2 = *(undefined2 *)(iVar5 + 0x1c);
LAB_ram_0012ee60:
      *(undefined2 *)(iVar3 + 0x14) = uVar2;
      return;
    }
    break;
  default:
    goto switchD_ram_0012ec38_caseD_4;
  case 6:
    *(byte *)(*(int *)(param_1 + 300) + 1) = *(byte *)(*(int *)(param_1 + 300) + 1) | 2;
    if (((iVar3 + 10U & 1) == 0) && (((uint)piVar1 & 1) == 0)) {
      *(short *)(iVar3 + 10) = (short)param_2[0x27];
      *(undefined2 *)(iVar3 + 0xc) = *(undefined2 *)((int)param_2 + 0x9e);
      *(short *)(iVar3 + 0xe) = (short)param_2[0x28];
    }
    else {
      FUN_ram_0039fe00(iVar3 + 10U,piVar1,6);
    }
    piVar1 = piVar4;
    if ((iVar3 + 0x10U & 1) == 0 && ((uint)piVar4 & 1) == 0) {
      *(undefined2 *)(iVar3 + 0x10) = *(undefined2 *)piVar4;
      *(undefined2 *)(iVar3 + 0x12) = *(undefined2 *)(iVar5 + 0x1a);
      *(undefined2 *)(iVar3 + 0x14) = *(undefined2 *)(iVar5 + 0x1c);
      return;
    }
  }
  FUN_ram_0039fe00(iVar3 + 0x10,piVar1,6);
switchD_ram_0012ec38_caseD_4:
  return;
}


