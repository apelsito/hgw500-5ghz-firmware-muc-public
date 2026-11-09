/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00108288 */

undefined4 FUN_ram_00108288(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_ram_8002c8bc == '\x03') {
    if (*(int *)(param_1 + 0x3f7c) != 0) {
      uVar1 = 0;
      do {
        iVar2 = uVar1 * 0x38;
        uVar1 = uVar1 + 1;
        FUN_ram_0018bb50(param_1,param_1 + 0x3dbc + iVar2);
        FUN_ram_0018bb50(param_1,param_1 + 0x3e9c + iVar2);
      } while (uVar1 < *(uint *)(param_1 + 0x3f7c));
    }
    FUN_ram_000f938c(*(undefined4 *)(param_1 + 0x3b20),param_2);
    FUN_ram_000f949c(*(undefined4 *)(param_1 + 0x3b20));
  }
  return 0;
}


