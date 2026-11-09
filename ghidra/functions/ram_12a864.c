/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012a864 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0012a864(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  FUN_ram_000ee260(s_try_to_hang____ram_001c41d0);
  iVar3 = *(int *)(param_1 + 0x3b20);
  sync();
  iVar2 = *(int *)(iVar3 + 0xc);
  if ((*(uint *)(iVar2 + 0x404) & 0xf) == 0) {
    DAT_ram_8003787c = DAT_ram_8003787c + 1;
    iVar2 = *(int *)(iVar3 + 0xc);
  }
  *(undefined4 *)(iVar2 + 0x20) = 1;
  *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x20) = 0xba720473;
  STATUS32 = uVar1;
  return;
}


