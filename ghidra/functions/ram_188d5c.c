/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00188d5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00188d5c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_ram_0018c010;
  iVar3 = 4;
  iVar2 = 0;
  do {
    iVar4 = 0;
    do {
      if (iVar1 == 3) {
        (&DAT_ram_002206e8)[iVar2 * 0x38 + iVar4 * 7] = 0x7ff;
        (&DAT_ram_002208a8)[iVar2 * 0x38 + iVar4 * 7] = 0;
        (&DAT_ram_00220a68)[iVar2 * 0x38 + iVar4 * 7] = 0;
        (&DAT_ram_00220c28)[iVar2 * 0x38 + iVar4 * 7] = 0x7ff;
      }
      else {
        (&DAT_ram_002206e8)[iVar2 * 0x38 + iVar4 * 7] = 0;
        (&DAT_ram_002208a8)[iVar2 * 0x38 + iVar4 * 7] = 0x7ff;
        (&DAT_ram_00220a68)[iVar2 * 0x38 + iVar4 * 7] = 0x7ff;
        (&DAT_ram_00220c28)[iVar2 * 0x38 + iVar4 * 7] = 0;
      }
      (&DAT_ram_002206ea)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_002208aa)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_00220a6a)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_00220c2a)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_002206ec)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_002208ac)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_00220a6c)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_00220c2c)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_002206ee)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_002208ae)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_00220a6e)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_00220c2e)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_002206f0)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_002208b0)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_00220a70)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_00220c30)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_002206f2)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_002208b2)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_00220a72)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_00220c32)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_002206f4)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_002208b4)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_00220a74)[iVar2 * 0x38 + iVar4 * 7] = 0;
      (&DAT_ram_00220c34)[iVar2 * 0x38 + iVar4 * 7] = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 8);
    iVar3 = iVar3 + -1;
    iVar2 = iVar2 + 1;
  } while (iVar3 != 0);
  FUN_ram_00188b3c();
  FUN_ram_00183bec(0xe60910e8,0x1fe,1,1);
  FUN_ram_00183bec(0xe60910e8,1,0,1);
  FUN_ram_00183bec(0xe60910e8,0x1fe,1,0);
  FUN_ram_00183bec(0xe60910e8,1,0,0);
  if (DAT_ram_0018c010 == 3) {
    if (param_2 != 0) {
      _DAT_ram_e6091060 = 1;
      return;
    }
    _DAT_ram_e6091060 = 0;
    return;
  }
  return;
}


