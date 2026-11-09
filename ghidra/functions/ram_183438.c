/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00183438 */

void FUN_ram_00183438(uint param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = FUN_ram_000e5038();
  local_10 = DAT_ram_001ab6d8;
  local_c = DAT_ram_001ab6dc;
  if (iVar1 == 6) {
    if ((param_1 & 1) != 0) {
LAB_ram_00183470:
      local_10 = 1;
      goto LAB_ram_001834dc;
    }
  }
  else {
    if ((iVar1 != 5) && (iVar1 != 8)) {
      if (iVar1 == 7) {
        if ((param_1 & 1) == 0) {
          local_10 = 9;
        }
        else {
          local_10 = 10;
        }
      }
      else if (iVar1 == 0x11) {
        if ((param_1 & 1) == 0) {
          local_10 = 0xd;
        }
        else {
          local_10 = 0xe;
        }
      }
      else {
        FUN_ram_000ee260(s_tx_lo__Unsupported_FEM_type_ram_001cad94);
      }
      goto LAB_ram_001834dc;
    }
    if ((param_1 & 1) == 0) goto LAB_ram_00183470;
  }
  local_10 = 2;
LAB_ram_001834dc:
  local_c = local_10;
  FUN_ram_001823f4((int)param_1 >> 1,local_10,local_10,&local_10,&local_10);
  return;
}


