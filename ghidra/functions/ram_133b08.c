/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00133b08 */

/* WARNING: Removing unreachable block (ram,0x00133bbc) */
/* WARNING: Removing unreachable block (ram,0x00133bdc) */
/* WARNING: Removing unreachable block (ram,0x00133bf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00133b08(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x1ac) = _DAT_ram_e509049c;
  *(undefined4 *)(param_2 + 0x1b0) = _DAT_ram_e5090460;
  *(undefined2 *)(param_2 + 0x1bc) = uRame5090200;
  sync();
  do {
  } while( true );
}


