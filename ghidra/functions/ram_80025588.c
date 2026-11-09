/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80025588 */

void FUN_ram_80025588(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  uVar3 = param_1 & 0xffffffe0;
  uVar2 = DC_CTRL;
  if (((uVar2 ^ 1) & 1) != 0) {
    uVar2 = DC_CTRL;
    DC_CTRL = uVar2 & 0xffffffbf;
    for (; uVar3 < (param_2 + param_1 + 0x1f & 0xffffffe0); uVar3 = uVar3 + 0x20) {
      DC_IVDL = uVar3;
    }
  }
  STATUS32 = uVar1;
  return;
}


