/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011e680 */

void FUN_ram_0011e680(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar1 = FUN_ram_000e6c28(0x11);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_ram_0011a598(param_3,(undefined1 *)(param_1 + 0x24));
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_1 + 4);
    if (*(short *)(param_2 + 0x5aa4) != 0) {
      if (iVar3 == 0) {
        puVar2 = &DAT_ram_001c2e48;
      }
      else {
        puVar2 = &DAT_ram_001c2e44;
      }
      FUN_ram_000ee260(s_qtn_ioctl_mu_grp_update__s__AID__ram_001c2dfc,puVar2,
                       *(ushort *)(iVar1 + 0x18) & 0x3fff,*(undefined1 *)(param_1 + 0x24),
                       *(undefined1 *)(param_1 + 0x25),*(undefined1 *)(param_1 + 0x26),
                       *(undefined1 *)(param_1 + 0x27),*(undefined1 *)(param_1 + 0x28),
                       *(undefined1 *)(param_1 + 0x29));
      iVar3 = *(int *)(param_1 + 4);
    }
    FUN_ram_0010a230(iVar1,param_1 + 0xc,iVar3,1,1);
    return;
  }
  FUN_ram_000ee260(s_qtn_ioctl_mu_grp_update__cannot_f_ram_001c2e4c);
  return;
}


