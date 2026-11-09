/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00157f18 */

void FUN_ram_00157f18(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (DAT_ram_0018c25c != 0) {
    uVar1 = STATUS32;
    if ((uVar1 & 2) != 0) {
      STATUS32 = uVar1 & 0xfffffffd;
    }
    uVar3 = FUN_ram_00155e14(*(undefined1 *)(param_1 + 0x67c));
    FUN_ram_001563ac(0x1f,0,0,0,2);
    FUN_ram_00157328(uVar3,param_1);
    piVar2 = DAT_ram_0018c260;
    *DAT_ram_0018c260 = 0x20;
    iVar4 = *piVar2;
    while (iVar4 != 0) {
      iVar4 = 100;
      do {
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar4 = *piVar2;
    }
    STATUS32 = uVar1;
  }
  return;
}


