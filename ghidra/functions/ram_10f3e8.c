/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010f3e8 */

undefined4 FUN_ram_0010f3e8(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *(int *)(*param_1 + 0x1c);
  uVar6 = *(undefined4 *)(iVar5 + 0x3b20);
  if (DAT_ram_80038ee4 - *(int *)(iVar5 + 0x4688) ==
      (uint)(DAT_ram_80038ee0 < *(uint *)(iVar5 + 0x4684)) &&
      DAT_ram_80038ee0 - *(uint *)(iVar5 + 0x4684) < 1000) {
    if (*(short *)(iVar5 + 0x40b0) != 0) {
      FUN_ram_000ee260(s_Scan_channel__u__cancelled_becau_ram_001c109c,*(undefined1 *)(param_2 + 1),
                       *(undefined1 *)(iVar5 + 0x405d));
    }
    goto LAB_ram_0010f658;
  }
  FUN_ram_0010cca4();
  if (*(char *)(param_1[0xe1f] + 8) == *(char *)(param_2 + 1)) {
LAB_ram_0010f55c:
    iVar3 = FUN_ram_00108bfc(uVar6,1,3000,0,&LAB_ram_0010f2e4,0,0,
                             ((param_2[2] * 1000 - 3000U) / 1000) * 1000 >> 10,&LAB_ram_0010efd4,
                             param_1,param_2);
    if (iVar3 == 0) {
      if (*(char *)((int)param_1 + 0x1e) == '\x01') {
        FUN_ram_000f99ec(*(undefined4 *)(iVar5 + 0x3b20),1);
        FUN_ram_000f99a4(*(undefined4 *)(iVar5 + 0x3b20),1);
      }
      iVar2 = DAT_ram_80038ee4;
      *(uint *)(iVar5 + 0x40a8) = DAT_ram_80038ee0;
      *(int *)(iVar5 + 0x40ac) = iVar2;
      uVar1 = *(ushort *)(iVar5 + 0x40b0);
      param_2[3] = 2;
      if (2 < uVar1) {
        FUN_ram_000ee260(s_Scan_channel__u__probing____ram_001c10f4,*(undefined1 *)(param_2 + 1));
      }
    }
    else if ((uint)*(byte *)(param_1[0xe1f] + 8) != (*(uint *)(iVar5 + 0x4678) & 0xff)) {
      FUN_ram_0010da64(param_1,*(undefined4 *)(iVar5 + 0x4674),*(uint *)(iVar5 + 0x4678),1,
                       *(ushort *)(param_2 + 4) & 0x20);
    }
  }
  else {
    uVar4 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x3b20) + 0xc) + 0x3018);
    param_2[0x17] = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x3b20) + 0xc) + 0x3014);
    param_2[0x18] = uVar4;
    iVar3 = FUN_ram_0010e084(param_1,*param_2,param_2[1],1,*(ushort *)(param_2 + 4) & 0x20);
    uVar4 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x3b20) + 0xc) + 0x3018);
    param_2[0x19] = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x3b20) + 0xc) + 0x3014);
    param_2[0x1a] = uVar4;
    if (iVar3 == 0) goto LAB_ram_0010f55c;
  }
  if (iVar3 == 0) {
    return 0;
  }
LAB_ram_0010f658:
  FUN_ram_0010cd00(param_1);
  FUN_ram_0010ecbc(param_1,param_2);
  return 0;
}


