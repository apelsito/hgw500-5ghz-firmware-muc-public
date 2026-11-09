/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010e384 */

undefined4 FUN_ram_0010e384(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(*param_1 + 0x1c);
  FUN_ram_0010cca4();
  if (*(int *)(param_2 + 0x38) == 1) {
    if (DAT_ram_80038ee4 - *(int *)(iVar7 + 0x4688) ==
        (uint)(DAT_ram_80038ee0 < *(uint *)(iVar7 + 0x4684)) &&
        DAT_ram_80038ee0 - *(uint *)(iVar7 + 0x4684) < 1000) {
      if (1 < *(ushort *)(iVar7 + 0x4022)) {
        FUN_ram_000ee260(s_SCS__Sample_channel__u__cancelle_ram_001c0d9c,
                         *(undefined1 *)(param_2 + 4));
      }
      *(undefined4 *)(param_2 + 0xc) = 5;
      goto LAB_ram_0010e694;
    }
    uVar6 = *(uint *)(*(int *)(*(int *)(iVar7 + 0x3b20) + 0xc) + 0x3014);
    iVar4 = *(int *)(*(int *)(*(int *)(iVar7 + 0x3b20) + 0xc) + 0x3018);
    uVar3 = *(int *)(param_2 + 8) * 1000;
    uVar5 = uVar3 + uVar6;
    iVar4 = FUN_ram_0010de20(param_1,uVar6,iVar4,uVar5 + 0x251c,
                             iVar4 + (uint)CARRY4(uVar3,uVar6) + (uint)(0xffffdae3 < uVar5),3);
    if (iVar4 != 0) {
      *(int *)(iVar7 + 0x4040) = *(int *)(iVar7 + 0x4040) + 1;
      if (1 < *(ushort *)(iVar7 + 0x4022)) {
        FUN_ram_000ee260(s_SCS__Sample_channel__u__conflict_ram_001c0df0,
                         *(undefined1 *)(param_2 + 4),iVar4);
      }
      goto LAB_ram_0010e694;
    }
    uVar3 = *(uint *)(param_2 + 0x48);
    uVar5 = *(uint *)(*(int *)(*(int *)(iVar7 + 0x3b20) + 0xc) + 0x3014);
    uVar6 = *(int *)(param_2 + 0x4c) - 0x251c;
    if (uVar5 < uVar3) {
      iVar4 = -1 - uVar3;
    }
    else {
      iVar4 = -uVar3;
    }
    uVar5 = uVar5 + iVar4;
    if ((uVar6 < uVar5) || (uVar6 - uVar5 < 5000)) {
      *(int *)(iVar7 + 0x4044) = *(int *)(iVar7 + 0x4044) + 1;
      if (1 < *(ushort *)(iVar7 + 0x4022)) {
        FUN_ram_000ee260(s_SCS__Sample_channel__u__failed_d_ram_001c0e24,
                         *(undefined1 *)(param_2 + 4));
      }
      goto LAB_ram_0010e694;
    }
  }
  iVar4 = FUN_ram_0010e254(param_1,param_2);
  if (iVar4 != 0) goto LAB_ram_0010e694;
  uVar1 = *(ushort *)(iVar7 + 0x4022);
  *(undefined4 *)(param_2 + 0xc) = 3;
  if (uVar1 < 2) {
    if (*(int *)(param_2 + 0x38) == 1) goto LAB_ram_0010e5ac;
LAB_ram_0010e628:
    iVar4 = *(int *)(iVar7 + 0x3b20);
LAB_ram_0010e648:
    iVar4 = FUN_ram_00108bfc(iVar4,1);
    if (iVar4 == 0) {
      return 0;
    }
    if (1 < *(ushort *)(iVar7 + 0x4022)) {
      FUN_ram_000ee260(s_SCS__Sample_channel__u__failed_t_ram_001c0e80,*(undefined1 *)(param_2 + 4))
      ;
    }
  }
  else {
    FUN_ram_000ee260(s_SCS__Sample_channel__u__started_ram_001c0e5c,*(undefined1 *)(param_2 + 4));
    if (*(int *)(param_2 + 0x38) != 1) goto LAB_ram_0010e628;
LAB_ram_0010e5ac:
    uVar5 = *(int *)(param_2 + 0x78) - *(int *)(param_2 + 0x70);
    if (uVar5 < 0xea7) {
      uVar5 = 0xea6;
    }
    iVar4 = *(int *)(iVar7 + 0x3b20);
    uVar3 = *(uint *)(param_2 + 0x48);
    uVar6 = *(uint *)(*(int *)(iVar4 + 0xc) + 0x3014);
    if (uVar6 < uVar3) {
      iVar2 = -1 - uVar3;
    }
    else {
      iVar2 = -uVar3;
    }
    if (uVar5 + uVar6 + iVar2 + 4000 <= *(uint *)(param_2 + 0x4c)) goto LAB_ram_0010e648;
  }
  FUN_ram_0010dc20(param_1,param_2);
LAB_ram_0010e694:
  FUN_ram_0010cd00(param_1);
  FUN_ram_0010d538(param_1,param_2);
  return 0;
}


