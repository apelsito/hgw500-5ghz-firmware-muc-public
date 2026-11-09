/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001172ac */

/* WARNING: Removing unreachable block (ram,0x001173dc) */
/* WARNING: Removing unreachable block (ram,0x001173e4) */
/* WARNING: Removing unreachable block (ram,0x001173f0) */
/* WARNING: Removing unreachable block (ram,0x00117480) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_001172ac(undefined4 *param_1)

{
  short sVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  
  param_1[4] = param_1[4] & 0xbfffffff;
  uVar6 = (uint)param_1[2] >> 4 & 0x7f;
  piVar10 = &DAT_ram_8002c9a4;
  uVar5 = param_1[2] & 0xf;
  iVar12 = 2;
  LP_START = 0x117308;
  LP_END = 0x11731c;
  piVar8 = piVar10;
  do {
    if ((uVar6 == *(ushort *)(piVar8 + 2)) && (uVar5 == *(ushort *)((int)piVar8 + 10))) {
      if ((piVar8 == (int *)0x0) || (*piVar8 == 0)) goto LAB_ram_0011733c;
      goto LAB_ram_001174b0;
    }
    piVar8 = piVar8 + 3;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  piVar8 = (int *)0x0;
LAB_ram_0011733c:
  uVar11 = 0;
  while ((_DAT_ram_e1035038 & 1) != 0) {
    uVar11 = uVar11 + 1;
    if (((uVar11 & 0xffff0000) != 0) && ((uVar11 & 0xffff) == 0)) {
      FUN_ram_000ee260(s_stuck_in_topaz_tqe_wait___ram_001c1d08);
    }
  }
  FUN_ram_80025dec(s_qtn_soft_ring_push_ram_001c20b4,0x214);
  _DAT_ram_e1035020 = *param_1;
  _DAT_ram_e1035024 = param_1[1];
  _DAT_ram_e1035028 = param_1[2];
  _DAT_ram_e103502c = param_1[3];
  _DAT_ram_e1035030 = param_1[4];
  uVar4 = param_1[5];
  sync();
  _DAT_ram_e1035038 = 1;
  uVar11 = 0;
  _DAT_ram_e1035034 = uVar4;
  do {
    uVar11 = uVar11 + 1;
    if (((uVar11 & 0xffff0000) != 0) && ((uVar11 & 0xffff) == 0)) {
      uVar4 = FUN_ram_000ee260(s_stuck_in_topaz_tqe_wait___ram_001c1d08);
    }
  } while ((_DAT_ram_e1035038 & 1) != 0);
  if ((((_DAT_ram_e1035038 & 1) != 0) || ((_DAT_ram_e1035038 & 0xc0000000) == 0)) ||
     ((_DAT_ram_e1035038 & 0x80000000) != 0)) {
    FUN_ram_80025e74(uVar4);
    return 1;
  }
  FUN_ram_80025e74(uVar4);
  if (piVar8 == (int *)0x0) {
    iVar12 = 2;
    LP_START = 0x117498;
    LP_END = 0x1174a0;
    do {
      if (*piVar10 == 0) {
        *(short *)(piVar10 + 2) = (short)uVar6;
        *(short *)((int)piVar10 + 10) = (short)uVar5;
        piVar8 = piVar10;
        if (piVar10 != (int *)0x0) goto LAB_ram_001174b0;
        break;
      }
      piVar10 = piVar10 + 3;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    goto LAB_ram_00117500;
  }
LAB_ram_001174b0:
  if (_DAT_ram_e102001c < _DAT_ram_e1020020) {
    if (0x1f < _DAT_ram_e102001c + (0x10000 - _DAT_ram_e1020020)) {
      iVar12 = 1 - (int)DAT_ram_8002c988;
      if ((undefined4 *)0x1 < DAT_ram_8002c988) {
        iVar12 = 0;
      }
      if (iVar12 == 0) goto LAB_ram_001174ec;
    }
LAB_ram_001175bc:
    DAT_ram_80037298 = DAT_ram_80037298 + 1;
    FUN_ram_80023b78(piVar8,1);
  }
  else {
    if (_DAT_ram_e102001c - _DAT_ram_e1020020 < 0x20) goto LAB_ram_001175bc;
    iVar12 = 1 - (int)DAT_ram_8002c988;
    if ((undefined4 *)0x1 < DAT_ram_8002c988) {
      iVar12 = 0;
    }
    if (iVar12 != 0) goto LAB_ram_001175bc;
  }
LAB_ram_001174ec:
  puVar3 = DAT_ram_8002c988;
  if (DAT_ram_8002c988 != (undefined4 *)0x0) {
    DAT_ram_8002c988 = (undefined4 *)*DAT_ram_8002c988;
    FUN_ram_000efab8(puVar3,param_1,0x18);
    *puVar3 = 0;
    if (*piVar8 != 0) {
      *(undefined4 **)piVar8[1] = puVar3;
      piVar8[1] = (int)puVar3;
      DAT_ram_800372a0 = DAT_ram_800372a0 + 1;
      return 1;
    }
    *piVar8 = (int)puVar3;
    piVar8[1] = (int)puVar3;
    DAT_ram_8003729c = DAT_ram_8003729c + 1;
    return 1;
  }
  DAT_ram_800372a4 = DAT_ram_800372a4 + 1;
LAB_ram_00117500:
  sVar1 = *(short *)(param_1 + 4);
  iVar12 = param_1[1];
  uVar5 = STATUS32;
  if ((uVar5 & 2) != 0) {
    STATUS32 = uVar5 & 0xfffffffd;
  }
  if ((_DAT_ram_e1020114 & 0x80000000) == 0) {
    iVar7 = 0;
    bVar2 = false;
    do {
      iVar9 = 0;
      do {
        sync();
        iVar9 = iVar9 + 1;
      } while (iVar9 < 10);
      if ((!bVar2) && (iVar7 = iVar7 + 1, iVar7 == 0x3e9)) {
        FUN_ram_000ee260(s_MuC___s_ram_001c19a4,s___topaz_hbm_wait_timeout_ram_001c1cd0);
        bVar2 = true;
      }
    } while ((_DAT_ram_e1020114 & 0x80000000) == 0);
  }
  sync();
  sync();
  STATUS32 = uVar5;
  _DAT_ram_e1020144 = iVar12 + sVar1;
  _DAT_ram_e1020114 = 0xd;
  return 1;
}


