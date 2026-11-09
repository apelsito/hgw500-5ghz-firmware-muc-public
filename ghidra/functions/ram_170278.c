/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00170278 */

void FUN_ram_00170278(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uVar1 = FUN_ram_001794b8();
  uVar2 = FUN_ram_001794dc();
  uVar3 = FUN_ram_00179568(uVar1);
  FUN_ram_001795a0(&local_1c,uVar1);
  FUN_ram_0018a358(uVar2,uVar2,uVar2,uVar2,uVar2);
  FUN_ram_00183ee0(uVar3);
  FUN_ram_0018ae90(local_1c,uStack_18,uStack_14);
  if (DAT_ram_8002c8bc == '\x03') {
    FUN_ram_00179584(uVar1);
    FUN_ram_0018ae7c();
  }
  return;
}


