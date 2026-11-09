/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f9534 */

void FUN_ram_000f9534(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_ram_000ee260(s_current_ptr__d__d_ram_001bedcc,DAT_ram_0018c070,
                   0x30 - (uint)(DAT_ram_0018c06c - (&DAT_ram_002006bc)[DAT_ram_0018c070]) / 0x6c);
  FUN_ram_000ee260(&PTR_DAT_ram_00203a30_ram_001bede0);
  iVar1 = 0;
  iVar3 = 0x400;
  piVar2 = &DAT_ram_002006bc;
  do {
    FUN_ram_000ee260(&PTR_DAT_ram_00206425_ram_001bede4,
                     0x30 - (uint)(DAT_ram_0018c06c - *piVar2) / 0x6c);
    if (iVar1 != 0) {
      if (iVar1 == (iVar1 / 0x14) * 0x14) {
        FUN_ram_000ee260(&DAT_ram_001bede8,iVar1);
      }
    }
    iVar3 = iVar3 + -1;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 != 0);
  FUN_ram_000ee260(&DAT_ram_001bedf0);
  return;
}


