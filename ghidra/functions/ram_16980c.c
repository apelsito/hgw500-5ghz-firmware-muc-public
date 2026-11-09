/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016980c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0016980c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  _DAT_ram_e6000160 = 1;
  _DAT_ram_e6000164 = 0;
  _DAT_ram_e6000170 = 0x200;
  _DAT_ram_e600016c = 2;
  puVar5 = &DAT_ram_00214290;
  iVar4 = 4;
  iVar3 = 0;
  do {
    iVar2 = 0;
    do {
      iVar1 = iVar3 * 0xf + iVar2;
      iVar2 = iVar2 + 1;
      (&DAT_ram_0021429c)[iVar1] = 0;
    } while (iVar2 < 2);
    (&DAT_ram_00214294)[iVar3 * 0xf] = 0;
    (&DAT_ram_00214298)[iVar3 * 0xf] = 0;
    iVar2 = DAT_ram_0018c010;
    (&DAT_ram_00214290)[iVar3 * 0xf] = iVar3;
    (&DAT_ram_002142b0)[iVar3 * 0x1e] = 9;
    if (iVar2 == 3) {
      (&DAT_ram_002142b0)[iVar3 * 0x1e] = 0x17;
    }
    (&DAT_ram_002142b2)[iVar3 * 0x1e] = 0;
    (&DAT_ram_002142b4)[iVar3 * 0xf] = (int)DAT_ram_002105f8;
    if (param_1 < 0) {
      (&DAT_ram_002142bc)[iVar3 * 0x3c] = 0;
    }
    else {
      (&DAT_ram_002142bc)[iVar3 * 0x3c] = 3;
    }
    FUN_ram_0017ac74(puVar5);
    FUN_ram_0017b1b4(iVar3,(int)(short)(&DAT_ram_002142b2)[iVar3 * 0x1e]);
    puVar5 = puVar5 + 0xf;
    iVar4 = iVar4 + -1;
    iVar3 = iVar3 + 1;
  } while (iVar4 != 0);
  return;
}


