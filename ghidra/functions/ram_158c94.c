/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00158c94 */

undefined2 FUN_ram_00158c94(int param_1,uint param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if ((*(ushort *)(param_1 + 0xc) & 0x4000) == 0) {
    return 0;
  }
  uVar3 = (param_2 & 0x8000) >> 0xf;
  uVar5 = (param_2 & 0x600) >> 9;
  if ((param_2 & 0x40) == 0) {
    puVar2 = (undefined2 *)
             (((param_2 & 0x7f) >> 4 & 3) * 0x14 + (uint)(uVar3 != 0) * 0xa0 + uVar5 * 0x140 +
             0x1a9aec);
    if ((param_2 & 0xf) < 10) {
      return puVar2[param_2 & 0xf];
    }
    return *puVar2;
  }
  uVar1 = (param_2 & 0x3f) + 0x21;
  iVar4 = (uint)(uVar3 != 0) * 0x58 + uVar5 * 0xb0;
  if ((0x20 < uVar1) && (uVar1 < 0x4d)) {
    return *(undefined2 *)(iVar4 + 0x1aa07a + uVar1 * 2);
  }
  return *(undefined2 *)(iVar4 + 0x1aa0bc);
}


