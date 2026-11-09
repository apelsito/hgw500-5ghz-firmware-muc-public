/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e44c0 */

uint * FUN_ram_000e44c0(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5,
                       uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                       undefined1 param_10,byte param_11,byte param_12)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_2 + 0x1e4);
  uVar4 = (uint)param_12;
  iVar1 = FUN_ram_000e3a84(param_6,uVar4);
  iVar5 = 0;
  if ((int)(uint)param_11 < iVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_ram_000e43f0(param_7,param_8,param_9,param_10,iVar1);
    if (uVar2 != 0) {
      iVar5 = (uint)(param_5 != 0) * 2;
    }
  }
  uVar3 = 1 - uVar4;
  if (1 < uVar4) {
    uVar3 = 0;
  }
  uVar3 = iVar5 << 0x1d | (uVar3 & 1) << 8 | param_6 | (param_3 & 3) << 9 | 0x6000000;
  uVar4 = (uVar2 & 0x3ff) << 0x10 | (uint)(uVar4 != 0) << 0xf | uVar6 & 0x7fff;
  *(uint *)(param_1 + 0x4c) = uVar3;
  *(uint *)(param_1 + 0x50) = uVar4;
  *(uint *)(param_1 + 0x54) = uVar3;
  *(uint *)(param_1 + 0x58) = uVar4;
  *(uint *)(param_1 + 0x5c) = uVar3;
  *(uint *)(param_1 + 0x60) = uVar4;
  *(uint *)(param_1 + 100) = uVar3;
  *(uint *)(param_1 + 0x68) = uVar4;
  return (uint *)(param_1 + 0x4c);
}


