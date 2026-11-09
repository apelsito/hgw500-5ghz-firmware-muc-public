/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012cae4 */

void FUN_ram_0012cae4(int param_1,int *param_2)

{
  int *piVar1;
  undefined2 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = *param_2;
  piVar4 = (int *)((int)param_2 + 0x96);
  piVar1 = param_2 + 0x27;
  piVar3 = (int *)(iVar5 + 0x18);
  if (((param_1 + 4U & 1) == 0) && (((uint)piVar4 & 1) == 0)) {
    *(undefined2 *)(param_1 + 4) = *(undefined2 *)((int)param_2 + 0x96);
    *(short *)(param_1 + 6) = (short)param_2[0x26];
    *(undefined2 *)(param_1 + 8) = *(undefined2 *)((int)param_2 + 0x9a);
  }
  else {
    FUN_ram_0039fe00(param_1 + 4U,piVar4,6);
  }
  switch(*(undefined1 *)(iVar5 + 0x2c)) {
  case 0:
  case 3:
    if (((param_1 + 10U & 1) == 0) && (((uint)piVar3 & 1) == 0)) {
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)piVar3;
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(iVar5 + 0x1a);
      *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(iVar5 + 0x1c);
    }
    else {
      FUN_ram_0039fe00(param_1 + 10U,piVar3,6);
    }
    if (((param_1 + 0x10U & 1) == 0) && (((uint)piVar1 & 1) == 0)) {
      *(short *)(param_1 + 0x10) = (short)*piVar1;
      *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x9e);
      uVar2 = (undefined2)param_2[0x28];
LAB_ram_0012cd6c:
      *(undefined2 *)(param_1 + 0x14) = uVar2;
      return;
    }
    break;
  case 1:
    if (*(char *)((int)param_2 + 0x40e) == '\0') {
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 1;
      if (((param_1 + 10U & 1) == 0) && (((uint)piVar3 & 1) == 0)) {
        *(undefined2 *)(param_1 + 10) = *(undefined2 *)piVar3;
        *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(iVar5 + 0x1a);
        *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(iVar5 + 0x1c);
      }
      else {
        FUN_ram_0039fe00(param_1 + 10U,piVar3,6);
      }
      piVar1 = piVar4;
      if ((param_1 + 0x10U & 1) == 0 && ((uint)piVar4 & 1) == 0) {
        *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)piVar4;
        *(short *)(param_1 + 0x12) = (short)param_2[0x26];
        *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)((int)param_2 + 0x9a);
        return;
      }
    }
    else {
      if (((param_1 + 10U & 1) == 0) && (((uint)piVar3 & 1) == 0)) {
        *(undefined2 *)(param_1 + 10) = *(undefined2 *)piVar3;
        *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(iVar5 + 0x1a);
        *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(iVar5 + 0x1c);
      }
      else {
        FUN_ram_0039fe00(param_1 + 10U,piVar3,6);
      }
      if ((param_1 + 0x10U & 1) == 0 && ((uint)piVar1 & 1) == 0) {
        *(short *)(param_1 + 0x10) = (short)*piVar1;
        *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)((int)param_2 + 0x9e);
        *(short *)(param_1 + 0x14) = (short)param_2[0x28];
        return;
      }
    }
    break;
  case 2:
    if (((param_1 + 10U & 1) == 0) && (((uint)piVar3 & 1) == 0)) {
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)piVar3;
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(iVar5 + 0x1a);
      *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(iVar5 + 0x1c);
    }
    else {
      FUN_ram_0039fe00(param_1 + 10U,piVar3,6);
    }
    piVar1 = piVar4;
    if (((param_1 + 0x10U & 1) == 0) && (((uint)piVar4 & 1) == 0)) {
      *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)piVar4;
      *(short *)(param_1 + 0x12) = (short)param_2[0x26];
      uVar2 = *(undefined2 *)((int)param_2 + 0x9a);
      goto LAB_ram_0012cd6c;
    }
    break;
  default:
    goto switchD_ram_0012cb58_caseD_4;
  case 6:
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | 2;
    if (((param_1 + 10U & 1) == 0) && (((uint)piVar1 & 1) == 0)) {
      *(short *)(param_1 + 10) = (short)*piVar1;
      *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)((int)param_2 + 0x9e);
      *(short *)(param_1 + 0xe) = (short)param_2[0x28];
    }
    else {
      FUN_ram_0039fe00(param_1 + 10U,piVar1,6);
    }
    piVar1 = piVar3;
    if (((param_1 + 0x10U & 1) == 0) && (((uint)piVar3 & 1) == 0)) {
      *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)piVar3;
      *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(iVar5 + 0x1a);
      *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(iVar5 + 0x1c);
      return;
    }
  }
  FUN_ram_0039fe00(param_1 + 0x10,piVar1,6);
switchD_ram_0012cb58_caseD_4:
  return;
}


