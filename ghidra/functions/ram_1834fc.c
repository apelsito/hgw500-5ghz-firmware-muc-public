/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001834fc */

void FUN_ram_001834fc(uint param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = FUN_ram_000e5038();
  local_10 = DAT_ram_001ab6e0;
  local_c = DAT_ram_001ab6e4;
  if (iVar1 == 6) {
    if ((param_1 & 1) != 0) {
LAB_ram_00183540:
      local_10 = 9;
      goto LAB_ram_00183584;
    }
  }
  else {
    if ((iVar1 != 5) && (iVar1 != 8)) {
      if (iVar1 == 7) {
        if ((param_1 & 1) == 0) {
          local_10 = 1;
        }
        else {
          local_10 = 2;
        }
        goto LAB_ram_00183584;
      }
      if (iVar1 != 0x11) {
        FUN_ram_000ee260(s_afe__Unsupported_FEM_type_ram_001cadb4);
        goto LAB_ram_00183584;
      }
    }
    if ((param_1 & 1) == 0) goto LAB_ram_00183540;
  }
  local_10 = 10;
LAB_ram_00183584:
  local_c = local_10;
  FUN_ram_001823f4((int)param_1 >> 1,local_10,local_10,&local_10,&local_10);
  return;
}


