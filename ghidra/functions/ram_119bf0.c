/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00119bf0 */

void FUN_ram_00119bf0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(**(int **)(param_1 + 0xc) + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  if ((*(char *)(param_1 + 0x2c) != '\x01' && *(char *)(param_1 + 0x2c) != '\x02') &&
     (*(char *)(iVar3 + 0x5ab8) == '\0')) {
    iVar1 = FUN_ram_000ee73c(0x25,0);
    *(int *)(param_1 + 0x134) = iVar1;
    if (iVar1 == 0) {
      FUN_ram_000ee260(s_qtn_mu_ndpa_alloc__no_mem_ram_001c23fc);
      return;
    }
    iVar1 = FUN_ram_0012e384(iVar3,uVar2);
    if (-1 < iVar1) {
      iVar1 = FUN_ram_0012e4b4(iVar3,uVar2,1);
      if (-1 < iVar1) {
        *(undefined1 *)(iVar3 + 0x5ab8) = 1;
        FUN_ram_00119800(param_1,DAT_ram_0018c110);
        return;
      }
      FUN_ram_0012d134(iVar3,uVar2);
    }
    FUN_ram_000ee834(*(undefined4 *)(param_1 + 0x134));
    *(undefined4 *)(param_1 + 0x134) = 0;
    return;
  }
  return;
}


