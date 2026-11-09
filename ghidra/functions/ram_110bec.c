/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00110bec */

undefined4 FUN_ram_00110bec(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_ram_80038ee0;
  iVar3 = *(int *)(*param_1 + 0x1c);
  if (*(int *)(param_2 + 0xc) == 1) {
    *(int *)(iVar3 + 0x4030) = *(int *)(iVar3 + 0x4030) + 1;
    local_18 = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x3b20) + 0xc) + 0x3014);
    local_14 = *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x3b20) + 0xc) + 0x3018);
    *(undefined4 *)(param_2 + 0x60) = local_18;
    *(undefined4 *)(param_2 + 100) = local_14;
    if (*(int *)(iVar3 + 0x4060) == 0) {
      if (*(int *)(iVar3 + 0x3f94) == 0) {
        iVar1 = *(int *)(iVar3 + 0x40b8);
      }
      else {
        if (*(char *)(*(int *)(*(int *)(iVar3 + 0x3f94) + 0x84) + 0x1b) != '\0') {
          if (1 < *(ushort *)(iVar3 + 0x4022)) {
            FUN_ram_000ee260(s_SCS__Sample_channel__u__cancelle_ram_001c1450,
                             *(undefined1 *)(param_2 + 4));
          }
          goto LAB_ram_00110cc0;
        }
        iVar1 = *(int *)(iVar3 + 0x40b8);
      }
      if (4999 < (uint)(iVar2 - iVar1)) {
        *(undefined4 *)(iVar3 + 0x4060) = 1;
        *(undefined1 *)(iVar3 + 0x405e) = 0;
        iVar2 = *(int *)(param_2 + 0x38);
        *(undefined1 *)(iVar3 + 0x405d) = 0;
        *(bool *)(iVar3 + 0x405c) = iVar2 == 1;
        DAT_ram_800378c0 = DAT_ram_800378c0 + 1;
        local_24 = 0x14;
        local_22 = 0x11;
        local_1c = &DAT_ram_0018d15c;
        local_20 = 6;
        FUN_ram_00110aac(param_1,param_2,&local_24);
        FUN_ram_0010d538(param_1,param_2);
        return 0;
      }
      *(int *)(iVar3 + 0x404c) = *(int *)(iVar3 + 0x404c) + 1;
      if (1 < *(ushort *)(iVar3 + 0x4022)) {
        FUN_ram_000ee260(s_SCS__Sample_channel__u__failed_f_ram_001c1490,
                         *(undefined1 *)(param_2 + 4));
      }
    }
    else {
      *(int *)(iVar3 + 0x4048) = *(int *)(iVar3 + 0x4048) + 1;
      if (1 < *(ushort *)(iVar3 + 0x4022)) {
        FUN_ram_000ee260(s_SCS__Sample_channel__u__failed_f_ram_001c140c,
                         *(undefined1 *)(param_2 + 4));
      }
    }
  }
  else {
    FUN_ram_000ee260(s_SCS__status__u__is_not_correct_ram_001c13ec);
  }
LAB_ram_00110cc0:
  FUN_ram_0010d3c8(param_1,param_2);
  return 0xfffffff5;
}


