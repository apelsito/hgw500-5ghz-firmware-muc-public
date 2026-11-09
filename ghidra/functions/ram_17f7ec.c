/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017f7ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_0017f7ec(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  undefined4 *puVar5;
  
  iVar3 = DAT_ram_0018c3bc;
  puVar5 = &DAT_ram_00214290;
  if (DAT_ram_8002c8bc != '\x01') {
    iVar1 = DAT_ram_0018c3bc * 0xf;
    (&DAT_ram_002142b4)[DAT_ram_0018c3bc * 0xf] = param_1 + 4;
    FUN_ram_0017f47c(&DAT_ram_00214290 + iVar1);
    if (DAT_ram_0018c3b8 == '\x01') {
      FUN_ram_000ee260(&DAT_ram_001ca068);
      iVar1 = (&DAT_ram_002142c0)[iVar3 * 0xf];
    }
    else if (DAT_ram_0018c3b8 == '\x02') {
      FUN_ram_000ee260(&DAT_ram_001ca068);
      iVar1 = (&DAT_ram_002142c0)[iVar3 * 0xf];
    }
    else {
      iVar1 = (&DAT_ram_002142c0)[iVar3 * 0xf];
    }
    if (iVar1 == 1) {
      (&DAT_ram_002142c0)[iVar3 * 0xf] = 0;
    }
    uVar2 = (uint)(DAT_ram_0018c3bc + 1 >> 1) >> 0x1e;
    DAT_ram_0018c3bc = (DAT_ram_0018c3bc + 1 + uVar2 & 3) - uVar2;
    _DAT_ram_e6000168 = DAT_ram_0018c3bc;
    return iVar1 == 1;
  }
  iVar3 = 4;
  bVar4 = false;
  do {
    puVar5[9] = param_1;
    FUN_ram_0017f47c(puVar5);
    if (puVar5[0xc] == 1) {
      bVar4 = true;
      puVar5[0xc] = 0;
    }
    iVar3 = iVar3 + -1;
    puVar5 = puVar5 + 0xf;
  } while (iVar3 != 0);
  if ((DAT_ram_0018c3b8 != '\x01') && (DAT_ram_0018c3b8 != '\x02')) {
    return bVar4;
  }
  FUN_ram_000ee260(&DAT_ram_001ca068);
  return bVar4;
}


