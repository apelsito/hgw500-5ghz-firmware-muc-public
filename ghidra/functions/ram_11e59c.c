/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011e59c */

void FUN_ram_0011e59c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3b20);
  uVar1 = *(uint *)(*(int *)(iVar2 + 0xc) + 0x478) & 0xfc3fffff;
  if (DAT_ram_0018c140 == 0x14) {
    uVar1 = uVar1 | 0x400000;
  }
  else if (DAT_ram_0018c140 == 0x28) {
    uVar1 = uVar1 | 0x800000;
    if (param_2 != 0) {
      if (param_3 == 0x28) goto LAB_ram_0011e620;
      if (param_3 != 0x50) goto LAB_ram_0011e654;
      goto LAB_ram_0011e5ec;
    }
    goto LAB_ram_0011e654;
  }
  if (param_2 != 0) {
    if (param_3 == 0x28) {
LAB_ram_0011e620:
      *(uint *)(*(int *)(iVar2 + 0xc) + 0x478) = uVar1 | 0x1400000;
      *(uint *)(*(int *)(iVar2 + 0xc) + 0x100478) = uVar1 & 0xfffffbff | 0x3c00300;
      return;
    }
    if (param_3 == 0x50) {
LAB_ram_0011e5ec:
      *(uint *)(*(int *)(iVar2 + 0xc) + 0x478) = uVar1 | 0x3c00000;
      *(uint *)(*(int *)(iVar2 + 0xc) + 0x100478) = uVar1 & 0xfffffbff | 0x3c00300;
      return;
    }
  }
LAB_ram_0011e654:
  *(uint *)(*(int *)(iVar2 + 0xc) + 0x478) = uVar1;
  *(uint *)(*(int *)(iVar2 + 0xc) + 0x100478) = uVar1 & 0xfffffbff | 0x3c00300;
  return;
}


