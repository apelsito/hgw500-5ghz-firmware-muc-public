/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0039fec8 */

void FUN_ram_0039fec8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  int iVar6;
  
  DAT_ram_8002fe20 = 0;
  DAT_ram_8002fe24 = &DAT_ram_8002fe20;
  DAT_ram_8002fe28 = 0;
  DAT_ram_8002fe2c = &DAT_ram_001c7fc0;
  DAT_ram_8002fe30 = 0;
  DAT_ram_8002fe34 = 0;
  DAT_ram_8002fe38 = &DAT_ram_8002fe34;
  DAT_ram_8002fe3c = 0;
  DAT_ram_8002fe40 = &DAT_ram_001c7fc8;
  DAT_ram_8002fe44 = 0;
  DAT_ram_8002fe48 = 0;
  DAT_ram_8002fe4c = &DAT_ram_8002fe48;
  DAT_ram_8002fe50 = 0;
  DAT_ram_8002fe54 = &DAT_ram_001c7fc8;
  DAT_ram_8002fe58 = 1;
  DAT_ram_8002fe5c = 0;
  DAT_ram_8002fe60 = &DAT_ram_8002fe5c;
  DAT_ram_8002fe64 = 0;
  DAT_ram_8002fe68 = &DAT_ram_001c7fc8;
  DAT_ram_8002fe6c = 2;
  puVar5 = &DAT_ram_8002caa0;
  puVar3 = &DAT_ram_6003d420;
  puVar4 = &DAT_ram_8000f000;
  iVar6 = 0x19c;
  iVar1 = 0;
  LP_START = 0x39ff8c;
  LP_END = 0x39ffdc;
  do {
    puVar2 = puVar4 + 3;
    (&DAT_ram_8000f008)[iVar1 * 4] = puVar5;
    (&DAT_ram_6003d420)[iVar1 * 4] = 0;
    (&DAT_ram_6003d428)[iVar1 * 4] = 0;
    (&DAT_ram_6003d42c)[iVar1 * 4] = 0;
    (&DAT_ram_6003d424)[iVar1 * 4] = puVar5;
    (&DAT_ram_8000f000)[iVar1 * 4] = puVar3;
    puVar4[3] = 0;
    puVar5 = puVar5 + 0x20;
    puVar3 = puVar3 + 4;
    iVar1 = iVar1 + 1;
    *DAT_ram_8002fe24 = puVar4;
    puVar4 = puVar4 + 4;
    DAT_ram_8002fe28 = DAT_ram_8002fe28 + 1;
    iVar6 = iVar6 + -1;
    DAT_ram_8002fe24 = puVar2;
  } while (iVar6 != 0);
  if (DAT_ram_8002c8bc == '\x03') {
    FUN_ram_800248c8();
  }
  return;
}


