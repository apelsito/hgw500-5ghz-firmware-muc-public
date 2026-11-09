/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001218ec */

void FUN_ram_001218ec(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 uStack_dc;
  byte local_db;
  undefined4 local_28;
  uint local_24;
  
  iVar6 = *(int *)(param_1 + 0x1c);
  iVar5 = *(int *)(**(int **)(iVar6 + 0xc) + 0x1c);
  iVar8 = *(int *)(param_2 + 0x10);
  FUN_ram_000f2ccc(s_Received_DELKEY_ram_001c3644);
  FUN_ram_0039fe00(&uStack_dc,iVar8,0xbc);
  uVar7 = iVar8 + 0xbc;
  if ((*(char *)(iVar6 + 0x2c) == '\x01') && ((local_db & 4) != 0)) {
    local_24 = 0x3f;
    goto LAB_ram_00121a6c;
  }
  iVar3 = FUN_ram_0011c26c(iVar6,uVar7);
  if (iVar3 == 0) {
    return;
  }
  if (*(char *)(iVar3 + 0x67c) == -1) {
    return;
  }
  if ((uVar7 & 1) == 0 && (iVar3 + 0x96U & 1) == 0) {
    if (((*(short *)(iVar3 + 0x9a) != *(short *)(iVar8 + 0xc0)) ||
        (*(short *)(iVar3 + 0x98) != *(short *)(iVar8 + 0xbe))) ||
       (*(short *)(iVar3 + 0x96) != *(short *)(iVar8 + 0xbc))) {
LAB_ram_001219e0:
      if ((local_db & 4) == 0) {
        return;
      }
    }
  }
  else {
    uVar4 = FUN_ram_000eeb74(uVar7,iVar3 + 0x96U,6);
    iVar8 = 1 - uVar4;
    if (1 < uVar4) {
      iVar8 = 0;
    }
    if (iVar8 == 0) goto LAB_ram_001219e0;
  }
  if (*(char *)(iVar3 + 0x67e) == '\x01') {
    DAT_ram_80037120 = DAT_ram_80037120 + -1;
  }
  if ((((local_db & 4) == 0) && (cVar1 = *(char *)(iVar5 + 0x4019), cVar1 != '\0')) &&
     (*(char *)(iVar5 + 0x4019) = cVar1 + -1, cVar1 == '\x01')) {
    FUN_ram_0013b9c0(iVar6,0);
  }
  *(undefined1 *)(iVar3 + 0x67e) = 6;
  uVar2 = FUN_ram_0013bb0c(6);
  local_24 = (uint)*(byte *)(iVar3 + 0x67c);
  *(undefined1 *)(iVar3 + 0x67f) = uVar2;
  FUN_ram_00157f18(iVar3);
LAB_ram_00121a6c:
  local_28 = 6;
  FUN_ram_0013b65c(iVar6,&uStack_dc,uVar7);
  return;
}


