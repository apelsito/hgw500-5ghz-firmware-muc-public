/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018b004 */

void FUN_ram_0018b004(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = FUN_ram_000f939c(*(undefined4 *)(param_1 + 0x3b20),0xb,0,0);
  uVar2 = 1 << (uVar2 & 0x1f);
  if (param_2 == 0) {
    uVar3 = STATUS32;
    if ((uVar3 & 6) != 0) {
      STATUS32 = uVar3 & 0xfffffff9;
    }
    uVar1 = AUX_IENABLE;
    AUX_IENABLE = uVar1 & ~uVar2;
  }
  else {
    uVar3 = STATUS32;
    if ((uVar3 & 6) != 0) {
      STATUS32 = uVar3 & 0xfffffff9;
    }
    uVar1 = AUX_IENABLE;
    AUX_IENABLE = uVar2 | uVar1;
  }
  STATUS32 = uVar3;
  return;
}


