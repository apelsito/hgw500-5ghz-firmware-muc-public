/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00156ca8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00156ca8(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0x124) == 0) {
    do {
      iVar3 = 1000;
      do {
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    } while (*(int *)(param_2 + 0x124) == 0);
    iVar3 = *(int *)(param_2 + 0x124);
  }
  else {
    iVar3 = *(int *)(param_2 + 0x124);
  }
  DAT_ram_0018c25c = (uint)(iVar3 != 1);
  if (DAT_ram_0018c25c != 0) {
    FUN_ram_001565c0(param_1,param_2 + 0x118);
    iVar3 = *DAT_ram_0018c264;
    while (iVar3 != 0x101) {
      iVar3 = 1000;
      do {
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      iVar3 = *DAT_ram_0018c264;
    }
    *DAT_ram_0018c264 = 0;
    FUN_ram_0015666c(param_2 + 0x118);
    uVar1 = FUN_ram_0015659c(param_1);
    uVar2 = FUN_ram_0015659c(param_1);
    FUN_ram_000e83ec(0x12,&LAB_ram_0015a29c,uVar1,0,&LAB_ram_0015a15c,uVar2);
    _DAT_ram_e0000148 = 0xffffffff;
    sync();
    FUN_ram_00156884(param_1);
    FUN_ram_0015696c(param_1);
    FUN_ram_00156a38(param_1,0);
    FUN_ram_00156a38(param_1,1);
    if (DAT_ram_8002c93c == 0) {
      uVar2 = FUN_ram_0015659c(param_1);
      uVar1 = 0xa0000000;
    }
    else {
      uVar2 = FUN_ram_0015659c(param_1);
      uVar1 = 0x20000000;
    }
    FUN_ram_00156c34(uVar2,uVar1);
  }
  return;
}


