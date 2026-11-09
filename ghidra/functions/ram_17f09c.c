/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017f09c */

void FUN_ram_0017f09c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_ram_00214290;
  iVar1 = 4;
  do {
    FUN_ram_0017b124(puVar2,param_1);
    FUN_ram_0017b260(puVar2,(int)*(short *)((int)puVar2 + 0x22));
    iVar1 = iVar1 + -1;
    puVar2 = puVar2 + 0xf;
  } while (iVar1 != 0);
  return;
}


