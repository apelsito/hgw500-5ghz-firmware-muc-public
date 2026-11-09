/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ecf70 */

void FUN_ram_000ecf70(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  uVar2 = DC_CTRL;
  uVar3 = param_1 + param_2;
  if (((uVar2 ^ 1) & 1) != 0) {
    if (((param_1 & 0x1f) != 0) || ((param_2 & 0x1f) != 0)) {
      FUN_ram_000ee260(s_Addr__p_and_size__x_must_be_cach_ram_001bd708,param_1,param_2);
    }
    uVar2 = DC_CTRL;
    DC_CTRL = uVar2 & 0xffffffbf;
    for (; param_1 < uVar3; param_1 = param_1 + 0x20) {
      DC_IVDL = param_1;
    }
  }
  STATUS32 = uVar1;
  return;
}


