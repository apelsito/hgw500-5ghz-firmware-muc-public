/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014bec8 */

void FUN_ram_0014bec8(int param_1)

{
  *(char **)(param_1 + 0x5b1c) = s_Station_Dynamic_Local_RTS_ram_001c67e8;
  *(undefined2 *)(param_1 + 0x5b22) = 10;
  *(undefined1 *)(param_1 + 0x5b24) = 0;
  *(undefined1 *)(param_1 + 0x5b25) = 0;
  *(undefined1 *)(param_1 + 0x5b26) = 1;
  *(undefined1 *)(param_1 + 0x5b27) = 2;
  *(undefined1 *)(param_1 + 0x5b28) = 0;
  *(undefined1 *)(param_1 + 0x5b29) = 0;
  *(undefined1 *)(param_1 + 0x5b2a) = 1;
  *(undefined1 *)(param_1 + 0x5b2b) = 0;
  *(undefined2 *)(param_1 + 0x5b2c) = 0;
  *(undefined1 *)(param_1 + 0x5b2e) = 0;
  *(undefined1 *)(param_1 + 0x5b2f) = 0;
  *(undefined1 *)(param_1 + 0x5b30) = 0;
  *(undefined1 *)(param_1 + 0x5b31) = 0;
  *(undefined1 *)(param_1 + 0x5b20) = 2;
  *(undefined1 *)(param_1 + 0x5b44) = 0;
  *(undefined1 *)(param_1 + 0x5b45) = 0;
  *(undefined1 *)(param_1 + 0x5b32) = 4;
  *(undefined1 *)(param_1 + 0x5b47) = 0;
  *(undefined1 *)(param_1 + 0x5b33) = 5;
  *(undefined1 *)(param_1 + 0x5b48) = 0;
  *(undefined1 *)(param_1 + 0x5b34) = 0x19;
  *(undefined1 *)(param_1 + 0x5b49) = 0;
  *(undefined1 **)(param_1 + 0x5b38) = &LAB_ram_0014c3bc;
  *(undefined1 **)(param_1 + 0x5b3c) = &LAB_ram_0014c3e0;
  *(undefined1 **)(param_1 + 0x5b40) = &LAB_ram_0014c3a4;
  return;
}


