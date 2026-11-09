/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f3b54 */

int FUN_ram_000f3b54(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_ram_000f3a90(0,0,0);
  iVar4 = -1;
  if (piVar1 != (int *)0x0) {
    piVar1[1] = param_1;
    if (param_2 == 0) {
      uVar2 = 4;
    }
    else {
      uVar2 = 0;
    }
    piVar1[2] = 0x11added;
    iVar4 = FUN_ram_000efe3c(9,uVar2,param_3,piVar1);
    if (iVar4 == 0) {
      do {
      } while (piVar1[2] != -0xfca2f22);
      iVar4 = *piVar1;
      iVar3 = piVar1[3];
    }
    else {
      FUN_ram_000ee260(s_uc_host_fops_send__uc_hostlink_s_ram_001be36c,iVar4);
      iVar3 = piVar1[3];
    }
    if (iVar3 != 0) {
      FUN_ram_0039fe00(0,iVar3,0);
      FUN_ram_000ee834(piVar1[3]);
    }
  }
  return iVar4;
}


