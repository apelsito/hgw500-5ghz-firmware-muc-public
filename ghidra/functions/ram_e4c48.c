/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e4c48 */

uint * FUN_ram_000e4c48(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
                       int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar5 = (uint)(byte)DAT_ram_0018c100;
  uVar4 = 0;
  if ((param_6 == 0) || (param_3 != 0 || param_7 != 0)) {
    iVar8 = 0;
    if (param_7 == 0) {
      if (param_6 != 0) goto LAB_ram_000e4cfc;
      uVar9 = (uint)*(ushort *)(param_2 + 0x1e4);
      iVar1 = FUN_ram_000e5c84();
      uVar7 = 8;
      if (iVar1 == 2) goto LAB_ram_000e4d18;
      iVar1 = 0;
      uVar6 = 0;
    }
    else {
      uVar9 = (uint)*(ushort *)(param_2 + 0x20c);
      iVar1 = FUN_ram_000e5c84();
      if (iVar1 == 2) {
        uVar7 = 0;
        goto LAB_ram_000e4d18;
      }
      iVar1 = 0;
      uVar6 = 0;
      uVar7 = 0;
    }
  }
  else {
    iVar8 = 1;
LAB_ram_000e4cfc:
    uVar9 = (uint)*(ushort *)(param_2 + 0x20c);
    iVar1 = FUN_ram_000e5c84();
    uVar6 = 0;
    if (iVar1 == 2) {
      uVar7 = 0;
LAB_ram_000e4d18:
      iVar1 = FUN_ram_000e3a84(uVar7,param_6);
      uVar5 = 3;
      uVar6 = (uint)(iVar1 != 0) * 0x10 + 0x372;
      iVar1 = 2;
    }
    else {
      iVar1 = 0;
      uVar7 = 0;
    }
  }
  if (param_3 == 0) {
    if ((param_6 != 0) || (param_7 != 0)) goto LAB_ram_000e4d5c;
LAB_ram_000e4d68:
    iVar2 = 1;
  }
  else if (param_7 == 0) {
    param_4 = 0;
    if (param_6 == 0) goto LAB_ram_000e4d68;
    iVar2 = 0;
  }
  else {
LAB_ram_000e4d5c:
    iVar2 = 0;
  }
  iVar3 = 0;
  uVar5 = iVar8 << 0x1b |
          iVar2 << 8 | uVar7 | (param_4 & 3) << 9 | (uVar5 & 3) << 0x19 | iVar1 << 0x1d;
  if (param_6 == 0) goto LAB_ram_000e4dec;
  if (((param_3 == 0) && (param_7 == 0)) && (uVar7 < 0x6d)) {
    uVar4 = (uint)(byte)(&DAT_ram_0018c430)[param_4 + uVar7 * 3];
LAB_ram_000e4de4:
    if (param_7 == 0) {
      iVar3 = 1;
      goto LAB_ram_000e4dec;
    }
  }
  else {
    uVar4 = 0;
    if (param_3 == 0) goto LAB_ram_000e4de4;
  }
  iVar3 = 0;
LAB_ram_000e4dec:
  uVar4 = iVar3 << 0xf | uVar9 & 0x7fff | (uVar6 & 0x3ff) << 0x10 | (uVar4 & 7) << 0x1c | 0x80000000
  ;
  *(uint *)(param_1 + 0x4c) = uVar5;
  *(uint *)(param_1 + 0x50) = uVar4;
  *(uint *)(param_1 + 0x54) = uVar5;
  *(uint *)(param_1 + 0x58) = uVar4;
  *(uint *)(param_1 + 0x5c) = uVar5;
  *(uint *)(param_1 + 0x60) = uVar4;
  *(uint *)(param_1 + 100) = uVar5;
  *(uint *)(param_1 + 0x68) = uVar4;
  return (uint *)(param_1 + 0x4c);
}


