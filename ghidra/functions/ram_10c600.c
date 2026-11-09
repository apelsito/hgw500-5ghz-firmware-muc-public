/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010c600 */

void FUN_ram_0010c600(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_ram_000ee260(s_Nodes__max__d___ram_001c0954,param_3);
  iVar2 = *(int *)(param_1 + 0x3da4);
  iVar1 = 0;
joined_r0x0010c634:
  do {
    if (iVar2 == 0) {
      FUN_ram_000ee260(s_Total___d_ram_001c0968,iVar1);
      return;
    }
    iVar1 = iVar1 + 1;
    if (iVar1 <= param_3) {
      if (param_2 != 0) {
        FUN_ram_001094f4();
        iVar2 = *(int *)(iVar2 + 0xd60);
        goto joined_r0x0010c634;
      }
      FUN_ram_0010c46c(param_1,iVar2,iVar1);
    }
    iVar2 = *(int *)(iVar2 + 0xd60);
  } while( true );
}


