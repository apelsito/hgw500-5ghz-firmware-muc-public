/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00121520 */

void FUN_ram_00121520(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 uStack_dc;
  byte local_db;
  undefined1 local_da;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_28;
  uint local_24;
  
  iVar7 = *(int *)(param_1 + 0x1c);
  iVar5 = *(int *)(**(int **)(iVar7 + 0xc) + 0x1c);
  iVar8 = *(int *)(param_2 + 0x10);
  FUN_ram_000f2ccc(s_Received_SETKEY_ram_001c3634);
  FUN_ram_0039fe00(&uStack_dc,iVar8,0xbc);
  uVar6 = iVar8 + 0xbc;
  if ((*(char *)(iVar7 + 0x2c) == '\x01') && ((local_db & 4) != 0)) {
    local_24 = 0x3f;
    goto LAB_ram_00121810;
  }
  iVar2 = FUN_ram_0011c26c(iVar7,uVar6);
  if (iVar2 == 0) {
    return;
  }
  if (*(char *)(iVar2 + 0x67c) == -1) {
    return;
  }
  if ((uVar6 & 1) == 0 && (iVar2 + 0x96U & 1) == 0) {
    if (((*(short *)(iVar2 + 0x9a) != *(short *)(iVar8 + 0xc0)) ||
        (*(short *)(iVar2 + 0x98) != *(short *)(iVar8 + 0xbe))) ||
       (*(short *)(iVar2 + 0x96) != *(short *)(iVar8 + 0xbc))) {
LAB_ram_00121610:
      if ((local_db & 4) == 0) {
        return;
      }
    }
  }
  else {
    uVar3 = FUN_ram_000eeb74(uVar6,iVar2 + 0x96U,6);
    iVar8 = 1 - uVar3;
    if (1 < uVar3) {
      iVar8 = 0;
    }
    if (iVar8 == 0) goto LAB_ram_00121610;
  }
  local_24 = (uint)*(byte *)(iVar2 + 0x67c);
  *(char *)(iVar2 + 0x67e) = (char)local_28;
  if ((local_28 & 0xff) == 1) {
    *(undefined1 *)(iVar2 + 0x681) = 1;
  }
  uVar1 = FUN_ram_0013bb0c();
  *(undefined1 *)(iVar2 + 0x67f) = uVar1;
  *(undefined1 *)(iVar2 + 0x680) = local_da;
  if (((local_db & 4) != 0) && ((local_db & 0x40) == 0)) {
    *(undefined1 *)(iVar7 + 0x7c) = local_da;
  }
  *(undefined4 *)(iVar2 + 0xd20) = 1;
  *(undefined4 *)(iVar2 + 0xd24) = 0;
  *(undefined4 *)(iVar2 + 0xca0) = local_b8;
  *(undefined4 *)(iVar2 + 0xca4) = local_b4;
  *(undefined4 *)(iVar2 + 0xca8) = local_b0;
  *(undefined4 *)(iVar2 + 0xcac) = local_ac;
  *(undefined4 *)(iVar2 + 0xcb0) = local_a8;
  *(undefined4 *)(iVar2 + 0xcb4) = local_a4;
  *(undefined4 *)(iVar2 + 0xcb8) = local_a0;
  *(undefined4 *)(iVar2 + 0xcbc) = local_9c;
  *(undefined4 *)(iVar2 + 0xcc0) = local_98;
  *(undefined4 *)(iVar2 + 0xcc4) = local_94;
  *(undefined4 *)(iVar2 + 0xcc8) = local_90;
  *(undefined4 *)(iVar2 + 0xccc) = local_8c;
  *(undefined4 *)(iVar2 + 0xcd0) = local_88;
  *(undefined4 *)(iVar2 + 0xcd4) = local_84;
  *(undefined4 *)(iVar2 + 0xcd8) = local_80;
  *(undefined4 *)(iVar2 + 0xcdc) = local_7c;
  *(undefined4 *)(iVar2 + 0xce0) = local_78;
  *(undefined4 *)(iVar2 + 0xce4) = local_74;
  *(undefined4 *)(iVar2 + 0xce8) = local_70;
  *(undefined4 *)(iVar2 + 0xcec) = local_6c;
  *(undefined4 *)(iVar2 + 0xcf0) = local_68;
  *(undefined4 *)(iVar2 + 0xcf4) = local_64;
  *(undefined4 *)(iVar2 + 0xcf8) = local_60;
  *(undefined4 *)(iVar2 + 0xcfc) = local_5c;
  *(undefined4 *)(iVar2 + 0xd00) = local_58;
  *(undefined4 *)(iVar2 + 0xd04) = local_54;
  *(undefined4 *)(iVar2 + 0xd08) = local_50;
  *(undefined4 *)(iVar2 + 0xd0c) = local_4c;
  *(undefined4 *)(iVar2 + 0xd10) = local_48;
  *(undefined4 *)(iVar2 + 0xd14) = local_44;
  *(undefined4 *)(iVar2 + 0xd18) = local_40;
  *(undefined4 *)(iVar2 + 0xd1c) = local_3c;
  FUN_ram_00157f18(iVar2);
LAB_ram_00121810:
  FUN_ram_0013b65c(iVar7,&uStack_dc,uVar6);
  if (local_28 != 1) {
    FUN_ram_0013b9c0(iVar7,2);
    return;
  }
  if (*(char *)(iVar7 + 0x2c) == '\x06') {
    if ((local_db & 4) != 0) {
      return;
    }
  }
  else if (*(char *)(iVar7 + 0x2c) != '\x01') {
    return;
  }
  cVar4 = *(char *)(iVar5 + 0x4019);
  if (cVar4 == '\0') {
    FUN_ram_0013b9c0(iVar7,1);
    cVar4 = *(char *)(iVar5 + 0x4019);
  }
  *(char *)(iVar5 + 0x4019) = cVar4 + '\x01';
  DAT_ram_80037120 = DAT_ram_80037120 + 1;
  return;
}


