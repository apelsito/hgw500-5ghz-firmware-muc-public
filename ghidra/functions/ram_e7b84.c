/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e7b84 */

void FUN_ram_000e7b84(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    if (*(code **)(param_2 + 0x30) == (code *)0x0) {
      uVar2 = *(uint *)(param_2 + 0x1c0);
    }
    else {
      (**(code **)(param_2 + 0x30))
                (param_2,*(undefined4 *)(param_2 + 0x34),*(undefined4 *)(param_2 + 0x38));
      uVar2 = *(uint *)(param_2 + 0x1c0);
    }
    if ((uVar2 & 0x20) != 0) {
      FUN_ram_000ee260(s_Descriptor_not_being_added_to_re_ram_001bc78c);
      FUN_ram_000ee834(param_2);
      return;
    }
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x2c) = 1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
    if (*(int *)(param_1 + 0x4c) == 0) {
      *(int *)(param_1 + 0x4c) = param_2;
      *(int *)(param_1 + 0x50) = param_2;
      return;
    }
    iVar3 = *(int *)(param_1 + 0x50);
    uVar1 = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(param_2 + 0x24);
    uVar2 = *(uint *)(param_1 + 0x54);
    *(undefined4 *)(iVar3 + 0x20) = uVar1;
    *(int *)(param_1 + 0x50) = param_2;
    if ((100 < uVar2) || ((*(uint *)(param_2 + 0x1c0) & 0x40) != 0)) {
      FUN_ram_000e7ad8(param_1);
      return;
    }
  }
  return;
}


