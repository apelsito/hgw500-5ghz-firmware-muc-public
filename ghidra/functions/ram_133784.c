/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00133784 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00133784(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = _DAT_ram_e503ffb8;
  if (param_1 != 0) {
    uVar1 = _DAT_ram_e503ffc8;
  }
  iVar5 = 0;
  uVar3 = 0;
  iVar4 = 0;
  uVar2 = uVar1;
LAB_ram_001337f4:
  if (param_1 != 0) {
    if (-1 < (int)uVar2) goto LAB_ram_00133814;
LAB_ram_0013383c:
    iVar4 = iVar4 + 1;
    uVar3 = uVar3 + 1;
    if (iVar4 < 3) goto LAB_ram_00133848;
    if ((int)uVar3 <= iVar4) {
LAB_ram_00133894:
      if (param_1 == 0) goto LAB_ram_001338e4;
      goto LAB_ram_001338b8;
    }
    if (param_1 == 0) {
      DAT_ram_80037214 = DAT_ram_80037214 + 1;
      goto LAB_ram_001338e4;
    }
    DAT_ram_80037210 = DAT_ram_80037210 + 1;
    goto LAB_ram_001338b8;
  }
  if (((uVar2 >> 0x1e ^ 1) & 1) == 0) goto LAB_ram_0013383c;
LAB_ram_00133814:
  if (uVar2 == uVar1) {
    iVar5 = iVar5 + 1;
    uVar3 = uVar3 + 1;
  }
  iVar4 = 0;
  if (uVar2 == uVar1) {
LAB_ram_00133848:
    if (999 < iVar5) {
      if (param_1 == 0) {
        DAT_ram_80037220 = DAT_ram_80037220 + 1;
      }
      else {
        DAT_ram_80037224 = DAT_ram_80037224 + 1;
      }
      goto LAB_ram_00133894;
    }
    if (199999 < (int)uVar3) goto LAB_ram_00133858;
  }
  else {
    uVar3 = uVar3 + 1;
    iVar4 = 0;
    if (199999 < (int)uVar3) goto LAB_ram_00133858;
    iVar5 = 0;
  }
  FUN_ram_000e4fa0(1);
  uVar1 = uVar2;
  uVar2 = _DAT_ram_e503ffb8;
  if (param_1 != 0) {
    uVar2 = _DAT_ram_e503ffc8;
  }
  goto LAB_ram_001337f4;
LAB_ram_00133858:
  if (param_1 == 0) {
    DAT_ram_8003722c = DAT_ram_8003722c + 1;
LAB_ram_001338e4:
    if (DAT_ram_8003721c < uVar3) {
      DAT_ram_8003721c = uVar3;
    }
  }
  else {
    DAT_ram_80037228 = DAT_ram_80037228 + 1;
LAB_ram_001338b8:
    if (DAT_ram_80037218 < uVar3) {
      DAT_ram_80037218 = uVar3;
    }
  }
  iVar5 = 0;
  iVar6 = 0;
  iVar4 = 0;
  uVar1 = _DAT_ram_e513ffc8;
  uVar2 = _DAT_ram_e513ffc8;
  if (param_1 == 0) {
    uVar1 = _DAT_ram_e513ffb8;
    uVar2 = _DAT_ram_e513ffb8;
  }
  do {
    if (param_1 != 0) {
      if (-1 < (int)uVar2) goto LAB_ram_00133964;
LAB_ram_0013398c:
      iVar4 = iVar4 + 1;
      if (iVar4 < 3) goto LAB_ram_00133998;
      if (iVar5 + 1 <= iVar4) {
LAB_ram_001339d4:
        if (param_1 != 0) goto LAB_ram_001339ec;
        goto LAB_ram_00133a44;
      }
      if (param_1 != 0) {
        DAT_ram_80037258 = DAT_ram_80037258 + 1;
        goto LAB_ram_001339ec;
      }
      DAT_ram_8003725c = DAT_ram_8003725c + 1;
      goto LAB_ram_00133a44;
    }
    if (((uVar2 >> 0x1e ^ 1) & 1) == 0) goto LAB_ram_0013398c;
LAB_ram_00133964:
    iVar6 = iVar6 + 1;
    if (uVar1 == uVar2) {
      iVar4 = 0;
LAB_ram_00133998:
      if (999 < iVar6) {
        if (param_1 == 0) {
          DAT_ram_80037268 = DAT_ram_80037268 + 1;
        }
        else {
          DAT_ram_8003726c = DAT_ram_8003726c + 1;
        }
        goto LAB_ram_001339d4;
      }
      if (199999 < iVar5 + 1) goto LAB_ram_001339a8;
    }
    else {
      iVar6 = 0;
      if (199999 < iVar5 + 1) {
LAB_ram_001339a8:
        if (param_1 != 0) {
          DAT_ram_80037270 = DAT_ram_80037270 + 1;
LAB_ram_001339ec:
          if (DAT_ram_80037260 < iVar5 + 1U) {
            DAT_ram_80037218 = iVar5 + 1U;
            return;
          }
          DAT_ram_80037218 = DAT_ram_80037260;
          return;
        }
        DAT_ram_80037274 = DAT_ram_80037274 + 1;
LAB_ram_00133a44:
        DAT_ram_8003721c = iVar5 + 1U;
        if (iVar5 + 1U < DAT_ram_80037264) {
          DAT_ram_8003721c = DAT_ram_80037264;
        }
        return;
      }
      iVar4 = 0;
    }
    iVar5 = iVar5 + 1;
    FUN_ram_000e4fa0(1);
    uVar1 = uVar2;
    uVar2 = _DAT_ram_e513ffb8;
    if (param_1 != 0) {
      uVar2 = _DAT_ram_e513ffc8;
    }
  } while( true );
}


