/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00110e9c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00110e9c(int *param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined *local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar3 = *(int *)(*param_1 + 0x1c);
  if (*(int *)(param_2 + 0xc) != 0 && *(int *)(param_2 + 0xc) != 3) {
    FUN_ram_000ee260(s_ioctl_scan_channel__scanning_in_p_ram_001c14f4);
    return 0xfffffff5;
  }
  local_14 = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x3b20) + 0xc) + 0x3014);
  local_10 = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x3b20) + 0xc) + 0x3018);
  *(undefined4 *)(param_2 + 0x44) = local_14;
  *(undefined4 *)(param_2 + 0x48) = local_10;
  uVar1 = *(int *)(param_2 + 8) * 1000;
  if (uVar1 + 0x2904 < 0x7fff) {
    if (7999 < uVar1) {
      if (*(int *)(iVar3 + 0x4060) == 0) {
        *(undefined1 *)(iVar3 + 0x405e) = 0;
        *(undefined4 *)(iVar3 + 0x4060) = 2;
        iVar4 = *(int *)(param_2 + 0x1c);
        *(undefined1 *)(iVar3 + 0x405d) = 0;
        *(bool *)(iVar3 + 0x405c) = iVar4 != 0;
        DAT_ram_800378c4 = DAT_ram_800378c4 + 1;
        local_20 = 0x14;
        local_1e = 0x11;
        local_18 = &DAT_ram_0018d18c;
        local_1c = 6;
        FUN_ram_00110aac(param_1,param_2,&local_20);
        FUN_ram_0010ecbc(param_1,param_2);
        return 0;
      }
      if (*(short *)(iVar3 + 0x40b0) != 0) {
        FUN_ram_000ee260(s_Scan_channel__u__failed_for_othe_ram_001c1574,
                         *(undefined1 *)(param_2 + 4));
      }
      goto LAB_ram_00110fa8;
    }
    if (*(short *)(iVar3 + 0x40b0) == 0) goto LAB_ram_00110fa8;
    pcVar2 = s_Scan_channel__u__too_little_dwel_ram_001c1548;
  }
  else {
    if (*(short *)(iVar3 + 0x40b0) == 0) goto LAB_ram_00110fa8;
    pcVar2 = s_Scan_channel__u__too_large_dwell_ram_001c1520;
  }
  FUN_ram_000ee260(pcVar2,*(undefined1 *)(param_2 + 4));
LAB_ram_00110fa8:
  *(undefined4 *)(param_2 + 0xc) = 4;
  sync();
  _DAT_ram_e000002c = 0x10001000;
  return 0;
}


