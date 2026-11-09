/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ec0ec */

void FUN_ram_000ec0ec(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_ilink1;
  undefined4 in_ilink2;
  undefined4 extraout_blink;
  
  iVar2 = FUN_ram_000e5c34();
  FUN_ram_000eaac4(0,s_Firmware_build_version___s_ram_001bd4cc,iVar2 + 0xf4);
  FUN_ram_000eaac4(0,s_Hardware_ID____d_ram_001bd4e8,*(undefined4 *)(iVar2 + 0xe8));
  uVar1 = STATUS32;
  FUN_ram_000eaac4(0,s_Call_stack__blink_candidates___c_ram_001bd508,extraout_blink,&stack0xffffffec
                   ,in_ilink1,in_ilink2,uVar1);
  FUN_ram_000ebee4(&stack0xffffffec);
  return;
}


