/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010d538 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0010d538(int *param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*param_1 + 0x1c);
  if (*(int *)(param_2 + 0xc) == 5) {
    if (1 < *(ushort *)(iVar4 + 0x4022)) {
      FUN_ram_000ee260(s_SCS__Sample_channel__u__cancelle_ram_001c0b94,*(undefined1 *)(param_2 + 4))
      ;
    }
    uVar2 = FUN_ram_0010d3c8(param_1,param_2);
  }
  else {
    if (*(char *)(iVar4 + 0x405d) == '\0') {
      DAT_ram_0018c0b8 = 0;
    }
    iVar3 = FUN_ram_0010d420(param_1,param_2,&LAB_ram_0010d910);
    uVar1 = *(ushort *)(iVar4 + 0x4022);
    if (iVar3 == 0) {
      if ((*(char *)(iVar4 + 0x405d) == '\x01') || (*(int *)(param_2 + 0xc) != 3)) {
        *(undefined4 *)(param_2 + 0xc) = 2;
        if (uVar1 < 3) {
          return 0;
        }
      }
      else {
        if (uVar1 < 3) {
          *(undefined4 *)(param_2 + 0xc) = 2;
          return 0;
        }
        *(undefined4 *)(param_2 + 0xc) = 2;
        DAT_ram_0018c0b8 = (*(int *)(param_2 + 0x80) - *(int *)(param_2 + 0x78)) + DAT_ram_0018c0b8;
      }
      uVar2 = FUN_ram_000ee260(s_SCS__Sample_channel__u__schedule_ram_001c0bb8,
                               *(undefined1 *)(param_2 + 4));
    }
    else if (iVar3 == 1) {
      if (uVar1 != 0) {
        FUN_ram_000ee260(s_SCS__Sample_channel__u__schedule_ram_001c0be4,
                         *(undefined1 *)(param_2 + 4),*(undefined1 *)(iVar4 + 0x405d));
      }
      uVar2 = FUN_ram_0010d538(param_1,param_2);
    }
    else {
      if ((*(int *)(param_2 + 0xc) == 3) && (2 < uVar1)) {
        DAT_ram_0018c0b8 = DAT_ram_0018c0b8 + (*(int *)(param_2 + 0x80) - *(int *)(param_2 + 0x78));
      }
      *(undefined4 *)(param_2 + 0xc) = 4;
      *(uint *)(iVar4 + 0x4060) = *(uint *)(iVar4 + 0x4060) & 0xfffffffe;
      if (2 < uVar1) {
        FUN_ram_000ee260(s_SCS__Sample_channel__u__complete_ram_001c0c18,
                         *(undefined1 *)(param_2 + 4),DAT_ram_0018c0b8);
      }
      _DAT_ram_e000002c = 0x8000800;
      uVar2 = 0x8000800;
      sync();
    }
  }
  return uVar2;
}


