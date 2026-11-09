/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00140510 */

undefined4 FUN_ram_00140510(int param_1,int param_2,uint *param_3)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x4b8) == '\0') {
    uVar1 = *param_3;
    *(char *)(param_1 + 0x4b8) =
         (char)*(undefined2 *)(param_2 + 8) + (&DAT_ram_001a90a8)[*(int *)(param_1 + 0x4bc)];
    if ((uVar1 & 1) == 0) {
      if ((uVar1 & 0x10) != 0) {
        *(undefined1 *)(param_1 + 0x4b8) = 10;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x4b8) = 2;
    }
    *(uint *)(param_1 + 0x4bc) = *(int *)(param_1 + 0x4bc) + 1U & 0x7f;
    return 1;
  }
  *(char *)(param_1 + 0x4b8) = *(char *)(param_1 + 0x4b8) + -1;
  return 0;
}


