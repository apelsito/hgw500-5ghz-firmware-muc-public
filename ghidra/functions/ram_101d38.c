/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00101d38 */

/* WARNING: Removing unreachable block (ram,0x00101d74) */

void FUN_ram_00101d38(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x56c);
  *puVar1 = 0xb000;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined4 **)(param_1 + 0x5a0) = puVar1;
  puVar1[3] = 0x1020001;
  return;
}


