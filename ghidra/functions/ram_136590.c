/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00136590 */

undefined4 FUN_ram_00136590(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *param_2;
  iVar1 = param_2[4];
  uVar3 = *(undefined4 *)(param_1 + 0x3b20);
  FUN_ram_0039fe00(iVar2 + 0x24,param_3,6);
  FUN_ram_00104fa4(uVar3,(char)iVar1,iVar2 + 0x24,1);
  return 0;
}


