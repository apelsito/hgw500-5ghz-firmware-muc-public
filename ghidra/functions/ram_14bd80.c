/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014bd80 */

void FUN_ram_0014bd80(int param_1)

{
  *(char **)(param_1 + 0x5abc) = s_Dynamic_Peer_RTS_ram_001c67bc;
  *(undefined2 *)(param_1 + 0x5ac2) = 0;
  *(undefined1 *)(param_1 + 0x5ac4) = 0;
  *(undefined1 *)(param_1 + 0x5ac5) = 0;
  *(undefined1 *)(param_1 + 0x5ac6) = 0;
  *(undefined1 *)(param_1 + 0x5ac7) = 0;
  *(undefined1 *)(param_1 + 0x5ac8) = 0;
  *(undefined1 *)(param_1 + 0x5ac9) = 0;
  *(undefined1 *)(param_1 + 0x5aca) = 0;
  *(undefined1 *)(param_1 + 0x5acb) = 0;
  *(undefined2 *)(param_1 + 0x5acc) = 0xfa;
  *(undefined1 *)(param_1 + 0x5ace) = 3;
  *(undefined1 *)(param_1 + 0x5acf) = 4;
  *(undefined1 *)(param_1 + 0x5ad0) = 4;
  *(undefined1 *)(param_1 + 0x5ad1) = 0;
  *(undefined1 *)(param_1 + 0x5ac0) = 5;
  *(undefined1 *)(param_1 + 0x5ae4) = 0;
  *(undefined1 *)(param_1 + 0x5ae5) = 0;
  *(undefined1 *)(param_1 + 0x5ad2) = 2;
  *(undefined1 *)(param_1 + 0x5ae7) = 0;
  *(undefined1 *)(param_1 + 0x5ad3) = 5;
  *(undefined1 *)(param_1 + 0x5ae8) = 0;
  *(undefined1 *)(param_1 + 0x5ad4) = 0x19;
  *(undefined1 *)(param_1 + 0x5ae9) = 0;
  *(undefined4 *)(param_1 + 0x5ad8) = 0;
  *(undefined1 **)(param_1 + 0x5adc) = &LAB_ram_0014c280;
  *(undefined1 **)(param_1 + 0x5ae0) = &LAB_ram_0014c23c;
  return;
}


