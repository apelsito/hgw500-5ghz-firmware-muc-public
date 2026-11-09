/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00139950 */

void FUN_ram_00139950(int param_1)

{
  int extraout_r1;
  int iVar1;
  
  if ((3 < DAT_ram_8002c900) && (FUN_ram_000f5e64(DAT_ram_80038ee0 / 1000), extraout_r1 == 0)) {
    FUN_ram_000e7d50(param_1 + 4);
    for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x114)) {
      FUN_ram_000ee260(s_tx_airtime_aid__u_usecs_VI__u_VO_ram_001c4918,
                       *(ushort *)(iVar1 + 0x18) & 0x3fff,*(undefined4 *)(iVar1 + 0x47c),
                       *(undefined4 *)(iVar1 + 0x488),*(undefined4 *)(iVar1 + 0x464),
                       *(undefined4 *)(iVar1 + 0x470));
    }
    FUN_ram_000e7da8(param_1 + 4);
  }
  return;
}


