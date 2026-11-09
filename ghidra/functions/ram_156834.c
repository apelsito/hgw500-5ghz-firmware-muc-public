/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00156834 */

void FUN_ram_00156834(undefined4 *param_1,int param_2)

{
  undefined4 local_8 [2];
  
  local_8[0] = CONCAT22(*(undefined2 *)(*(int *)(param_2 + 0x3b20) + 0x1fc),
                        *(undefined2 *)(*(int *)(param_2 + 0x3b20) + 0x1c4));
  FUN_ram_001567ec(DAT_ram_0018c278 + 0x20 + (uint)*(ushort *)*param_1 * 0x30,local_8,4);
  return;
}


