/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80025dec */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x80025e44) */
/* WARNING: Removing unreachable block (ram,0x80025e36) */
/* WARNING: Removing unreachable block (ram,0x80025e40) */
/* WARNING: Removing unreachable block (ram,0x80025e26) */
/* WARNING: Removing unreachable block (ram,0x00025e14) */
/* WARNING: Removing unreachable block (ram,0x80025e28) */
/* WARNING: Removing unreachable block (ram,0x80025e48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_80025dec(void)

{
  if (DAT_ram_0018c02c != 0) {
    LP_START = 0x80025e14;
    LP_END = 0x80025e26;
    _DAT_ram_e0000170 = 0x20000002;
  }
  return 1;
}


