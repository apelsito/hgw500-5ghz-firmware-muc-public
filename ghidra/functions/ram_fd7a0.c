/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fd7a0 */

void FUN_ram_000fd7a0(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x2000);
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2 | uVar1 & 0xc61f858a;
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0x2000) = uVar1;
  *(uint *)(*(int *)(param_1 + 0xc) + 0x2028) =
       *(uint *)(*(int *)(param_1 + 0xc) + 0x2028) & 0xfffffeff;
  uVar1 = *(uint *)(*(int *)(param_1 + 0xc) + 0x202c);
  if (param_2 != (uint *)0x0) {
    uVar1 = uVar1 & 0xfffff860 | param_2[1];
  }
  *(uint *)(*(int *)(param_1 + 0xc) + 0x202c) = uVar1;
  return;
}


