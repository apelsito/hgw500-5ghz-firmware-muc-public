/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00156c34 */

void FUN_ram_00156c34(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = *(uint *)(param_1 + 0x5aa8);
  bVar3 = (param_2 & 0x80000000) != 0;
  if (bVar3) {
    uVar2 = (uVar2 | param_2) & 0x7fffffff;
  }
  if (!bVar3) {
    uVar2 = uVar2 & ~(param_2 | 0x80000000);
  }
  iVar1 = FUN_ram_001563ac(0x19,uVar2,0,0,1);
  if (iVar1 == 0) {
    FUN_ram_000ee260(s_Update_MU_debug_flag_failed__kee_ram_001c742c,
                     *(undefined4 *)(param_1 + 0x5aa8));
  }
  else {
    FUN_ram_000ee260(s_Update_MU_debug_flag_from_0x_08x_ram_001c7464,
                     *(undefined4 *)(param_1 + 0x5aa8),uVar2);
    *(uint *)(param_1 + 0x5aa8) = uVar2;
  }
  return;
}


