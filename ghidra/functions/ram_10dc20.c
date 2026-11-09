/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010dc20 */

void FUN_ram_0010dc20(int *param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*param_1 + 0x1c);
  iVar3 = *(int *)(iVar4 + 0x3b20);
  uVar1 = *(ushort *)(iVar4 + 0x4022);
  if ((*(int *)(iVar4 + 0x40a8) + 1) - *(int *)(iVar4 + 0x468c) < 0) {
    *(undefined1 *)(iVar4 + 0x405e) = 1;
    if (uVar1 < 3) goto LAB_ram_0010dcdc;
    FUN_ram_000ee260(s_SCS__Sample_channel__u__beacon_w_ram_001c0d40,*(undefined1 *)(param_2 + 4));
    uVar1 = *(ushort *)(iVar4 + 0x4022);
  }
  if (2 < uVar1) {
    FUN_ram_000ee260(s_SCS__Sample_channel__u__slot__u_f_ram_001c0d70,*(undefined1 *)(param_2 + 4),
                     *(undefined1 *)(iVar4 + 0x405d));
  }
LAB_ram_0010dcdc:
  uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x3018);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x3014);
  *(undefined4 *)(param_2 + 0x28) = uVar2;
  *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_2 + 0x24);
  FUN_ram_0010da64(param_1,*(undefined4 *)(iVar4 + 0x4674),*(undefined4 *)(iVar4 + 0x4678),1,
                   *(ushort *)(param_2 + 0x10) & 0x20);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(iVar4 + 0x4088);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(iVar4 + 0x4078);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(iVar4 + 0x407c);
  uVar2 = *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x3b20) + 0xc) + 0x3018);
  *(undefined4 *)(param_2 + 0x88) =
       *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x3b20) + 0xc) + 0x3014);
  *(undefined4 *)(param_2 + 0x8c) = uVar2;
  *(int *)(iVar4 + 0x4054) = *(int *)(iVar4 + 0x4054) + 1;
  return;
}


