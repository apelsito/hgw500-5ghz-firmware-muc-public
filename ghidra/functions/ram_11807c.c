/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011807c */

/* WARNING: Removing unreachable block (ram,0x001180e4) */

int FUN_ram_0011807c(uint param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_1 >> 2 & 0x3fff;
  if (((ushort)uVar3 < 0x800) && (iVar2 = uVar3 * 0x40 + 0x490c400, iVar2 != 0)) {
    if (*(short *)(param_2 + 0x28) == 8) {
      iVar4 = (int)(char)((byte)((int)(uint)*(byte *)(*(int *)(param_2 + 0x24) + 0x11) >> 7) |
                         (*(byte *)(*(int *)(param_2 + 0x24) + 0x10) & 0xf) * '\x02');
    }
    else {
      if (*(short *)(param_2 + 0x28) != -0x227a) {
        return 0;
      }
      iVar4 = 0;
    }
    uVar1 = *(ushort *)(iVar2 + iVar4 * 2);
    if ((-1 < (short)uVar1) && ((short)uVar1 < 0x800)) {
      if (*(char *)((uint)uVar1 * 0x14 + 0x492c411) != '\0') {
        return 0x4936400;
      }
      return (uint)uVar1 * 0x14 + 0x492c400;
    }
  }
  return 0;
}


