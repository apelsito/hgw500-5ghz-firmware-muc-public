/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010be58 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0010be58(int *param_1,uint param_2,uint param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined1 uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint local_6c;
  undefined4 local_68;
  byte local_64 [4];
  undefined1 auStack_60 [32];
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar14 = *(int *)(*param_1 + 0x1c);
  iVar15 = *(int *)(iVar14 + 0x3b20);
  iVar9 = FUN_ram_000e2000(_DAT_ram_e00000bc);
  local_6c = 0;
  local_68 = 0;
  *(undefined2 *)(iVar14 + 0x405a) = 1;
  iVar10 = param_1[0xe1f];
  uVar1 = *(undefined1 *)(iVar10 + 8);
  if ((*(uint *)(iVar14 + 0x4658) & 0x800000) == 0) {
    uVar18 = 0x28;
    if ((*(uint *)(iVar14 + 0x4658) & 0x40000000) == 0) {
      uVar18 = 0x14;
    }
  }
  else {
    uVar18 = 0x50;
  }
  *(uint *)(iVar14 + 0x4654) = param_2;
  *(uint *)(iVar14 + 0x4658) = param_3;
  *(char *)(iVar10 + 8) = (char)param_3;
  if ((param_3 & 0x80000000) == 0) {
    if ((param_3 & 0x800000) == 0) {
      uVar12 = 1;
      goto joined_r0x0010bf68;
    }
    uVar12 = 1;
  }
  else {
    if ((param_3 & 0x800000) == 0) {
      uVar12 = 3;
joined_r0x0010bf68:
      if ((param_3 & 0x40000000) == 0) {
        iVar10 = 0x14;
      }
      else {
        iVar10 = 0x28;
      }
      goto LAB_ram_0010bf88;
    }
    uVar12 = 3;
  }
  iVar10 = 0x50;
LAB_ram_0010bf88:
  FUN_ram_0010b8bc(param_1,param_3,iVar10,local_64,auStack_60);
  uVar17 = param_2 & 0xff;
  uVar16 = DAT_ram_0018c000;
  uVar2 = DAT_ram_0018c001;
  uVar3 = DAT_ram_0018c002;
  uVar4 = DAT_ram_0018c003;
  uVar5 = DAT_ram_0018c008;
  uVar6 = DAT_ram_0018c009;
  uVar7 = DAT_ram_0018c00a;
  uVar8 = DAT_ram_0018c00b;
  if ((param_4 & 0xe) == 0) {
    *(uint *)(iVar14 + 0x4674) = param_2;
    *(uint *)(iVar14 + 0x4678) = param_3;
    *(int *)(iVar14 + 0x467c) = iVar10;
    *(uint *)(iVar14 + 0x4680) = (uint)local_64[0];
    uVar16 = DAT_ram_0018c000;
    uVar2 = DAT_ram_0018c001;
    uVar3 = DAT_ram_0018c002;
    uVar4 = DAT_ram_0018c003;
    uVar5 = DAT_ram_0018c008;
    uVar6 = DAT_ram_0018c009;
    uVar7 = DAT_ram_0018c00a;
    uVar8 = DAT_ram_0018c00b;
  }
  DAT_ram_0018c003 = uVar8;
  DAT_ram_0018c002 = uVar7;
  DAT_ram_0018c001 = uVar6;
  DAT_ram_0018c000 = uVar5;
  DAT_ram_0018c008 = DAT_ram_0018c000;
  DAT_ram_0018c009 = DAT_ram_0018c001;
  DAT_ram_0018c00a = DAT_ram_0018c002;
  DAT_ram_0018c00b = DAT_ram_0018c003;
  if (DAT_ram_0018c010 == 3) {
    if (*(byte *)(param_1[0xe1f] + 8) < 0xf) {
      uVar17 = 0;
      DAT_ram_0018c000 = DAT_ram_0018c004;
      DAT_ram_0018c001 = DAT_ram_0018c005;
      DAT_ram_0018c002 = DAT_ram_0018c006;
      DAT_ram_0018c003 = DAT_ram_0018c007;
      FUN_ram_000ff114(iVar15,0);
      FUN_ram_0010526c(iVar15,3);
      *(uint *)(*(int *)(iVar15 + 0xc) + 0x3048) =
           *(uint *)(*(int *)(iVar15 + 0xc) + 0x3048) & 0xffffff00 | 10;
      uVar16 = DAT_ram_0018c000;
      uVar2 = DAT_ram_0018c001;
      uVar3 = DAT_ram_0018c002;
      uVar4 = DAT_ram_0018c003;
    }
    else {
      uVar17 = 1;
      FUN_ram_000ff114(iVar15,1);
      FUN_ram_0010526c(iVar15,(undefined1)DAT_ram_8002c8dc);
      *(uint *)(*(int *)(iVar15 + 0xc) + 0x3048) =
           *(uint *)(*(int *)(iVar15 + 0xc) + 0x3048) & 0xffffff00 | 0x10;
      uVar16 = DAT_ram_0018c000;
      uVar2 = DAT_ram_0018c001;
      uVar3 = DAT_ram_0018c002;
      uVar4 = DAT_ram_0018c003;
    }
  }
  DAT_ram_0018c003 = uVar4;
  DAT_ram_0018c002 = uVar3;
  DAT_ram_0018c001 = uVar2;
  DAT_ram_0018c000 = uVar16;
  uVar16 = (undefined1)uVar17;
  if (uVar17 != 0) {
    uVar16 = 1;
  }
  *(undefined1 *)(iVar14 + 0x4660) = uVar16;
  if ((param_4 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x11d) = uVar12;
    DAT_ram_0018c118 = iVar10;
  }
  FUN_ram_00103ad0(iVar15,0xe);
  if (DAT_ram_0018c010 == 3) {
    (*DAT_ram_0020181c)(0);
  }
  else {
    FUN_ram_0016fcc8(0);
  }
  if (iVar10 == 0x14) {
    local_68 = 0;
    local_6c = (uint)*(byte *)(param_1[0xe1f] + 8);
  }
  else {
    FUN_ram_0010bda4(*(undefined1 *)(param_1[0xe1f] + 8),iVar10,param_3 >> 0x1f,&local_68,&local_6c)
    ;
  }
  *(char *)(iVar14 + 0x3b34) = (char)local_68;
  *(char *)(iVar14 + 0x3b35) = (char)iVar10;
  FUN_ram_00134a48(iVar10);
  if ((param_4 & 1) != 0) {
    FUN_ram_0018a644(local_68,iVar10);
  }
  if (DAT_ram_0018c010 == 3) {
    (*DAT_ram_002017d8)(uVar17);
    (*DAT_ram_0020181c)((int)(char)(local_64[0] << 2));
  }
  else {
    FUN_ram_0016ed08(uVar17,local_6c);
    FUN_ram_0016fcc8((int)(char)(local_64[0] << 2));
    DAT_ram_8003794c = (uint)local_64[0];
  }
  FUN_ram_0011be2c(iVar14,DAT_ram_8002c950);
  if ((param_4 & 8) == 0) {
    uVar13 = *(undefined4 *)(iVar14 + 0x3b20);
    FUN_ram_0011bb78(auStack_60);
    uVar11 = FUN_ram_0011bc70(0,0,0);
    FUN_ram_001292bc(iVar14,uVar11);
    uVar11 = FUN_ram_0011bc70(0,0,0);
    FUN_ram_00103db8(uVar13,uVar11);
  }
  if ((param_4 & 6) == 0) {
    FUN_ram_00146d30();
    FUN_ram_00163ed8();
    FUN_ram_0015b2a4(0,s_Channel_change_ram_001c08cc);
    FUN_ram_0014a640(iVar14,uVar1,uVar18);
    uVar18 = DAT_ram_80038ee4;
    *(undefined4 *)(iVar14 + 0x4684) = DAT_ram_80038ee0;
    *(undefined4 *)(iVar14 + 0x4688) = uVar18;
  }
  else if ((param_4 & 2) == 0) {
    FUN_ram_00146e08();
  }
  else {
    FUN_ram_00146d9c();
  }
  local_40 = *(undefined4 *)(*(int *)(iVar15 + 0xc) + 0x3014);
  local_3c = *(undefined4 *)(*(int *)(iVar15 + 0xc) + 0x3018);
  *(undefined4 *)(iVar9 + 0x28) = local_40;
  *(undefined4 *)(iVar9 + 0x2c) = local_3c;
  if (((param_4 & 6) == 0) && (1 < *(ushort *)(iVar14 + 0x4022))) {
    FUN_ram_000ee260(s_Changed_to_channel__d_ram_001c08dc,*(undefined1 *)(param_1[0xe1f] + 8));
  }
  FUN_ram_0011e59c(iVar14,DAT_ram_8002c224 & 0x10,iVar10);
  if ((DAT_ram_8002c229 != '\0') && ((param_4 & 0xe) == 0)) {
    for (iVar9 = *(int *)(iVar14 + 0x3da4); iVar9 != 0; iVar9 = *(int *)(iVar9 + 0xd60)) {
      if (((*(short *)(iVar9 + 0x18) != 0) && (*(int *)(iVar9 + 0x690) != 0)) &&
         ((*(byte *)(iVar9 + 0x458) & 3) == 0)) {
        FUN_ram_00122524(iVar9,1);
      }
    }
  }
  *(undefined2 *)(iVar14 + 0x405a) = 0;
  return 0;
}


