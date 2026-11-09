/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015950c */

void FUN_ram_0015950c(int param_1,int param_2)

{
  int iVar1;
  
  DAT_ram_800370a4 = DAT_ram_800370a4 + 1;
  if (((int)(*(ushort *)(param_1 + 0x1a) & 0x800) >> 0xb == 0) &&
     (iVar1 = FUN_ram_00155e44((*(uint *)(param_2 + 0x14) & 0x3f80000) >> 0x13,
                               (int)(*(ushort *)(param_1 + 0x1a) & 0xf000) >> 0xc), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x86) = 0;
    *(byte *)(iVar1 + 0x87) = *(byte *)(iVar1 + 0x87) & 0xbb;
  }
  return;
}


