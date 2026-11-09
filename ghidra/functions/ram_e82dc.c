/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e82dc */

void FUN_ram_000e82dc(undefined2 *param_1,ushort param_2)

{
  ushort uVar1;
  
  if ((param_1[7] & param_2) != 0) {
    uVar1 = param_1[7] & ~param_2;
    param_1[7] = uVar1;
    FUN_ram_000efe3c(3,*param_1,uVar1,0);
  }
  return;
}


