/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00121aa4 */

void FUN_ram_00121aa4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_2 + 0x10);
  uVar3 = *(uint *)(param_2 + 0xc);
  if (((iVar2 != 0) && (iVar1 = FUN_ram_0011c26c(*(undefined4 *)(param_1 + 0x1c),iVar2), iVar1 != 0)
      ) && (uVar3 < 2 || uVar3 == 3)) {
    FUN_ram_000f2ccc(s_Node_SMPS_change__pM_on_bss___pM_ram_001c3654,iVar2,iVar2 + 6,uVar3);
    if (*(byte *)(iVar1 + 0x72) != uVar3) {
      DAT_ram_800372a8 = DAT_ram_800372a8 + 1;
    }
    *(char *)(iVar1 + 0x72) = (char)uVar3;
  }
  return;
}


