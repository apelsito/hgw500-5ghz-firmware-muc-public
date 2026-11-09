/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00109450 */

void FUN_ram_00109450(int param_1,int param_2)

{
  int iVar1;
  
  param_1 = param_1 + 0x7e0;
  iVar1 = param_2 * 0x4c;
  FUN_ram_000ee260(s_BA___d__state_tx__d_winstart_o___ram_001c0198,param_2,
                   *(undefined1 *)(param_1 + iVar1 + 0x3f),*(undefined2 *)(param_1 + iVar1 + 0x16),
                   *(undefined2 *)(param_1 + iVar1 + 0x18),*(undefined2 *)(param_1 + iVar1 + 0x1c),
                   *(undefined2 *)(param_1 + iVar1 + 0x1a),*(undefined1 *)(param_1 + iVar1 + 0x3e),
                   *(undefined2 *)(param_1 + iVar1 + 0x44));
  FUN_ram_000ee260(s_BA___d__state_rx__d_winstart_b___ram_001c01f4,param_2,
                   *(undefined1 *)(param_1 + iVar1 + 0x40),*(undefined2 *)(param_1 + iVar1),
                   *(undefined2 *)(param_1 + iVar1 + 4),*(undefined2 *)(param_1 + iVar1 + 2),
                   *(undefined2 *)(param_1 + iVar1 + 0xc));
  return;
}


