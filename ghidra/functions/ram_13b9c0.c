/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013b9c0 */

void FUN_ram_0013b9c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = **(int **)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(iVar1 + 0x1c);
  if (param_2 == 0) {
    if (DAT_ram_0018c1f8 == 0) {
LAB_ram_0013ba54:
      if (DAT_ram_0018c1fc == 0) {
        DAT_ram_0018c1fc = 0;
        goto joined_r0x0013ba3c;
      }
    }
    else {
LAB_ram_0013ba08:
      FUN_ram_000f7d60();
      DAT_ram_0018c1f8 = 0;
      if (param_2 != 0) {
        if (param_2 != 4) {
          if (param_2 != 1) goto LAB_ram_0013babc;
          goto LAB_ram_0013ba8c;
        }
        goto LAB_ram_0013ba54;
      }
      if (DAT_ram_0018c1fc == 0) goto LAB_ram_0013babc;
    }
    FUN_ram_000f7d60();
    DAT_ram_0018c1fc = 0;
  }
  else if (param_2 == 3) {
    if (DAT_ram_0018c1f8 != 0) goto LAB_ram_0013ba08;
  }
  else if (param_2 == 4) goto LAB_ram_0013ba54;
joined_r0x0013ba3c:
  if ((param_2 == 1) && (DAT_ram_0018c1f8 == 0)) {
LAB_ram_0013ba8c:
    DAT_ram_0018c1f8 = FUN_ram_000f7c10(4000,uVar2,iVar1,&LAB_ram_0013bd24,3);
    return;
  }
LAB_ram_0013babc:
  if ((param_2 == 2) && (DAT_ram_0018c1fc == 0)) {
    DAT_ram_0018c1fc = FUN_ram_000f7c10(2000,uVar2,iVar1,&LAB_ram_0013be04,3);
    return;
  }
  return;
}


