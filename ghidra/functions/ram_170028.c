/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00170028 */

void FUN_ram_00170028(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = FUN_ram_001711e0(0x298,0x1c000,0xe);
  *param_1 = uVar1;
  uVar1 = FUN_ram_001711e0(0x2a0,0xc,2);
  *param_2 = uVar1;
  return;
}


