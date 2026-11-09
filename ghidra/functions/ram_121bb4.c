/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00121bb4 */

void FUN_ram_00121bb4(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar6 = *(int *)(**(int **)(iVar4 + 0xc) + 0x1c);
  iVar5 = *(int *)(param_2 + 0x10);
  FUN_ram_000e6c98(0xc);
  iVar1 = FUN_ram_0011c26c(iVar4,iVar5);
  if (iVar1 == 0) {
    return;
  }
  switch(*(undefined4 *)(iVar5 + 8)) {
  case 1:
    if (iVar1 == *(int *)(iVar4 + 0x38)) {
      return;
    }
    if (*(uint *)(iVar5 + 0xc) == (uint)*(byte *)(iVar1 + 0x40e)) {
      return;
    }
    *(char *)(iVar1 + 0x40e) = (char)*(uint *)(iVar5 + 0xc);
    FUN_ram_00157688();
    uVar3 = 0;
LAB_ram_00121cf4:
    FUN_ram_0012c830(iVar1,uVar3);
    break;
  case 2:
    *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(iVar5 + 0xc);
    break;
  default:
    FUN_ram_000ee260(s_Unkown_TDLS_set_command___d_ram_001c3680);
    break;
  case 5:
    if (iVar1 == *(int *)(iVar4 + 0x38)) {
      pcVar2 = s_Set_TDLS_param__d__ni__pM_is_bss_ram_001c36a0;
    }
    else {
      if ((*(ushort *)(iVar1 + 0xc) & 0x10) != 0) {
        if (*(char *)(iVar1 + 0x40e) != '\x03') {
          FUN_ram_000ee260(s_Set_TDLS_param__d__ni__pM_is_not_ram_001c36fc,5,iVar1 + 0x96);
          return;
        }
        if ((*(ushort *)(iVar1 + 0x40c) & 1) == 0) {
          return;
        }
        uVar3 = 3;
        goto LAB_ram_00121cf4;
      }
      pcVar2 = s_Set_TDLS_param__d__ni__pM_is_not_ram_001c36c8;
    }
    FUN_ram_000ee260(pcVar2,5,iVar1 + 0x96);
    break;
  case 6:
    *(undefined4 *)(iVar6 + 0x5b80) = *(undefined4 *)(iVar5 + 0xc);
  }
  return;
}


