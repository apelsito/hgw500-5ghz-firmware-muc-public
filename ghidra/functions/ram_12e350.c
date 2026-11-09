/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012e350 */

void FUN_ram_0012e350(int param_1,int param_2,uint param_3,int param_4)

{
  FUN_ram_000efe3c(0xc,*(ushort *)(param_2 + 0x18) & 0x3fff,
                   (uint)**(ushort **)(param_1 + 0x3a04) |
                   (uint)(param_4 != 0) << 0x18 | (param_3 & 0xff) << 0x10,0);
  return;
}


