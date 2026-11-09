/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00106394 */

void FUN_ram_00106394(void)

{
  undefined1 auStack_184 [188];
  undefined1 auStack_c8 [188];
  
  FUN_ram_00106318(auStack_c8);
  thunk_FUN_ram_0039fe00(&DAT_ram_002017bc,auStack_184,0xbc);
  thunk_FUN_ram_0039fe00(&DAT_ram_00201878,auStack_c8,0xbc);
  return;
}


