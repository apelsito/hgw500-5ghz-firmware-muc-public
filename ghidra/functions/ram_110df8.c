/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00110df8 */

undefined4 FUN_ram_00110df8(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0xc);
  if ((iVar1 == 0 || iVar1 == 4) || iVar1 == 6) {
    return 0;
  }
  if (*(ushort *)(*(int *)(*param_1 + 0x1c) + 0x4022) < 2) {
    if (iVar1 == 3 || iVar1 == 2) goto LAB_ram_00110e68;
  }
  else {
    FUN_ram_000ee260(s_SCS__Sample_channel__u__cancelli_ram_001c14d0,*(undefined1 *)(param_2 + 4));
    if (*(int *)(param_2 + 0xc) == 3 || *(int *)(param_2 + 0xc) == 2) {
LAB_ram_00110e68:
      *(undefined4 *)(param_2 + 0xc) = 5;
      return 0;
    }
  }
  *(undefined4 *)(param_2 + 0xc) = 5;
  FUN_ram_0010d538(param_1,param_2);
  return 0;
}


