/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012d030 */

void FUN_ram_0012d030(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_2 != 0) && (iVar1 = *(int *)(param_2 + 0xd28), iVar1 != 0)) {
    iVar3 = param_1 + 0x3fe0;
    iVar4 = 10;
    iVar2 = 0;
    while( true ) {
      if (iVar1 == *(int *)(iVar3 + -0x2c)) {
        if ((iVar2 != *(char *)(param_2 + 0x4e9)) && ((int)*(char *)(param_2 + 0x4e9) != iVar2 + -1)
           ) {
          FUN_ram_000ee260(s_TXBF__freeing_slot__u__node_set_f_ram_001c4294,iVar2);
        }
        *(undefined4 *)(iVar3 + -0x2c) = 0;
        (&DAT_ram_800375c0)[iVar2] = 0;
      }
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + 1;
      if (iVar4 == 0) break;
      iVar1 = *(int *)(param_2 + 0xd28);
    }
    *(undefined1 *)(param_2 + 0x4e9) = 0xff;
    *(undefined1 *)(param_2 + 0x4eb) = 0;
    DAT_ram_0018c194 = DAT_ram_0018c194 + 1;
    FUN_ram_000f7c10(30000,param_1,DAT_ram_0018c194,&LAB_ram_00134888,2);
  }
  return;
}


