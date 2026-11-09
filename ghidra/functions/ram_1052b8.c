/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001052b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_001052b8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  *(uint *)(*(int *)(param_1 + 0xc) + 0x3048) =
       *(uint *)(*(int *)(param_1 + 0xc) + 0x3048) & 0xffffff | 0xfa000000;
  FUN_ram_0010526c(param_1,2);
  DAT_ram_0018c08c = FUN_ram_0017f2cc();
  FUN_ram_001051b0(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = *(uint *)(iVar1 + 0x578);
  *(uint *)(iVar1 + 0x478) = *(uint *)(iVar1 + 0x478) & 0xffffcfff | 0x4000;
  *(uint *)(*(int *)(param_1 + 0xc) + 0x2000) =
       *(uint *)(*(int *)(param_1 + 0xc) + 0x2000) & 0xfffbffff;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x560) = 0x4e140000;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x56c) = 0x4e790001;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x100560) = 0x4e140000;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10056c) = 0x4e790001;
  *(uint *)(*(int *)(param_1 + 0xc) + 0x578) = uVar2 & 0xf7cfffff | 0x1008000;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x564) = 0x4102;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x568) = 0x186a186a;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2024) = 0x3840004;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2070) = 0x2ee0003;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2074) = 0x2ee0003;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2078) = 0x8ca0009;
  _DAT_ram_e503fffc = 0x100;
  FUN_ram_000e49cc();
  iVar1 = *(int *)(param_1 + 0xc) + 0x3048;
  *(uint *)(DAT_ram_001a5ee4 + iVar1) = *(uint *)(DAT_ram_001a5ee4 + iVar1) & 0xff00ffff | 0x20000;
  return;
}


