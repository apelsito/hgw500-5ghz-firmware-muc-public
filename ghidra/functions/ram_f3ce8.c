/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f3ce8 */

/* WARNING: Removing unreachable block (ram,0x000f3c62) */

int FUN_ram_000f3ce8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_ram_000f3a90(param_2,param_3,0);
  iVar3 = -1;
  if (piVar1 != (int *)0x0) {
    piVar1[1] = param_1;
    piVar1[2] = 0x11added;
    iVar3 = FUN_ram_000efe3c(9,1,param_3,piVar1);
    if (iVar3 == 0) {
      do {
      } while (piVar1[2] != -0xfca2f22);
      iVar3 = *piVar1;
      iVar2 = piVar1[3];
    }
    else {
      FUN_ram_000ee260(s_uc_host_fops_send__uc_hostlink_s_ram_001be36c,iVar3);
      iVar2 = piVar1[3];
    }
    if (iVar2 != 0) {
      FUN_ram_0039fe00(param_2,iVar2,param_3);
      FUN_ram_000ee834(piVar1[3]);
    }
  }
  return iVar3;
}


