/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f4c5c */

int FUN_ram_000f4c5c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  iVar2 = FUN_ram_000f4bdc(param_2);
  iVar1 = iVar2 * 0x14;
  piVar6 = (int *)(&DAT_ram_001dce6c + iVar1);
  iVar3 = (*DAT_ram_001dc444)(param_1,0);
  *piVar6 = iVar3;
  if (-1 < iVar3) {
    (*DAT_ram_001dc448)(iVar3,*(undefined4 *)(&DAT_ram_001dce70 + iVar1),0x14);
    iVar3 = *piVar6;
    uVar4 = (uint)*(ushort *)(*(int *)(&DAT_ram_001dce70 + iVar1) + 0xe);
    if (uVar4 == 0) {
      iVar5 = *(int *)(*(int *)(&DAT_ram_001dce70 + iVar1) + 8);
    }
    else {
      (*DAT_ram_001dc448)(iVar3,*(undefined4 *)(&DAT_ram_001dce74 + iVar1),uVar4 << 3);
      iVar3 = *piVar6;
      iVar5 = *(int *)(*(int *)(&DAT_ram_001dce70 + iVar1) + 8);
    }
    if (iVar5 != 0) {
      (*DAT_ram_001dc448)(iVar3,**(undefined4 **)(&DAT_ram_001dce7c + iVar1));
      iVar3 = *piVar6;
    }
    (*DAT_ram_001dc454)(iVar3);
  }
  return iVar2;
}


