/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00109100 */

undefined4 FUN_ram_00109100(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_ram_000e7d50(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0x14);
  do {
    if (iVar1 == 0) {
      uVar2 = 0;
LAB_ram_00109134:
      FUN_ram_000e7da8(param_1 + 4);
      return uVar2;
    }
    if (*(char *)(iVar1 + 0x2c) == '\x02') {
      uVar2 = 1;
      goto LAB_ram_00109134;
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}


