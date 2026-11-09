/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80022150 */

undefined4
FUN_ram_80022150(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = ((uint)*(ushort *)(param_3 + 0xc) + param_5 & *(ushort *)(param_3 + 2) - 1 & 0xffff) *
          0x10;
  puVar1 = (undefined4 *)(*(int *)(param_3 + 8) + iVar2);
  if (*(int *)(*(int *)(param_3 + 8) + iVar2) != 0) {
    DAT_ram_80037038 = DAT_ram_80037038 + 1;
    return 1;
  }
  *puVar1 = param_4;
  *(short *)(param_3 + 0xe) = *(short *)(param_3 + 0xe) + 1;
  DAT_ram_80037034 = DAT_ram_80037034 + 1;
  uVar3 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + 0x3014);
  puVar1[2] = 0;
  puVar1[1] = uVar3;
  *(undefined1 *)(puVar1 + 3) = 0;
  return 0;
}


