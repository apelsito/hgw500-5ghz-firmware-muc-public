/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014aa88 */

void FUN_ram_0014aa88(int param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x402e) != '\0') {
      FUN_ram_0014a9a0();
      *(undefined1 *)(param_1 + 0x402e) = 0;
      return;
    }
  }
  else if (*(char *)(param_1 + 0x402e) == '\0') {
    FUN_ram_0014a894();
    *(undefined1 *)(param_1 + 0x402e) = 1;
    return;
  }
  return;
}


