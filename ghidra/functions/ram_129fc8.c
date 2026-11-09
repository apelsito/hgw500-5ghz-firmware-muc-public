/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00129fc8 */

void FUN_ram_00129fc8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if ((DAT_ram_8002c21c & 2) != 0) {
    uVar1 = STATUS32;
    if ((uVar1 & 2) != 0) {
      STATUS32 = uVar1 & 0xfffffffd;
    }
    iVar3 = param_1 + 0x3dbc;
    iVar2 = 4;
    do {
      uVar5 = 0;
      do {
        for (iVar4 = *(int *)(iVar3 + uVar5 * 8 + 0xc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xec))
        {
          if (*(int *)(iVar4 + 8) == param_2) {
            FUN_ram_000ee260(s_hal_txstatus_clear_____p__p_stil_ram_001c419c,*(int *)(iVar4 + 8),
                             param_2,iVar4);
            FUN_ram_0010c788(param_1,0,0xffffffff);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 2);
      iVar2 = iVar2 + -1;
      iVar3 = iVar3 + 0x38;
    } while (iVar2 != 0);
    STATUS32 = uVar1;
  }
  FUN_ram_000eea80(param_2,0,0x38);
  return;
}


