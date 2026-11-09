/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00182f88 */

void FUN_ram_00182f88(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = FUN_ram_000e5038();
  local_24 = DAT_ram_001ab6c8;
  uVar3 = 0;
  local_20 = DAT_ram_001ab6cc;
  local_1c = DAT_ram_001ab6d0;
  local_18 = DAT_ram_001ab6d4;
  if (iVar1 == 6) {
    uVar3 = 0xf;
    uVar2 = 3;
    local_24 = 7;
    local_20 = 7;
    local_1c = 8;
    local_18 = 8;
    goto LAB_ram_001830e4;
  }
  if ((iVar1 == 5) || (iVar1 == 8)) {
    uVar3 = 0xc;
    uVar2 = 0;
LAB_ram_00183024:
    local_24 = 4;
    local_20 = 4;
    local_1c = 0xb;
    local_18 = 0xb;
  }
  else {
    if (iVar1 == 7) {
      uVar2 = 8;
      local_24 = 0xc;
      local_20 = 0xc;
      local_1c = 3;
      local_18 = 3;
      goto LAB_ram_001830e4;
    }
    if (iVar1 == 10) {
      uVar2 = 8;
      local_20 = 4;
    }
    else {
      if (iVar1 != 0xe) {
        if (iVar1 == 0xf) {
          uVar2 = 4;
          local_24 = 0xc;
          local_20 = 0xc;
          local_1c = 1;
          local_18 = 1;
          goto LAB_ram_001830e4;
        }
        if (iVar1 == 0x10) {
          uVar2 = 4;
          local_24 = 0xc;
          local_20 = 0xc;
          local_1c = 2;
          local_18 = 2;
          goto LAB_ram_001830e4;
        }
        if (iVar1 != 0x11) {
          if ((iVar1 == 9) || (iVar1 == 0xd || iVar1 == 0x15)) {
            FUN_ram_00182e5c();
            return;
          }
          FUN_ram_000ee260(s_default__Unsupported_FEM_type_ram_001cad74);
          uVar2 = 0;
          goto LAB_ram_001830e4;
        }
        uVar2 = 0xc;
        goto LAB_ram_00183024;
      }
      uVar2 = 4;
      local_20 = 0xc;
    }
    local_24 = 0xc;
    local_1c = 1;
    local_18 = 2;
  }
LAB_ram_001830e4:
  FUN_ram_001823f4(0,uVar3,uVar2,&local_24,&local_1c);
  FUN_ram_001823f4(1,uVar3,uVar2,&local_24,&local_1c);
  return;
}


