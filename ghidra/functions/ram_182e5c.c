/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00182e5c */

void FUN_ram_00182e5c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar1 = FUN_ram_000e5038();
  local_28 = DAT_ram_001ab6b8;
  uStack_24 = DAT_ram_001ab6bc;
  local_20 = DAT_ram_001ab6c0;
  local_1c = DAT_ram_001ab6c4;
  if (iVar1 == 0xd) {
    uVar7 = 4;
    uVar6 = 5;
    uVar5 = 1;
    uVar4 = 0xc;
    uVar3 = 0xd;
    FUN_ram_00182484(0,0,4,5,0,1,0xc,0xd);
    uVar2 = 0;
LAB_ram_00182ed0:
    FUN_ram_00182484(1,0,uVar7,uVar6,uVar2,uVar5,uVar4,uVar3);
  }
  else {
    if (iVar1 == 9) {
      uVar2 = 4;
      local_28 = 4;
      uStack_24 = 4;
      local_20 = 9;
      local_1c = 10;
    }
    else {
      if (iVar1 == 0x15) {
        FUN_ram_00182484(0,0,8,9,0,1,0xc,0xd);
        uVar7 = 5;
        uVar2 = 7;
        uVar5 = 8;
        uVar3 = 0;
        uVar4 = 0;
        uVar6 = 0;
        goto LAB_ram_00182ed0;
      }
      FUN_ram_000ee260(s_default__Unsupported_FEM_type_ram_001cad74);
      uVar2 = 0;
    }
    FUN_ram_001823f4(0,0,uVar2,&local_28,&local_20);
    FUN_ram_001823f4(1,0,uVar2,&local_28,&local_20);
  }
  return;
}


