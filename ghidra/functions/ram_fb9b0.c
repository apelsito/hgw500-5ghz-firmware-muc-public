/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fb9b0 */

void FUN_ram_000fb9b0(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uVar2 = *(uint *)(iVar3 + 0x2080);
  uVar1 = *(uint *)(iVar3 + 0x2088);
  if (param_2 != (uint *)0x0) {
    *param_2 = *(uint *)(iVar3 + 0x2084) & 0xffffff;
  }
  *param_3 = uVar2 & 0xffffff;
  *param_4 = uVar1 & 0xffffff;
  return;
}


