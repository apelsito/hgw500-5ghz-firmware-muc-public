/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001835a4 */

void FUN_ram_001835a4(int param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = FUN_ram_000e5038();
  local_10 = DAT_ram_001ab6e8;
  local_c = DAT_ram_001ab6ec;
  if (iVar1 == 6) {
    local_10 = 7;
    goto LAB_ram_00183610;
  }
  if ((iVar1 != 5) && (iVar1 != 8)) {
    if (iVar1 == 7) {
      local_10 = 0xc;
      goto LAB_ram_00183610;
    }
    if (iVar1 != 0x11) {
      FUN_ram_000ee260(s_rx_iq__Unsupported_FEM_type_ram_001cadd0);
      goto LAB_ram_00183610;
    }
  }
  local_10 = 4;
LAB_ram_00183610:
  local_c = local_10;
  FUN_ram_001823f4(param_1 >> 1,local_10,local_10,&local_10,&local_10);
  return;
}


