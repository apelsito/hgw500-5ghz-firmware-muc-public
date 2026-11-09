/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001565c0 */

void FUN_ram_001565c0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_ram_0015659c();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x3b20);
  }
  DAT_ram_0018c260 = FUN_ram_000e2000(*(undefined4 *)(param_2 + 0xc));
  DAT_ram_0018c264 = FUN_ram_000e2000(*(undefined4 *)(param_2 + 0x10));
  *(uint *)(*(int *)(iVar2 + 0xc) + 0x478) = *(uint *)(*(int *)(iVar2 + 0xc) + 0x478) | 0x20000;
  *(uint *)(*(int *)(iVar2 + 0xc) + 0x100478) =
       *(uint *)(*(int *)(iVar2 + 0xc) + 0x100478) & 0xfffffbff | 0x3c20300;
  FUN_ram_800255f4(iVar2,0x810);
  *(int *)(param_2 + 0x28) = iVar2 + 0x108;
  *(int *)(param_2 + 0x44) = iVar2 + 0x4ac;
  return;
}


