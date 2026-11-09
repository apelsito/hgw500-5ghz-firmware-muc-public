/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000eeca8 */

void FUN_ram_000eeca8(char *param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    FUN_ram_000ee260(&DAT_ram_001bdae8,param_1);
  }
  do {
    if (param_3 < 1) {
      FUN_ram_000ee260(&DAT_ram_001bdae4);
      return;
    }
    FUN_ram_000ee260(&DAT_ram_001bdaec,param_2);
    if (param_3 < 0x10) {
      iVar2 = param_3;
      if (0 < param_3) goto LAB_ram_000eed2c;
    }
    else {
      iVar2 = 0x10;
LAB_ram_000eed2c:
      iVar1 = 0;
      puVar3 = param_2;
      do {
        param_2 = puVar3 + 1;
        FUN_ram_000ee260(s__02x_ram_001bdaf4,*puVar3);
        iVar1 = iVar1 + 1;
        puVar3 = param_2;
      } while (iVar1 < iVar2);
    }
    FUN_ram_000ee260(&DAT_ram_001bdae4);
    param_3 = param_3 - iVar2;
  } while( true );
}


