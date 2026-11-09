/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017967c */

void FUN_ram_0017967c(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_28 [4];
  
  iVar5 = 0;
  iVar4 = 4;
  do {
    FUN_ram_00188958(iVar5);
    iVar1 = FUN_ram_0018ad88();
    local_28[iVar5] = iVar1 + -3;
    iVar4 = iVar4 + -1;
    iVar5 = iVar5 + 1;
  } while (iVar4 != 0);
  FUN_ram_00188938();
  iVar4 = FUN_ram_0018ad88();
  iVar4 = iVar4 + -3;
  if (param_1 == 0) {
    FUN_ram_00183ef4();
    iVar1 = 0;
    iVar5 = FUN_ram_00179668();
    iVar6 = 4;
    do {
      iVar2 = FUN_ram_0018ad78(local_28[iVar1],iVar5 + -10);
      iVar6 = iVar6 + -1;
      local_28[iVar1] = iVar2;
      iVar1 = iVar1 + 1;
    } while (iVar6 != 0);
    iVar4 = FUN_ram_0018ad78(iVar4,iVar5 + -10);
    pcVar3 = s_HW_noise_in_dBm__ram_001ca004;
  }
  else {
    pcVar3 = s_HW_noise_in_dBFS__ram_001ca018;
  }
  FUN_ram_000ee260(pcVar3);
  FUN_ram_000ee260(s_avg___d__chain0___d__chain1___d__ram_001ca030,iVar4 / 10,local_28[0] / 10,
                   local_28[1] / 10,local_28[2] / 10,local_28[3] / 10);
  FUN_ram_000ee260(&DAT_ram_001ca068);
  return;
}


