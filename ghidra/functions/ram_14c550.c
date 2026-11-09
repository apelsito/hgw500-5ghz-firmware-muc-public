/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014c550 */

void FUN_ram_0014c550(int param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x5abc + param_3 * 0x30 + 6);
  uVar3 = 0;
  iVar4 = param_1 + 0x5abc + param_3 * 0x30;
  if (uVar2 == 0) {
    if ((*(ushort *)(iVar4 + 0x10) == 0) ||
       (uVar2 = *(uint *)(param_2 + 0xd50), uVar2 < *(ushort *)(iVar4 + 0x10)))
    goto LAB_ram_0014c638;
  }
  else if (*(uint *)(param_2 + 0xd40) < uVar2) {
    if ((*(ushort *)(iVar4 + 0x10) == 0) ||
       (uVar2 = *(uint *)(param_2 + 0xd50), uVar2 < *(ushort *)(iVar4 + 0x10)))
    goto LAB_ram_0014c638;
  }
  else {
    uVar3 = FUN_ram_0014c4d8(iVar4,*(uint *)(param_2 + 0xd40),*(undefined4 *)(param_2 + 0xd44),
                             iVar4 + 8,iVar4 + 10);
    if ((*(byte *)(iVar4 + 4) & 0x10) == 0) {
      if ((*(ushort *)(iVar4 + 0x10) == 0) ||
         (uVar2 = *(uint *)(param_2 + 0xd50), uVar2 < *(ushort *)(iVar4 + 0x10)))
      goto LAB_ram_0014c638;
    }
    else {
      uVar2 = FUN_ram_0014c4d8(iVar4,*(undefined4 *)(param_2 + 0xd40),
                               *(undefined4 *)(param_2 + 0xd48),iVar4 + 0xc,iVar4 + 0xe);
      uVar3 = (uVar2 | uVar3) & 0xff;
      if ((*(ushort *)(iVar4 + 0x10) == 0) ||
         (uVar2 = *(uint *)(param_2 + 0xd50), uVar2 < *(ushort *)(iVar4 + 0x10)))
      goto LAB_ram_0014c638;
    }
  }
  uVar2 = FUN_ram_0014c4d8(iVar4,uVar2,*(undefined4 *)(param_2 + 0xd54),iVar4 + 0x12,iVar4 + 0x14);
  uVar3 = (uVar2 | uVar3) & 0xff;
LAB_ram_0014c638:
  if (*(code **)(iVar4 + 0x1c) != (code *)0x0) {
    bVar1 = (**(code **)(iVar4 + 0x1c))(param_2,param_2 + 0xd40,uVar3);
    *(byte *)(iVar4 + 0x28) = bVar1 | *(byte *)(iVar4 + 0x28);
  }
  return;
}


