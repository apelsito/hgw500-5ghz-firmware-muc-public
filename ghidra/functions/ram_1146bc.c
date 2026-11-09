/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001146bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_001146bc(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x3a04);
  iVar2 = **(int **)(uVar1 + 0x38);
  if (param_2 != 0) {
    FUN_ram_000e83b4(uVar1,1);
    if (*(int *)(iVar2 + 0xc) == 0) {
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_2 + 0x94);
      sync();
    }
    else {
      *(undefined4 *)(DAT_ram_8002c970 + 0x8c) = *(undefined4 *)(param_2 + 0x94);
      sync();
    }
    FUN_ram_000e83e0(*(undefined4 *)(param_1 + 0x3a04));
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x3a04) + 0x34);
    uVar1 = 1 << (uVar1 & 0x1f) | 1 << (uVar1 + 0x10 & 0x1f);
    sync();
    DAT_ram_800370b8 = DAT_ram_800370b8 + 1;
    DAT_ram_8002c970 = param_3;
    _DAT_ram_e000002c = uVar1;
  }
  return uVar1;
}


