/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00101d94 */

void FUN_ram_00101d94(int param_1)

{
  if (DAT_ram_0018c420 != 0) {
    FUN_ram_000ee260(s_size_of_hal_tcm_wmac1_layout___d_ram_001bf9b8,0xff0);
  }
  *(undefined4 *)(param_1 + 0x4ac) = 0xe5140000;
  *(undefined4 *)(param_1 + 0x4b0) = 0xe5140d50;
  *(undefined4 *)(param_1 + 0x56c) = 0xe5140d40;
  FUN_ram_00101d38(param_1);
  *(undefined4 *)(param_1 + 0x52c) = 0xe5140080;
  *(undefined4 *)(param_1 + 0x530) = 0xe5140234;
  *(undefined4 *)(param_1 + 0x534) = 0xe51403e8;
  FUN_ram_000ffb74(param_1,1);
  *(undefined4 *)(param_1 + 0x544) = 0xe514059c;
  *(undefined4 *)(param_1 + 0x548) = 0xe5140750;
  *(undefined4 *)(param_1 + 0x54c) = 0xe5140904;
  FUN_ram_00100a7c(param_1,1);
  *(undefined4 *)(param_1 + 0x55c) = 0xe5140ab8;
  *(undefined4 *)(param_1 + 0x560) = 0xe5140b90;
  *(undefined4 *)(param_1 + 0x564) = 0xe5140c68;
  FUN_ram_00101728(param_1,1);
  DAT_ram_0018c088 = 1;
  return;
}


