/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010ecbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0010ecbc(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*param_1 + 0x1c);
  iVar2 = FUN_ram_0010d420(param_1,param_2,&LAB_ram_0010ede4);
  if (iVar2 == 0) {
    uVar1 = *(ushort *)(iVar4 + 0x40b0);
    *(undefined4 *)(param_2 + 0xc) = 5;
    uVar3 = 0;
    if (2 < uVar1) {
      uVar3 = FUN_ram_000ee260(s_Scan_channel__u__scheduled__slot_ram_001c0f18,
                               *(undefined1 *)(param_2 + 4),*(undefined1 *)(iVar4 + 0x405d));
      return uVar3;
    }
  }
  else {
    if (iVar2 == 1) {
      if (*(short *)(iVar4 + 0x40b0) != 0) {
        FUN_ram_000ee260(s_Scan_channel__u__schedule_error__ram_001c0f40,
                         *(undefined1 *)(param_2 + 4),*(undefined1 *)(iVar4 + 0x405d));
      }
      uVar3 = FUN_ram_0010ecbc(param_1,param_2);
      return uVar3;
    }
    *(undefined4 *)(param_2 + 0xc) = 3;
    _DAT_ram_e000002c = 0x10001000;
    uVar3 = 0x10001000;
    sync();
    *(uint *)(iVar4 + 0x4060) = *(uint *)(iVar4 + 0x4060) & 0xfffffffd;
    if (2 < *(ushort *)(iVar4 + 0x40b0)) {
      uVar3 = FUN_ram_000ee260(s_Scan_channel__u__completed__ram_001c0f6c,
                               *(undefined1 *)(param_2 + 4));
      return uVar3;
    }
  }
  return uVar3;
}


