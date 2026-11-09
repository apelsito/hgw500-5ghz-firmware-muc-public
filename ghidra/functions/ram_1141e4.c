/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001141e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_001141e4(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  
  FUN_ram_800255f4(param_2 + 0xd78,0xc);
  if ((_DAT_ram_e00000bc < 0x80000000) || (0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < 0x8000000) {
      uVar2 = _DAT_ram_e00000bc + 0x40000000;
    }
    else {
      uVar2 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < 0xc0000000) {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = _DAT_ram_e00000bc + 0xe0000000;
  }
  piVar1 = *(int **)(uVar2 + 0x5c);
  if ((piVar1 < (int *)0x80000000) || ((int *)0x8007ffff < piVar1)) {
    if (piVar1 < (int *)0x8000000) {
      piVar1 = piVar1 + 0x10000000;
    }
    else if (piVar1 < (int *)0xc0000000) {
      piVar1 = (int *)0x0;
    }
  }
  else {
    piVar1 = piVar1 + -0x8000000;
  }
  if (piVar1 != (int *)0x0) {
    if (piVar1[0x209] == 0) {
      piVar1[0x208] = 0xb;
      piVar1[0x209] = 1;
      piVar1[0x20e] = param_3;
      piVar1[0x211] = param_2 + 0xd78;
      piVar1[0x210] = param_2 + 0xd7c;
      piVar1[0x20d] = param_2 + 0xd80;
      piVar1[0x20f] = (int)&DAT_ram_8002c958;
      piVar1[0x213] = 0xff;
      *(char *)(piVar1 + 0x214) = (char)DAT_ram_8002c904;
      if (*piVar1 == -1) {
        *piVar1 = 0xff;
        sync();
        _DAT_ram_e0000024 = 0x10001;
        sync();
      }
      else if (DAT_ram_8002c942 != '\0') {
        FUN_ram_000ee260(s_Opti_msg_send_delay_i__u_ram_001c1c70,piVar1[0x213]);
      }
      FUN_ram_000ed004(piVar1 + 0x208,0x40);
      return;
    }
    if (DAT_ram_8002c942 != '\0') {
      FUN_ram_000ee260(s_Opti_msg_failed__state____u_ram_001c1c50,piVar1[0x209]);
      return;
    }
  }
  return;
}


