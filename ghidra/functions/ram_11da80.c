/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011da80 */

void FUN_ram_0011da80(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 local_24;
  undefined2 local_20;
  
  piVar8 = *(int **)(param_1 + 0xc);
  iVar7 = *piVar8;
  local_24 = DAT_ram_001a6464;
  local_20 = DAT_ram_001a6468;
  iVar6 = *(int *)(iVar7 + 0x1c);
  iVar2 = FUN_ram_0011c26c();
  if (iVar2 == 0) {
    return;
  }
  cVar5 = *(char *)(param_1 + 0x2c);
  if (cVar5 == '\x01') {
    if (((uint)param_2 & 1) == 0 && (iVar2 + 0x96U & 1) == 0) {
      if (*(short *)(iVar2 + 0x9a) != param_2[2]) {
        return;
      }
      if (*(short *)(iVar2 + 0x98) != param_2[1]) {
        return;
      }
      if (*(short *)(iVar2 + 0x96) != *param_2) {
        return;
      }
    }
    else {
      uVar3 = FUN_ram_000eeb74(param_2,iVar2 + 0x96U,6);
      iVar4 = 1 - uVar3;
      if (1 < uVar3) {
        iVar4 = 0;
      }
      if (iVar4 == 0) {
        return;
      }
    }
    if (iVar2 == *(int *)(param_1 + 0x3c)) {
      return;
    }
    cVar5 = *(char *)(param_1 + 0x2c);
    if (((*(ushort *)(iVar2 + 0xc) & 0x4000) != 0) || (*(char *)(iVar2 + 100) == '\0')) {
      if (cVar5 != '\x01') goto LAB_ram_0011dc50;
      iVar4 = *(int *)(param_1 + 0x38);
      goto joined_r0x0011db9c;
    }
  }
  else if (((*(ushort *)(iVar2 + 0xc) & 0x4000) != 0) || (*(char *)(iVar2 + 100) == '\0'))
  goto LAB_ram_0011dc50;
  *(short *)((int)piVar8 + 0x39e6) = *(short *)((int)piVar8 + 0x39e6) + -1;
  if (cVar5 != '\x01') {
LAB_ram_0011dc50:
    FUN_ram_00129254(iVar2,0);
    FUN_ram_0011c310(iVar2);
    FUN_ram_0014d848(iVar2);
    FUN_ram_0011da28(iVar2);
    FUN_ram_0010b568(iVar6,iVar2);
    iVar6 = piVar8[0xe79];
    *(undefined4 *)(iVar2 + 0x388) = 0;
    *(short *)(piVar8 + 0xe79) = (short)iVar6 + -1;
    return;
  }
  iVar4 = *(int *)(param_1 + 0x38);
joined_r0x0011db9c:
  if (iVar2 == iVar4) {
    FUN_ram_00136684(iVar7,&local_24);
    FUN_ram_00128c30(iVar7,1);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(iVar6 + 0x3c50) = *(undefined4 *)(param_1 + 0x3c);
  }
  FUN_ram_0011c310(iVar2);
  FUN_ram_0014d848(iVar2);
  FUN_ram_0011da28(iVar2);
  FUN_ram_0010b568(iVar6,iVar2);
  sVar1 = *(short *)(iVar6 + 0x5ab0);
  *(undefined4 *)(iVar2 + 0x388) = 0;
  if (sVar1 == 0) {
    return;
  }
  FUN_ram_0018af8c(sVar1,0);
  *(undefined2 *)(iVar6 + 0x5ab0) = 0;
  FUN_ram_000ee260(s_qtn_disassoc_hdlr__bb_paid_filte_ram_001c2cf0);
  return;
}


