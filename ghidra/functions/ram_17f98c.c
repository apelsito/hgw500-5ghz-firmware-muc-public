/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017f98c */

undefined4 FUN_ram_0017f98c(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short local_4;
  short local_2;
  
  cVar1 = DAT_ram_8002c8d6 << 2;
  iVar6 = 0;
  local_4 = (short)param_3;
  cVar2 = DAT_ram_8002c8d5 << 2;
  local_2 = (short)((uint)param_3 >> 0x10);
  if (&UNK_auxregs_0705 < *(undefined **)(&DAT_ram_0018c2b8 + DAT_ram_0018c2f0 * 2)) {
    if (*(undefined **)(&DAT_ram_0018c2b8 + DAT_ram_0018c2f0 * 2) < &UNK_auxregs_0706) {
      FUN_ram_000ee260(s_Error__create_voltage_table__cal_ram_001ca92c);
    }
    else {
      iVar6 = (int)local_2 << 10;
    }
  }
  else {
    iVar6 = (int)local_2 << 8;
  }
  cVar3 = DAT_ram_8002c8d4;
  sVar5 = 0;
  iVar7 = param_1 * 0x3c8 + param_2 * 0xf2;
  iVar9 = 0x79;
  iVar10 = 0;
  iVar8 = iVar7;
  do {
    if (cVar3 == '\0') {
      sVar5 = (short)((int)((uint)(ushort)(&DAT_ram_0019b3fc)[iVar10] * (int)local_4 + iVar6) >> 0xe
                     );
joined_r0x0017faae:
      if (-0x201 < sVar5) goto LAB_ram_0017fab0;
LAB_ram_0017fab8:
      sVar5 = -0x200;
    }
    else {
      if (cVar3 != '\x01') {
        FUN_ram_000ee260(s_Error__create_voltage_table__tx_p_ram_001ca96c);
        goto joined_r0x0017faae;
      }
      sVar5 = (short)(iVar10 * local_4 * 0x20 + iVar6 >> 0xe);
      if (sVar5 < -0x200) goto LAB_ram_0017fab8;
LAB_ram_0017fab0:
      if (0x1ff < sVar5) {
        sVar5 = 0x1ff;
      }
    }
    *(short *)((int)&DAT_ram_0021ed54 + iVar8) = sVar5;
    iVar8 = iVar8 + 2;
    iVar9 = iVar9 + -1;
    iVar10 = iVar10 + 1;
  } while (iVar9 != 0);
  if (cVar1 + 1 < 0x79) {
    if (-1 < cVar2 + -1) {
      if ((&DAT_ram_0021ed56)[param_2 * 0x79 + param_1 * 0x1e4 + (int)cVar1] == 0x1ff)
      goto LAB_ram_0017fae0;
      if (*(short *)(iVar7 + cVar2 * 2 + 0x21ed52) != -0x200) {
        return 0;
      }
    }
    uVar4 = 1;
  }
  else {
LAB_ram_0017fae0:
    uVar4 = 2;
  }
  return uVar4;
}


