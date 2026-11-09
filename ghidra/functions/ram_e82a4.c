/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e82a4 */

void FUN_ram_000e82a4(undefined2 *param_1,uint param_2)

{
  ushort uVar1;
  
  uVar1 = param_1[7];
  if (param_2 != (uVar1 & param_2)) {
    param_1[7] = (ushort)param_2 | uVar1;
    FUN_ram_000efe3c(3,*param_1,param_2 & 0xffff | (uint)uVar1,0);
  }
  return;
}


