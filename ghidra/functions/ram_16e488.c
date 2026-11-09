/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016e488 */

uint FUN_ram_0016e488(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  if ((&AUX_IRQ_HINT <= *(undefined **)(&DAT_ram_0018c2b8 + DAT_ram_0018c2f0 * 2)) &&
     (*(undefined **)(&DAT_ram_0018c2b8 + DAT_ram_0018c2f0 * 2) <= &UNK_auxregs_02ff)) {
    if ((0x21 < param_1) && (param_1 < 0x44)) {
      return 0;
    }
    if ((99 < param_1) && (param_1 < 0x78)) {
      return 1;
    }
    if (param_1 < 0x78) {
      if (param_1 < 0x8c) goto LAB_ram_0016e4f8;
    }
    else if (param_1 < 0x8c) {
      return 2;
    }
    if (param_1 < 0xa0) {
      return 3;
    }
LAB_ram_0016e4f8:
    if (param_1 < 0xa0) {
      if (param_1 < 0xb4) {
        return 0xffffffff;
      }
    }
    else if (param_1 < 0xb4) {
      return 4;
    }
    if (199 < param_1) {
      return 0xffffffff;
    }
    return 5;
  }
  iVar2 = DAT_ram_0018c2f0 * 500 + param_2 * 100;
  if (param_1 < (int)(uint)*(ushort *)(&DAT_ram_00192e3c + iVar2)) {
    if ((int)(uint)*(ushort *)(iVar2 + 0x192e46) <= param_1) {
      uVar1 = *(ushort *)(iVar2 + 0x192e4a);
joined_r0x0016e570:
      if (param_1 < (int)(uint)uVar1) {
        return (uint)*(ushort *)(iVar2 + 0x192e4c);
      }
    }
  }
  else {
    if (param_1 < (int)(uint)*(ushort *)(iVar2 + 0x192e40)) {
      return (uint)*(ushort *)(iVar2 + 0x192e42);
    }
    if ((int)(uint)*(ushort *)(iVar2 + 0x192e46) <= param_1) {
      uVar1 = *(ushort *)(iVar2 + 0x192e4a);
      goto joined_r0x0016e570;
    }
  }
  if (param_1 < (int)(uint)*(ushort *)(iVar2 + 0x192e50)) {
    if (param_1 < (int)(uint)*(ushort *)(iVar2 + 0x192e5a)) goto LAB_ram_0016e5b4;
    uVar1 = *(ushort *)(iVar2 + 0x192e5e);
  }
  else {
    if (param_1 < (int)(uint)*(ushort *)(iVar2 + 0x192e54)) {
      return (uint)*(ushort *)(iVar2 + 0x192e56);
    }
    if (param_1 < (int)(uint)*(ushort *)(iVar2 + 0x192e5a)) goto LAB_ram_0016e5b4;
    uVar1 = *(ushort *)(iVar2 + 0x192e5e);
  }
  if (param_1 < (int)(uint)uVar1) {
    return (uint)*(ushort *)(iVar2 + 0x192e60);
  }
LAB_ram_0016e5b4:
  if (param_1 < (int)(uint)*(ushort *)(iVar2 + 0x192e64)) {
    if (param_1 < (int)(uint)*(ushort *)(iVar2 + 0x192e6e)) {
      return 0xffffffff;
    }
    uVar1 = *(ushort *)(iVar2 + 0x192e72);
  }
  else {
    if (param_1 < (int)(uint)*(ushort *)(iVar2 + 0x192e68)) {
      return (uint)*(ushort *)(iVar2 + 0x192e6a);
    }
    if (param_1 < (int)(uint)*(ushort *)(iVar2 + 0x192e6e)) {
      return 0xffffffff;
    }
    uVar1 = *(ushort *)(iVar2 + 0x192e72);
  }
  if ((int)(uint)uVar1 <= param_1) {
    return 0xffffffff;
  }
  return (uint)*(ushort *)(iVar2 + 0x192e74);
}


