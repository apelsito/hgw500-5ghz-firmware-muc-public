/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010cbbc */

void FUN_ram_0010cbbc(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  
  iVar1 = DAT_ram_80038ee0;
  if ((*(short *)(param_1 + 0x4020) != 0) && (*(char *)(param_1 + 0x1e) == '\x06')) {
    iVar2 = *(int *)(param_1 + 0x4024);
    if (iVar2 == 0) {
      iVar2 = 0x14;
    }
    uVar3 = (iVar2 * 1000 + 0x2904U) / 1000;
    piVar6 = (int *)(param_1 + 0x3a18 + *(int *)(param_1 + 0x3a14) * 8);
    piVar4 = (int *)(param_1 + 0x3a18 + ((*(int *)(param_1 + 0x3a14) + 0x20) - uVar3 & 0x1f) * 8);
    uVar5 = *piVar6 - *piVar4;
    if ((0x37f < uVar5) || (0x37f < (uint)(piVar6[1] - piVar4[1]))) {
      *(int *)(param_1 + 0x40b8) = DAT_ram_80038ee0;
    }
    if ((1 < *(ushort *)(param_1 + 0x4022)) && ((DAT_ram_0018c0b4 + 1000) - iVar1 < 0)) {
      FUN_ram_000ee260(s_SCS__micro_stats__off_chan_dur___ram_001c0a74,uVar3,uVar5);
      DAT_ram_0018c0b4 = iVar1;
    }
  }
  return;
}


