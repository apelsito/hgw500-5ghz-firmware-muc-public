/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013fba0 */

int FUN_ram_0013fba0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  
  iVar1 = FUN_ram_000ee4c8(0x24f4,0,2);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_ram_000eea80(iVar1,0,0x24f4);
    *(int *)(iVar1 + 0x24e0) = param_2;
    *(char *)(iVar1 + 0x24db) = (char)param_3;
    *(char *)(iVar1 + 0x24dc) = (char)param_4;
    iVar7 = DAT_ram_80038ee4 + (uint)CARRY4(DAT_ram_80038ee0,DAT_ram_0018d464);
    *(uint *)(iVar1 + 4) = DAT_ram_80038ee0 + DAT_ram_0018d464;
    *(int *)(iVar1 + 8) = iVar7;
    if ((*(ushort *)(param_2 + 0x3dc) & 8) == 0 || (*(ushort *)(param_2 + 0x3dc) & 4) == 0) {
      uVar10 = 2;
      *(undefined **)(iVar1 + 0x24f0) = &DAT_ram_0018e904;
      *(undefined1 *)(iVar1 + 0x10) = 0x11;
      *(undefined1 *)(iVar1 + 0x11) = 0xc;
      *(undefined1 *)(iVar1 + 0x12) = 0xc;
      *(undefined1 *)(iVar1 + 0x13) = 10;
      *(undefined1 *)(iVar1 + 0x14) = 0xc;
    }
    else {
      uVar10 = 1;
      *(undefined **)(iVar1 + 0x24f0) = &DAT_ram_0018efdc;
      *(undefined1 *)(iVar1 + 0x10) = 7;
      *(undefined1 *)(iVar1 + 0x11) = 2;
      *(undefined1 *)(iVar1 + 0x12) = 2;
      *(undefined1 *)(iVar1 + 0x13) = 0;
      *(undefined1 *)(iVar1 + 0x14) = 2;
    }
    *(undefined2 *)(iVar1 + 0x18) = 0xffff;
    uVar3 = (uint)DAT_ram_0018d478;
    *(undefined2 *)(iVar1 + 0x24d6) = 2;
    *(uint *)(iVar1 + 0xc) = uVar3;
    iVar6 = 0;
    iVar7 = iVar1 + 0xa64;
    iVar9 = iVar1 + 0x12c4;
    iVar4 = iVar1 + 0x1b24;
    iVar5 = 0x43;
    puVar8 = (undefined4 *)(iVar1 + 0x2384);
    do {
      iVar11 = 0;
      iVar2 = iVar1 + 0x3fc + iVar6 * 0x16;
      *(undefined2 *)(iVar2 + 0xa0) = 0;
      *(undefined2 *)(iVar2 + 0xb2) = 0xf830;
      do {
        iVar2 = iVar11 * 2;
        iVar11 = iVar11 + 1;
        *(undefined2 *)(iVar6 * 0x16 + iVar1 + 0x49e + iVar2) = 0;
      } while (iVar11 < 8);
      iVar11 = iVar6 * 0x20;
      *(undefined4 *)(iVar7 + iVar11) = 0;
      *(undefined4 *)(iVar9 + iVar11) = 0;
      *(undefined4 *)(iVar4 + iVar11) = 0;
      iVar2 = iVar11 + 4;
      *(undefined4 *)(iVar7 + iVar2) = 0;
      *(undefined4 *)(iVar9 + iVar2) = 0;
      *(undefined4 *)(iVar4 + iVar2) = 0;
      iVar2 = iVar11 + 8;
      *(undefined4 *)(iVar7 + iVar2) = 0;
      *(undefined4 *)(iVar9 + iVar2) = 0;
      *(undefined4 *)(iVar4 + iVar2) = 0;
      iVar2 = iVar11 + 0xc;
      *(undefined4 *)(iVar7 + iVar2) = 0;
      *(undefined4 *)(iVar9 + iVar2) = 0;
      *(undefined4 *)(iVar4 + iVar2) = 0;
      iVar2 = iVar11 + 0x10;
      *(undefined4 *)(iVar7 + iVar2) = 0;
      *(undefined4 *)(iVar9 + iVar2) = 0;
      *(undefined4 *)(iVar4 + iVar2) = 0;
      iVar2 = iVar11 + 0x14;
      *(undefined4 *)(iVar7 + iVar2) = 0;
      *(undefined4 *)(iVar9 + iVar2) = 0;
      *(undefined4 *)(iVar4 + iVar2) = 0;
      iVar2 = iVar11 + 0x18;
      *(undefined4 *)(iVar7 + iVar2) = 0;
      *(undefined4 *)(iVar9 + iVar2) = 0;
      *(undefined4 *)(iVar4 + iVar2) = 0;
      iVar11 = iVar11 + 0x1c;
      *(undefined4 *)(iVar7 + iVar11) = 0;
      *(undefined4 *)(iVar9 + iVar11) = 0;
      *(undefined4 *)(iVar4 + iVar11) = 0;
      *puVar8 = 0;
      iVar5 = iVar5 + -1;
      iVar6 = iVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar5 != 0);
    *(undefined1 **)(iVar1 + 0x249c) = &DAT_ram_001a8ee0;
    *(undefined **)(iVar1 + 0x24a0) = &DAT_ram_001a8fb8;
    *(undefined **)(iVar1 + 0x24a4) = &DAT_ram_001a8fb8;
    *(undefined **)(iVar1 + 0x24a8) = &DAT_ram_001a9008;
    *(undefined **)(iVar1 + 0x24ac) = &DAT_ram_001a9030;
    *(undefined **)(iVar1 + 0x24b0) = &DAT_ram_001a8f24;
    *(undefined **)(iVar1 + 0x24b4) = &DAT_ram_001a8f68;
    *(undefined1 *)(iVar1 + 0x24c8) = 0;
    *(undefined1 *)(iVar1 + 0x24c9) = 0;
    *(undefined1 *)(iVar1 + 0x24ca) = 0;
    FUN_ram_0013f26c(param_1,iVar1,0,1);
    FUN_ram_000ee260(s_qtn_ralg_sscl_install_mu__grp__u_ram_001c50d0,param_3,param_4,
                     *(undefined1 *)(param_2 + 0x67c),uVar10);
  }
  return iVar1;
}


