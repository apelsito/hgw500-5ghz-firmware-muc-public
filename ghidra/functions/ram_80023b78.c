/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80023b78 */

/* WARNING: Removing unreachable block (ram,0x80023d10) */
/* WARNING: Removing unreachable block (ram,0x80023d18) */
/* WARNING: Removing unreachable block (ram,0x80023d24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_80023b78(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  puVar3 = (undefined4 *)*param_1;
  uVar4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  *param_1 = *puVar3;
  puVar3[4] = puVar3[4] & 0xbfffffff | (param_2 & 1) << 0x1e;
  uVar1 = _DAT_ram_e1035038;
  *puVar3 = 0;
  while ((uVar1 & 1) != 0) {
    uVar4 = uVar4 + 1;
    uVar1 = _DAT_ram_e1035038;
    if (((uVar4 & 0xffff0000) != 0) && ((uVar4 & 0xffff) == 0)) {
      FUN_ram_000ee260(s_stuck_in_topaz_tqe_wait___ram_001c1d08);
      uVar1 = _DAT_ram_e1035038;
    }
  }
  FUN_ram_80025dec(s_qtn_soft_ring_wmac_push_to_tqe_ram_001c1d24,0x174);
  _DAT_ram_e1035020 = *puVar3;
  _DAT_ram_e1035024 = puVar3[1];
  _DAT_ram_e1035028 = puVar3[2];
  _DAT_ram_e103502c = puVar3[3];
  _DAT_ram_e1035030 = puVar3[4];
  uVar2 = puVar3[5];
  sync();
  _DAT_ram_e1035038 = 1;
  _DAT_ram_e1035034 = uVar2;
  if (param_2 == 0) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      if (((uVar4 & 0xffff0000) != 0) && ((uVar4 & 0xffff) == 0)) {
        uVar2 = FUN_ram_000ee260(s_stuck_in_topaz_tqe_wait___ram_001c1d08);
      }
    } while ((_DAT_ram_e1035038 & 1) != 0);
    if ((((_DAT_ram_e1035038 & 1) == 0) && ((_DAT_ram_e1035038 & 0xc0000000) != 0)) &&
       ((_DAT_ram_e1035038 & 0x80000000) == 0)) {
      FUN_ram_80025e74(uVar2);
      *puVar3 = *param_1;
      *param_1 = puVar3;
      return 0xffffffff;
    }
  }
  FUN_ram_80025e74(uVar2);
  *puVar3 = DAT_ram_8002c988;
  DAT_ram_8002c988 = puVar3;
  DAT_ram_8003728c = DAT_ram_8003728c + 1;
  return 1;
}


