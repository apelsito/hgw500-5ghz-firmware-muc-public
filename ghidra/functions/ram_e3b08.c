/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e3b08 */

void FUN_ram_000e3b08(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                     uint param_6,int param_7,uint param_8,undefined4 param_9,byte param_10)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (uint)(byte)DAT_ram_0018c100;
  uVar5 = (uint)param_10;
  if (uVar5 == 0) {
    uVar6 = *(uint *)(param_2 + 0x1fc);
    iVar1 = FUN_ram_000e5c84();
    if (iVar1 == 2) {
      uVar4 = 3;
      uVar2 = 0;
      iVar1 = 0;
      goto joined_r0x000e3b98;
    }
  }
  else {
    uVar6 = *(uint *)(param_2 + 0x210);
    iVar1 = FUN_ram_000e5c84();
    if (iVar1 == 2) {
      uVar4 = 3;
      iVar1 = 2;
      uVar2 = 0x382;
      goto joined_r0x000e3b98;
    }
  }
  uVar2 = 0;
  iVar1 = 0;
joined_r0x000e3b98:
  if (param_7 == 5) {
    iVar1 = 5;
  }
  else if (param_7 != 0) {
    iVar1 = 2;
    uVar2 = param_6;
  }
  uVar3 = 1 - uVar5;
  if (1 < uVar5) {
    uVar3 = 0;
  }
  uVar3 = (uVar3 & 1) << 8 | param_8 | (param_4 & 3) << 9 | (uVar4 & 3) << 0x19 | iVar1 << 0x1d;
  uVar4 = (uint)(uVar5 != 0) << 0x1f |
          (uVar2 & 0x3ff) << 0x10 | (uint)(uVar5 != 0) << 0xf | uVar6 & 0x7fff;
  *(uint *)(param_1 + 0x4c) = uVar3;
  *(uint *)(param_1 + 0x50) = uVar4;
  *(uint *)(param_1 + 0x54) = uVar3;
  *(uint *)(param_1 + 0x58) = uVar4;
  *(uint *)(param_1 + 0x5c) = uVar3;
  *(uint *)(param_1 + 0x60) = uVar4;
  *(uint *)(param_1 + 100) = uVar3;
  *(uint *)(param_1 + 0x68) = uVar4;
  return;
}


