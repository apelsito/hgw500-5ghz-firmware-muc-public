/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015cae4 */

void FUN_ram_0015cae4(int param_1,uint param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_3;
  if ((uVar2 < 0x80000000) || (0x8007ffff < uVar2)) {
    if (uVar2 < 0x8000000) {
      uVar1 = uVar2 + 0x40000000;
      goto LAB_ram_0015cb24;
    }
    uVar1 = uVar2;
    if (0xbfffffff < uVar2) goto LAB_ram_0015cb24;
  }
  else {
    uVar1 = uVar2 + 0xe0000000;
LAB_ram_0015cb24:
    if (uVar1 != 0) goto LAB_ram_0015cb7c;
  }
  if ((uVar2 < 0x60000000) || (0x6007ffff < uVar2)) {
    if ((uVar2 < 0x40000000) || (0x47ffffff < uVar2)) {
      if (uVar2 < 0xc0000000) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = uVar2 + 0xc0000000;
    }
  }
  else {
    uVar2 = uVar2 + 0x20000000;
  }
LAB_ram_0015cb7c:
  *(uint *)(*(int *)(param_1 + 0xc) + param_2 * 4 + 0x2090) = uVar2;
  *(uint *)(*(int *)(param_1 + 0xc) + 0x20a0) =
       *(uint *)(*(int *)(param_1 + 0xc) + 0x20a0) & ~(1 << (param_2 & 0x1f));
  return;
}


