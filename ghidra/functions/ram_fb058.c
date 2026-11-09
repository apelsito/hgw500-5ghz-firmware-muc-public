/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fb058 */

void FUN_ram_000fb058(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if (param_2 == 2) {
    DAT_ram_80037950 = DAT_ram_80037950 + 1;
  }
  else if (param_2 == 1) {
    DAT_ram_80037954 = DAT_ram_80037954 + 1;
  }
  iVar1 = 0;
  if (param_5 != 0) {
    iVar1 = 0x100000;
  }
  *(uint *)(*(int *)(param_1 + 0xc) + (uint)(param_5 != 0) * 0x100000 + 0x301c) =
       *(uint *)(*(int *)(param_1 + 0xc) + iVar1 + 0x301c) & 0x10000030 |
       param_4 << 0x10 | param_2 | param_3 << 2;
  FUN_ram_000fafac(param_1,param_5);
  return;
}


