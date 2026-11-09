/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012e45c */

void FUN_ram_0012e45c(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = param_2 * 4;
  (&DAT_ram_800375c0)[param_2] = 1;
  *(uint *)(&DAT_ram_800375e8 + iVar2) = (uint)*(ushort *)(param_1 + 0x18);
  bVar1 = *(byte *)(param_1 + 0x4ea);
  *(undefined4 *)(&DAT_ram_80037638 + iVar2) = 0;
  *(undefined4 *)(&DAT_ram_80037660 + iVar2) = 0;
  *(undefined4 *)(&DAT_ram_80037688 + iVar2) = 0;
  *(uint *)(&DAT_ram_80037610 + iVar2) = (uint)bVar1;
  *(undefined4 *)(&DAT_ram_800376b0 + iVar2) = 0;
  *(undefined4 *)(&DAT_ram_800376d8 + iVar2) = 0;
  *(undefined4 *)(&DAT_ram_80037700 + iVar2) = 0;
  *(undefined4 *)(&DAT_ram_80037728 + iVar2) = 0;
  *(undefined4 *)(&DAT_ram_80037750 + iVar2) = 0;
  *(undefined4 *)(&DAT_ram_80037778 + iVar2) = 0;
  *(undefined4 *)(&DAT_ram_800377a0 + iVar2) = 0;
  *(undefined4 *)(&DAT_ram_800377c8 + iVar2) = 0;
  return;
}


