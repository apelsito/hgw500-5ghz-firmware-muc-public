/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014bcd8 */

void FUN_ram_0014bcd8(int param_1)

{
  *(char **)(param_1 + 0x5b4c) = s_Dynamic_WMM_ram_001c67b0;
  *(undefined1 *)(param_1 + 0x5b50) = 5;
  *(undefined2 *)(param_1 + 0x5b52) = 0x32;
  *(undefined1 *)(param_1 + 0x5b54) = 3;
  *(undefined1 *)(param_1 + 0x5b55) = 0;
  *(undefined1 *)(param_1 + 0x5b56) = 4;
  *(undefined1 *)(param_1 + 0x5b57) = 0;
  *(undefined1 *)(param_1 + 0x5b58) = 0;
  *(undefined1 *)(param_1 + 0x5b59) = 0;
  *(undefined1 *)(param_1 + 0x5b5a) = 0;
  *(undefined1 *)(param_1 + 0x5b5b) = 0;
  *(undefined2 *)(param_1 + 0x5b5c) = 0;
  *(undefined1 *)(param_1 + 0x5b5e) = 0;
  *(undefined1 *)(param_1 + 0x5b5f) = 0;
  *(undefined1 *)(param_1 + 0x5b60) = 0;
  *(undefined1 *)(param_1 + 0x5b61) = 0;
  *(undefined1 *)(param_1 + 0x5b74) = 0;
  *(undefined1 *)(param_1 + 0x5b75) = 0;
  *(undefined1 *)(param_1 + 0x5b62) = 2;
  *(undefined1 *)(param_1 + 0x5b77) = 0;
  *(undefined1 *)(param_1 + 0x5b63) = 5;
  *(undefined1 *)(param_1 + 0x5b78) = 0;
  *(undefined1 *)(param_1 + 0x5b64) = 0x19;
  *(undefined1 *)(param_1 + 0x5b79) = 0;
  *(undefined1 **)(param_1 + 0x5b68) = &LAB_ram_0014c134;
  *(undefined1 **)(param_1 + 0x5b6c) = &LAB_ram_0014c190;
  *(undefined1 **)(param_1 + 0x5b70) = &LAB_ram_0014c0e0;
  return;
}


