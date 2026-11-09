/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00113edc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00113edc(int param_1,int param_2,undefined1 *param_3,undefined1 *param_4,int param_5,
                     int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = DAT_ram_0018c0cc;
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar3 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar3 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = _DAT_ram_e00000bc + 0xe0000000;
  }
  piVar5 = *(int **)(uVar3 + 0x5c);
  if ((piVar5 < (int *)0x80000000) || ((int *)0x8007ffff < piVar5)) {
    if (piVar5 < (int *)0x8000000) {
      piVar5 = piVar5 + 0x10000000;
    }
    else if (piVar5 < (int *)0xc0000000) {
      piVar5 = (int *)0x0;
    }
  }
  else {
    piVar5 = piVar5 + -0x8000000;
  }
  if (piVar5 == (int *)0x0) {
    return;
  }
  piVar4 = piVar5 + DAT_ram_0018c0cc * 0x10 + 8;
  if (piVar5[DAT_ram_0018c0cc * 0x10 + 9] != 0) {
    DAT_ram_80037060 = DAT_ram_80037060 + 1;
    if (DAT_ram_8002c942 != '\0') {
      FUN_ram_000ee260(s_QTNRT_E_send_blocked__u__u__u_ram_001c1be4,DAT_ram_0018c0cc,piVar4[1],
                       *piVar4);
      return;
    }
    return;
  }
  *piVar4 = 8;
  piVar4[1] = 1;
  piVar4[6] = param_5;
  piVar4[8] = param_7;
  piVar4[9] = param_2;
  *(char *)(piVar4 + 0xc) = (char)**(undefined2 **)(param_1 + 0x3a04);
  piVar4[0xb] = iVar1;
  *(undefined1 *)(piVar4 + 2) = *param_3;
  *(undefined1 *)((int)piVar4 + 0xe) = *param_4;
  *(undefined1 *)((int)piVar4 + 9) = param_3[1];
  *(undefined1 *)((int)piVar4 + 0xf) = param_4[1];
  *(undefined1 *)((int)piVar4 + 10) = param_3[2];
  *(undefined1 *)(piVar4 + 4) = param_4[2];
  *(undefined1 *)((int)piVar4 + 0xb) = param_3[3];
  *(undefined1 *)((int)piVar4 + 0x11) = param_4[3];
  *(undefined1 *)(piVar4 + 3) = param_3[4];
  *(undefined1 *)((int)piVar4 + 0x12) = param_4[4];
  *(undefined1 *)((int)piVar4 + 0xd) = param_3[5];
  *(undefined1 *)((int)piVar4 + 0x13) = param_4[5];
  piVar4[5] = param_6;
  if (DAT_ram_8002c942 == '\0') {
    iVar2 = *piVar5;
  }
  else {
    FUN_ram_000ee260(s_QTNRT_send_i__u_n_0x_08x_s__04u___ram_001c1c04,iVar1,param_5,param_7);
    iVar2 = *piVar5;
    iVar1 = DAT_ram_0018c0cc;
  }
  if (iVar2 == -1) {
    *piVar5 = iVar1;
    sync();
    _DAT_ram_e0000024 = 0x10001;
    sync();
  }
  else {
    DAT_ram_80037064 = DAT_ram_80037064 + 1;
    if (DAT_ram_8002c942 != '\0') {
      FUN_ram_000ee260(s_QTNRT_E_send_delay_i__u_s__04u_ram_001c1c30,piVar4[0xb],param_7);
    }
    FUN_ram_00113e28(param_1,piVar4);
  }
  FUN_ram_000ed004(piVar4,0x40);
  if (0x1f < DAT_ram_0018c0cc + 1) {
    DAT_ram_0018c0cc = 0;
    return;
  }
  DAT_ram_0018c0cc = DAT_ram_0018c0cc + 1;
  return;
}


