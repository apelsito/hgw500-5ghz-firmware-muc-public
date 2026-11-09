/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011e4a8 */

void FUN_ram_0011e4a8(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar4 = param_3 & 3;
  uVar3 = (int)(param_3 & 0x70) >> 4;
  FUN_ram_000e7d50(iVar2 + 0x3884);
  piVar1 = (int *)FUN_ram_00119258(iVar2 + 0x3880,param_2);
  FUN_ram_000e7da8(iVar2 + 0x3884);
  DAT_ram_800373d8 = DAT_ram_800373d8 + 1;
  if (piVar1 == (int *)0x0) {
    FUN_ram_000ee260(s_qtn_ioctl_set_node_opmode__node_n_ram_001c2dd0);
    return;
  }
  if ((*(ushort *)(piVar1 + 3) & 0x4000) != 0) {
    if (uVar4 <= *(uint *)(*piVar1 + 0x130)) {
      piVar1[0x102] = uVar4;
      *(char *)((int)piVar1 + 0x683) = (char)uVar4;
    }
    *(undefined1 *)((int)piVar1 + 0x4eb) = 0;
    if (uVar3 < 4) {
      FUN_ram_0013db80(piVar1,uVar3);
      return;
    }
  }
  return;
}


