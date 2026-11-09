/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f9640 */

int FUN_ram_000f9640(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x464);
  iVar3 = 0;
  *param_2 = iVar1;
  if (iVar1 == 0) goto LAB_ram_000f9790;
  iVar1 = *(int *)(iVar1 + 4);
  *(int *)(param_1 + 0x464) = iVar1;
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x468) = param_1 + 0x464;
  }
  iVar3 = *(int *)*param_2;
  iVar1 = 0x30 - (uint)(DAT_ram_0018c06c - iVar3) / 0x6c;
  (&DAT_ram_002006bc)[DAT_ram_0018c070] = iVar3;
  piVar2 = &DAT_ram_002016bc + iVar1;
  DAT_ram_0018c070 = DAT_ram_0018c070 + 1;
  if (DAT_ram_0018c070 < 0x400) {
    if (*piVar2 != 0) goto LAB_ram_000f9704;
    *piVar2 = 1;
  }
  else {
    DAT_ram_0018c070 = 0;
    if (*piVar2 == 0) {
      *piVar2 = 1;
      if (iVar3 == 0) goto LAB_ram_000f9790;
      goto LAB_ram_000f9738;
    }
LAB_ram_000f9704:
    FUN_ram_000f9534();
    FUN_ram_000ee260(s_fd__d___p__already_in_use___halt_ram_001bedf4,iVar1,iVar3);
    *piVar2 = 1;
  }
  if (iVar3 != 0) {
LAB_ram_000f9738:
    FUN_ram_000eea80(iVar3,0,0x6c);
    DAT_ram_0018c064 = DAT_ram_0018c064 + 1;
    if (DAT_ram_0018c060 < DAT_ram_0018c064) {
      DAT_ram_0018c060 = DAT_ram_0018c064;
      DAT_ram_80037898 = DAT_ram_80037898 & 0xffff | DAT_ram_0018c064 * 0x10000;
      return iVar3;
    }
    return iVar3;
  }
LAB_ram_000f9790:
  DAT_ram_8003785c = param_3 | DAT_ram_8003785c;
  DAT_ram_80037858 = DAT_ram_80037858 + 1;
  return iVar3;
}


