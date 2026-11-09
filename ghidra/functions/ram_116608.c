/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00116608 */

undefined4 FUN_ram_00116608(int param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((*(char *)(param_3 + 0x18) == '\x04') && (9 < *(byte *)(param_3 + 0x19))) &&
      (*(byte *)(param_3 + 0x19) < 0xe)) &&
     ((*(char *)(param_1 + 0x2c) == '\x06' && (iVar1 = FUN_ram_000e6c28(9), iVar1 == 0)))) {
    uVar2 = 0xffffffff;
  }
  else if (((param_2 == 0) ||
           (FUN_ram_0013d4c0(param_2,(char *)(param_3 + 0x18)), *(char *)(param_3 + 0x18) != '\x03')
           ) || ((*(char *)(param_3 + 0x19) != '\x02' || (param_5 < 0x1e)))) {
    uVar2 = 0;
  }
  else {
    FUN_ram_0015950c(param_3,param_4);
    uVar2 = 0;
  }
  return uVar2;
}


