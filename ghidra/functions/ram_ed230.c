/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ed230 */

undefined4 FUN_ram_000ed230(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = param_1 & 0xffffffe0;
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  uVar2 = CHE_MODE;
  if (((uVar2 ^ 1) & 1) != 0) {
    iVar4 = (param_2 + param_1 + 0x1f & 0xffffffe0) - uVar5;
    do {
      if (iVar4 == 0) {
        uVar3 = 0;
        goto LAB_ram_000ed2a0;
      }
      LOCKLINE = uVar5;
      uVar5 = uVar5 + 0x20;
      uVar2 = CHE_MODE;
      iVar4 = iVar4 + -0x20;
    } while ((uVar2 & 8) != 0);
  }
  uVar3 = 1;
LAB_ram_000ed2a0:
  STATUS32 = uVar1;
  return uVar3;
}


