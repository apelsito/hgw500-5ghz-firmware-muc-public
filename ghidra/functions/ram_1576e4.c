/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001576e4 */

void FUN_ram_001576e4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_ram_00155e14(*(undefined1 *)(param_1 + 0x67c));
  uVar2 = *(uint *)(iVar1 + 0x94);
  uVar3 = (int)(uint)*(byte *)(param_1 + 0x420) >> 5;
  if ((uVar3 & 3) != 0) {
    uVar2 = uVar2 | (uVar3 & 3) << 0xd;
  }
  uVar3 = 0;
  do {
    uVar5 = 3 - uVar3;
    uVar4 = uVar3 + 8;
    uVar3 = uVar3 + 1 & 0xff;
    uVar2 = uVar2 | (uint)((1 << (uVar5 & 0x1f) & *(byte *)(param_1 + 0x420) & 0xf) != 0) <<
                    (uVar4 & 0x1f);
  } while (uVar3 < 4);
  FUN_ram_80025e54(iVar1 + 0x94,uVar2,2);
  return;
}


