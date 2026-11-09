/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00157dc0 */

void FUN_ram_00157dc0(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_2c;
  undefined2 local_28;
  
  if (DAT_ram_0018c25c != 0) {
    if (param_3 != 0) {
      local_2c = DAT_ram_001aa5b0;
      local_28 = DAT_ram_001aa5b4;
      uVar1 = STATUS32;
      if ((uVar1 & 2) != 0) {
        STATUS32 = uVar1 & 0xfffffffd;
      }
      uVar4 = 0;
      FUN_ram_001563ac(0x1f,0,0,0,2);
      FUN_ram_00157784(param_1,param_2);
      iVar3 = 6;
      do {
        FUN_ram_00157b04(param_1,param_2,*(undefined1 *)((int)&local_2c + uVar4),param_4);
        piVar2 = DAT_ram_0018c260;
        iVar3 = iVar3 + -1;
        uVar4 = uVar4 + 1 & 0xff;
      } while (iVar3 != 0);
      *DAT_ram_0018c260 = 0x20;
      iVar3 = *piVar2;
      while (iVar3 != 0) {
        iVar3 = 100;
        do {
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        iVar3 = *piVar2;
      }
      FUN_ram_001563ac(0x14,*(undefined1 *)(param_2 + 0x67c),0,0,1);
      STATUS32 = uVar1;
    }
    *(char *)(param_2 + 0x4e5) = (char)param_3;
    FUN_ram_0013d37c(param_2);
    FUN_ram_00157cd0(*(undefined1 *)(param_2 + 0x67c),param_3);
  }
  return;
}


