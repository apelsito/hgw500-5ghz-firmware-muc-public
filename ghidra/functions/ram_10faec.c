/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010faec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0010faec(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x1c);
  if (0 < *(int *)(iVar1 + 0x5b80)) {
    FUN_ram_000ee260(s_REMAIN_CHANNEL__Cancel_remain_on_ram_001c1224,*(undefined1 *)(param_2 + 4),
                     DAT_ram_80038ee0,DAT_ram_80038ee4);
    FUN_ram_000ee260(0x1c0000);
  }
  *(uint *)(iVar1 + 0x4060) = *(uint *)(iVar1 + 0x4060) & 0xfffffff7;
  *(undefined4 *)(param_2 + 0x1c) = 5;
  _DAT_ram_e000002c = 0x4000400;
  sync();
  return 0x4000400;
}


