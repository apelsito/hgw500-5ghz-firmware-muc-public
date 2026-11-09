/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00182500 */

void FUN_ram_00182500(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  
  iVar2 = FUN_ram_000e5038();
  uStack_c = DAT_ram_001ab6b4;
  uVar3 = 0;
  local_10 = DAT_ram_001ab6b0;
  if (iVar2 == 6) {
    uVar1 = 0xf;
  }
  else if ((iVar2 == 5) || (iVar2 == 8)) {
    uVar1 = 0xc;
  }
  else {
    uVar1 = uVar3;
    if ((((iVar2 != 7) && (uVar1 = local_10, iVar2 != 10)) && (uVar1 = uVar3, iVar2 != 0xe)) &&
       (((iVar2 != 0xf && (iVar2 != 0x10)) && ((iVar2 != 0x11 && (iVar2 != 9)))))) {
      if (iVar2 == 0xd) {
        local_10 = 0;
        FUN_ram_00182484(0,0,0,0,0,0,0,0);
        FUN_ram_00182484(1,local_10,local_10,local_10,local_10,local_10,local_10,local_10);
        return;
      }
      if (iVar2 != 0x15) {
        FUN_ram_000ee260(s_all_off__Unsupported_FEM_type_ram_001cad54);
        uVar1 = local_10;
      }
    }
  }
  local_10 = uVar1;
  uStack_c = local_10;
  FUN_ram_001823f4(0,local_10,local_10,&local_10,&local_10);
  FUN_ram_001823f4(1,local_10,local_10,&local_10,&local_10);
  return;
}


