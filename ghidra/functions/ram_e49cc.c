/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e49cc */

void FUN_ram_000e49cc(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined *local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined *local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined *local_9c;
  undefined *local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined *local_8c;
  undefined4 local_88;
  undefined *local_84;
  undefined *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined *local_74;
  undefined4 local_70;
  undefined1 auStack_6c [64];
  undefined4 local_2c [6];
  
  local_cc = DAT_ram_001a52a4;
  local_c8 = DAT_ram_001a52a8;
  local_c4 = DAT_ram_001a52ac;
  local_c0 = DAT_ram_001a52b0;
  local_bc = PTR_DAT_ram_002d002d_ram_001a52b4;
  local_b8 = DAT_ram_001a52b8;
  local_b4 = DAT_ram_001a52bc;
  local_b0 = DAT_ram_001a52c0;
  local_ac = PTR_DAT_ram_002d002d_ram_001a52c4;
  local_a8 = DAT_ram_001a52c8;
  local_a4 = DAT_ram_001a52cc;
  local_a0 = DAT_ram_001a52d0;
  local_9c = PTR_DAT_ram_00250025_ram_001a52d4;
  local_98 = PTR_DAT_ram_00250025_ram_001a52d8;
  local_94 = DAT_ram_001a52dc;
  local_90 = DAT_ram_001a52e0;
  local_8c = PTR_DAT_ram_00250025_ram_001a52e4;
  local_88 = DAT_ram_001a52e8;
  local_84 = PTR_DAT_ram_00250025_ram_001a52ec;
  local_80 = PTR_DAT_ram_00250025_ram_001a52f0;
  local_7c = DAT_ram_001a52f4;
  local_78 = DAT_ram_001a52f8;
  local_74 = PTR_DAT_ram_00250025_ram_001a52fc;
  local_70 = DAT_ram_001a5300;
  thunk_FUN_ram_0039fe00(auStack_6c,&DAT_ram_001a5304,0x40);
  if (DAT_ram_8002c8bc == '\x03') {
    iVar3 = FUN_ram_000e5c84();
    if (iVar3 == 2) {
      puVar5 = (undefined4 *)&DAT_ram_e610dc80;
      local_2c[0] = DAT_ram_001a5344;
      local_2c[1] = DAT_ram_001a5348;
      iVar3 = 0x100;
      local_2c[2] = DAT_ram_001a534c;
      local_2c[3] = DAT_ram_001a5350;
      local_2c[4] = DAT_ram_001a5354;
      local_2c[5] = DAT_ram_001a5358;
      do {
        uVar6 = 0;
        puVar4 = puVar5;
        do {
          puVar1 = local_2c + uVar6;
          uVar6 = uVar6 + 1;
          puVar5 = puVar4 + 1;
          *puVar4 = *puVar1;
          puVar4 = puVar5;
        } while (uVar6 < 2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      puVar5 = (undefined4 *)&DAT_ram_e610e080;
      iVar3 = 0x100;
      do {
        uVar6 = 0;
        puVar4 = puVar5;
        do {
          iVar2 = uVar6 + 2;
          uVar6 = uVar6 + 1;
          puVar5 = puVar4 + 1;
          *puVar4 = local_2c[iVar2];
          puVar4 = puVar5;
        } while (uVar6 < 4);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = FUN_ram_000e5c84();
    if (iVar3 != 2) {
      FUN_ram_000e43cc(0xf500,4,&local_cc);
      FUN_ram_000e43cc(0xf540,8,&local_bc);
      FUN_ram_000e43cc(0xf580,0xc,&local_9c);
      FUN_ram_000e43cc(0xf5c0,0x10,auStack_6c);
    }
  }
  return;
}


