/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001572a4 */

void FUN_ram_001572a4(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 uStack_19;
  undefined4 local_18;
  undefined2 local_14;
  
  if (DAT_ram_0018c25c != 0) {
    iVar1 = 6;
    uVar2 = 6;
    local_18 = DAT_ram_001aa588;
    local_14 = DAT_ram_001aa58c;
    do {
      FUN_ram_001563ac(7,param_1,(&uStack_19)[uVar2],0,1);
      iVar1 = iVar1 + -1;
      uVar2 = uVar2 - 1 & 0xff;
    } while (iVar1 != 0);
    FUN_ram_001563ac(4,param_1,0,0,1);
  }
  return;
}


