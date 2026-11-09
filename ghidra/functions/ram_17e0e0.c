/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017e0e0 */

uint FUN_ram_0017e0e0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar2 = (uint)DAT_ram_0018c363;
  uVar5 = 0x78;
  uVar3 = 0x77;
  iVar1 = param_2 * 0xf2 + uVar2 * 0x3c8;
  iVar7 = 0x78;
  LP_START = 0x17e148;
  LP_END = 0x17e164;
  do {
    if ((short)(&DAT_ram_0021ed54)[uVar3 + uVar2 * 0x1e4 + param_2 * 0x79] <
        (short)(&DAT_ram_0021ed56)[uVar3 + uVar2 * 0x1e4 + param_2 * 0x79]) {
      uVar5 = uVar3 & 0xffff;
      if (DAT_ram_0018c3b8 == '\x03') {
        FUN_ram_000ee260(s_chain__d__turning_top____d__ram_001ca5ac,param_2,uVar5);
        iVar1 = param_2 * 0xf2 + (uint)DAT_ram_0018c363 * 0x3c8;
      }
      break;
    }
    uVar3 = uVar3 - 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  uVar2 = 0;
  iVar7 = 0x79;
  LP_START = 0x17e1bc;
  LP_END = 0x17e1d8;
  do {
    if (*(short *)((int)&DAT_ram_0021ed54 + iVar1 + uVar2 * 2) <
        *(short *)((int)&DAT_ram_0021ed56 + iVar1 + uVar2 * 2)) {
      uVar2 = uVar2 & 0xffff;
      if (DAT_ram_0018c3b8 == '\x03') {
        FUN_ram_000ee260(s_turning_bottom____d_ram_001ca5cc,uVar2);
        iVar1 = param_2 * 0xf2 + (uint)DAT_ram_0018c363 * 0x3c8;
      }
      goto LAB_ram_0017e214;
    }
    uVar2 = uVar2 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  uVar2 = 0;
LAB_ram_0017e214:
  iVar4 = (int)*(short *)((int)&DAT_ram_0021ed54 + iVar1 + uVar2 * 2);
  iVar7 = iVar4 - param_1;
  if (iVar7 < 0) {
    iVar7 = param_1 - iVar4;
  }
  uVar3 = 0;
  if (uVar2 <= uVar5) {
    uVar6 = uVar2;
    uVar3 = 0;
    while( true ) {
      iVar1 = (int)*(short *)((int)&DAT_ram_0021ed54 + iVar1 + uVar6 * 2);
      iVar4 = iVar1 - param_1;
      if (iVar4 < 0) {
        iVar4 = param_1 - iVar1;
      }
      if (DAT_ram_0018c3b8 == '\x04') {
        FUN_ram_000ee260(s_get_tx_current_power__idx__d__t__ram_001ca5e4,uVar6,iVar1,param_1,iVar4);
      }
      if ((iVar7 < iVar4) || (uVar3 = uVar6, (int)uVar5 < (int)(uVar6 + 1))) break;
      iVar1 = (uint)DAT_ram_0018c363 * 0x3c8 + param_2 * 0xf2;
      uVar6 = uVar6 + 1;
      iVar7 = iVar4;
    }
  }
  DAT_ram_0018c3d8 = (short)uVar5;
  DAT_ram_0018c3da = (short)uVar2;
  return uVar3;
}


