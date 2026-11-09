/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016af2c */

undefined4 FUN_ram_0016af2c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_000ee734(0xde4,0);
  if (iVar1 == 0) {
    uVar2 = 0xc;
  }
  else {
    FUN_ram_000efab8(iVar1,&DAT_ram_0020fe58,0xdc4);
    *(int *)(iVar1 + 0xdc4) = iVar1;
    *(undefined4 *)(iVar1 + 0xdd4) = 0x48;
    FUN_ram_0016add0(param_2,iVar1);
    FUN_ram_000ee834(iVar1);
    uVar2 = 0;
  }
  return uVar2;
}


