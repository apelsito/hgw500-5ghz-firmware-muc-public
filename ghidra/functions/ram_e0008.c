/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e0008 */

/* WARNING: This function may have set the stack pointer */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void muc_vector_target_00(void)

{
  int iVar1;
  undefined1 *puVar2;
  
  _DAT_ram_e0000064 = 0;
  sync();
  iVar1 = 0x10000;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  Auxregs0025 = 0x80030000;
  STATUS32 = 0;
  AUX_IENABLE = 0;
  _DAT_ram_e000005c = 0;
  _DAT_ram_e0000050 = 0xffffffff;
  _DAT_ram_e000000c = 0x20000;
  _DAT_ram_e0000008 = 0;
  sync();
  puVar2 = &DAT_ram_8003efc0;
  do {
    *puVar2 = 0x5f;
    puVar2 = puVar2 + 1;
  } while (puVar2 != &DAT_ram_8003f7c0);
  FUN_ram_000e5d80();
  FUN_ram_000e2ca4();
  FUN_ram_000e6110(0);
  do {
    STATUS32 = 1;
  } while( true );
}


