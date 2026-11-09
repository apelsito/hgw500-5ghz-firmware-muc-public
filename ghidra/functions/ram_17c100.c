/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017c100 */

void FUN_ram_0017c100(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x1000;
  param_1 = param_1 * 0x40;
  *(undefined4 *)(&DAT_ram_e60a1000 + iVar1) = *(undefined4 *)(&DAT_ram_00211870 + param_1);
  *(undefined4 *)(&DAT_ram_e60a1004 + iVar1) = *(undefined4 *)(&DAT_ram_00211874 + param_1);
  *(undefined4 *)(&DAT_ram_e60a1038 + iVar1) = *(undefined4 *)(&DAT_ram_00211878 + param_1);
  *(undefined4 *)(&DAT_ram_e60a103c + iVar1) = *(undefined4 *)(&DAT_ram_0021187c + param_1);
  *(undefined4 *)(&DAT_ram_e60a1070 + iVar1) = *(undefined4 *)(&DAT_ram_00211880 + param_1);
  *(undefined4 *)(&DAT_ram_e60a1074 + iVar1) = *(undefined4 *)(&DAT_ram_00211884 + param_1);
  *(undefined4 *)(&DAT_ram_e60a10a8 + iVar1) = *(undefined4 *)(&DAT_ram_00211888 + param_1);
  *(undefined4 *)(&DAT_ram_e60a10ac + iVar1) = *(undefined4 *)(&DAT_ram_0021188c + param_1);
  *(undefined4 *)(iVar1 + -0x19f5ef20) = *(undefined4 *)(&DAT_ram_00211890 + param_1);
  *(undefined4 *)(iVar1 + -0x19f5ef1c) = *(undefined4 *)(&DAT_ram_00211894 + param_1);
  *(undefined4 *)(iVar1 + -0x19f5eee8) = *(undefined4 *)(&DAT_ram_00211898 + param_1);
  *(undefined4 *)(iVar1 + -0x19f5eee4) = *(undefined4 *)(&DAT_ram_0021189c + param_1);
  *(undefined4 *)(iVar1 + -0x19f5eeb0) = *(undefined4 *)(&DAT_ram_002118a0 + param_1);
  *(undefined4 *)(iVar1 + -0x19f5eeac) = *(undefined4 *)(&DAT_ram_002118a4 + param_1);
  *(undefined4 *)(iVar1 + -0x19f5ee78) = *(undefined4 *)(&DAT_ram_002118a8 + param_1);
  *(undefined4 *)(iVar1 + -0x19f5ee74) = *(undefined4 *)(&DAT_ram_002118ac + param_1);
  return;
}


