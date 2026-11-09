/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017f2cc */

undefined1 * FUN_ram_0017f2cc(void)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 4;
  iVar3 = 0;
  do {
    if (DAT_ram_0018c090 == 1) {
      bVar1 = DAT_ram_0018c3b8 == '\x03';
      (&DAT_ram_002142bc)[iVar3 * 0x3c] = 7;
      if (bVar1) {
        pcVar2 = s_calcmd_init_txpd__tx_pow_ctrl_st_ram_001ca700;
LAB_ram_0017f34c:
        FUN_ram_000ee260(pcVar2);
      }
    }
    else {
      bVar1 = DAT_ram_0018c3b8 == '\x03';
      (&DAT_ram_002142bc)[iVar3 * 0x3c] = 3;
      if (bVar1) {
        pcVar2 = s_calcmd_init_txpd__tx_pow_ctrl_st_ram_001ca738;
        goto LAB_ram_0017f34c;
      }
    }
    (&DAT_ram_002142a4)[iVar3 * 0xf] = 0;
    (&DAT_ram_002142b8)[iVar3 * 0xf] = 0;
    (&DAT_ram_002142c0)[iVar3 * 0xf] = 0;
    iVar4 = iVar4 + -1;
    iVar3 = iVar3 + 1;
    if (iVar4 == 0) {
      return &LAB_ram_0017fe28;
    }
  } while( true );
}


