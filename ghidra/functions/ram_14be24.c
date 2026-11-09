/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014be24 */

void FUN_ram_0014be24(int param_1)

{
  *(char **)(param_1 + 0x5aec) = s_AP_Dynamic_Local_RTS_ram_001c67d0;
  *(undefined2 *)(param_1 + 0x5af2) = 10;
  *(undefined1 *)(param_1 + 0x5af4) = 3;
  *(undefined1 *)(param_1 + 0x5af5) = 3;
  *(undefined1 *)(param_1 + 0x5af6) = 4;
  *(undefined1 *)(param_1 + 0x5af7) = 0;
  *(undefined1 *)(param_1 + 0x5af8) = 0;
  *(undefined1 *)(param_1 + 0x5af9) = 0;
  *(undefined1 *)(param_1 + 0x5afa) = 1;
  *(undefined1 *)(param_1 + 0x5afb) = 0;
  *(undefined2 *)(param_1 + 0x5afc) = 0;
  *(undefined1 *)(param_1 + 0x5afe) = 0;
  *(undefined1 *)(param_1 + 0x5aff) = 0;
  *(undefined1 *)(param_1 + 0x5b00) = 0;
  *(undefined1 *)(param_1 + 0x5b01) = 0;
  *(undefined1 *)(param_1 + 0x5af0) = 5;
  *(undefined1 *)(param_1 + 0x5b14) = 0;
  *(undefined1 *)(param_1 + 0x5b15) = 0;
  *(undefined1 *)(param_1 + 0x5b02) = 4;
  *(undefined1 *)(param_1 + 0x5b17) = 0;
  *(undefined1 *)(param_1 + 0x5b03) = 5;
  *(undefined1 *)(param_1 + 0x5b18) = 0;
  *(undefined1 *)(param_1 + 0x5b04) = 0x19;
  *(undefined1 *)(param_1 + 0x5b19) = 0;
  *(undefined4 *)(param_1 + 0x5b08) = 0;
  *(undefined1 **)(param_1 + 0x5b0c) = &LAB_ram_0014c340;
  *(undefined1 **)(param_1 + 0x5b10) = &LAB_ram_0014c328;
  return;
}


