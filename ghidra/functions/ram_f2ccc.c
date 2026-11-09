/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f2ccc */

void FUN_ram_000f2ccc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  uVar2 = FUN_ram_000f5e44();
  (&DAT_ram_001d4448)[DAT_ram_0018c050 * 8] = DAT_ram_80038ee0;
  uVar1 = COUNT0;
  (&DAT_ram_001d444c)[DAT_ram_0018c050 * 8] = uVar1;
  (&DAT_ram_001d4444)[DAT_ram_0018c050 * 8] = uVar2;
  (&DAT_ram_001d4450)[DAT_ram_0018c050 * 8] = in_stack_00000004;
  (&DAT_ram_001d4454)[DAT_ram_0018c050 * 8] = in_stack_00000008;
  (&DAT_ram_001d4458)[DAT_ram_0018c050 * 8] = in_stack_0000000c;
  (&DAT_ram_001d445c)[DAT_ram_0018c050 * 8] = in_stack_00000010;
  (&DAT_ram_001d4460)[DAT_ram_0018c050 * 8] = in_stack_00000014;
  DAT_ram_0018c050 = DAT_ram_0018c050 + 1 & 0x3ff;
  return;
}


