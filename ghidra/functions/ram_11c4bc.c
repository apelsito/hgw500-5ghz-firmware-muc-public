/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011c4bc */

undefined4 FUN_ram_0011c4bc(int param_1,short *param_2)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  
  piVar9 = *(int **)(param_1 + 0xc);
  iVar8 = *(int *)(*piVar9 + 0x1c);
  iVar3 = FUN_ram_0011c26c(param_1);
  if (iVar3 != 0) {
    if ((iVar3 + 0x96U & 1) == 0 && ((uint)param_2 & 1) == 0) {
      if (((param_2[2] != *(short *)(iVar3 + 0x9a)) || (param_2[1] != *(short *)(iVar3 + 0x98))) ||
         (*param_2 != *(short *)(iVar3 + 0x96))) goto LAB_ram_0011c578;
    }
    else {
      uVar4 = FUN_ram_000eeb74(iVar3 + 0x96U,param_2,6);
      iVar5 = 1 - uVar4;
      if (1 < uVar4) {
        iVar5 = 0;
      }
      if (iVar5 == 0) goto LAB_ram_0011c578;
    }
    FUN_ram_0011c310(iVar3);
    FUN_ram_0014d848(iVar3);
    FUN_ram_0010b568(iVar8,iVar3);
    *(short *)(piVar9 + 0xe79) = (short)piVar9[0xe79] + -1;
  }
LAB_ram_0011c578:
  iVar3 = FUN_ram_00119514(piVar9 + 0xe20,param_1,param_2,(char)param_2[0x95]);
  if (iVar3 == 0) {
    param_2[0x3e] = 0;
    uVar6 = 1;
  }
  else {
    if (((iVar3 + 0x9cU & 1) == 0) && (((uint)(param_2 + 3) & 1) == 0)) {
      *(short *)(iVar3 + 0x9c) = param_2[3];
      *(short *)(iVar3 + 0x9e) = param_2[4];
      *(short *)(iVar3 + 0xa0) = param_2[5];
    }
    else {
      FUN_ram_0039fe00(iVar3 + 0x9cU,param_2 + 3,6);
    }
    uVar6 = *(undefined4 *)(param_2 + 0x84);
    *(short *)(iVar3 + 0x18) = param_2[0x3d];
    sVar1 = param_2[0x3f];
    *(undefined4 *)(iVar3 + 0x38c) = uVar6;
    uVar7 = *(undefined4 *)(param_2 + 0x82);
    *(short *)(iVar3 + 0xc) = sVar1;
    uVar6 = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(iVar3 + 0x60) = uVar7;
    *(char *)(iVar3 + 0x40e) = (char)*(undefined4 *)(param_2 + 0x86);
    uVar6 = FUN_ram_000e2000(uVar6);
    uVar7 = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)(iVar3 + 0x388) = uVar6;
    *(undefined4 *)(iVar3 + 0x428) = uVar7;
    uVar2 = *(ushort *)(iVar3 + 0xc);
    *(undefined4 *)(iVar3 + 0x42c) = *(undefined4 *)(param_2 + 0x9a);
    if ((uVar2 & 0x2000) != 0) {
      *(ushort *)(param_1 + 0x32) = (ushort)*(byte *)(iVar3 + 0x67c);
      uVar2 = *(ushort *)(iVar3 + 0xc);
    }
    if ((uVar2 & 0x4000) != 0) {
      FUN_ram_0011c39c(iVar3);
      FUN_ram_000fb910(*(undefined4 *)(iVar8 + 0x3b20),*(undefined1 *)(iVar3 + 0x67c),
                       *(undefined2 *)(iVar3 + 0x422));
    }
    *(short *)(piVar9 + 0xe79) = (short)piVar9[0xe79] + 1;
    FUN_ram_0011c3f4(iVar8,iVar3,param_1);
    param_2[0x3e] = (ushort)*(byte *)(iVar3 + 0x67c);
    uVar6 = 0;
  }
  return uVar6;
}


