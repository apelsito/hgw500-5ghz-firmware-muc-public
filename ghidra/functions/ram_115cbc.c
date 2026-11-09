/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00115cbc */

undefined4 FUN_ram_00115cbc(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_3 + 0x1c);
  uVar4 = (*(byte *)(param_3 + 0x1b) & 8) >> 3;
  iVar2 = (uint)*(byte *)(param_2 + 0x4e9) * 4;
  if (uVar4 == 1) {
    if ((bVar1 & 0x80) == 0) {
      if ((bVar1 & 0x40) == 0) {
        *(int *)(&DAT_ram_80037700 + iVar2) = *(int *)(&DAT_ram_80037700 + iVar2) + 1;
        if ((*(uint *)(param_1 + 0x5aa8) & 0x400000) == 0) {
          return 1;
        }
        pcVar3 = s_MU_precoding_snd_tk__0x_02x_from_ram_001c1e1c;
      }
      else {
        *(int *)(&DAT_ram_800376d8 + iVar2) = *(int *)(&DAT_ram_800376d8 + iVar2) + 1;
        if ((*(uint *)(param_1 + 0x5aa8) & 0x200000) == 0) {
          return 1;
        }
        pcVar3 = s_MU_group_selection_snd_tk__0x_02_ram_001c1df0;
      }
      FUN_ram_000ee260(pcVar3,bVar1 >> 2,*(ushort *)(param_2 + 0x18) & 0x3fff);
      return 1;
    }
  }
  else if ((uVar4 == 0) && ((bVar1 & 0x80) != 0)) {
    *(int *)(&DAT_ram_80037728 + iVar2) = *(int *)(&DAT_ram_80037728 + iVar2) + 1;
    if ((*(uint *)(param_1 + 0x5aa8) & 0x100000) == 0) {
      return 1;
    }
    FUN_ram_000ee260(s_SU_snd_tk__0x_02x_from__u_ram_001c1dd4,bVar1 >> 2,
                     *(ushort *)(param_2 + 0x18) & 0x3fff);
    return 1;
  }
  *(int *)(&DAT_ram_80037750 + iVar2) = *(int *)(&DAT_ram_80037750 + iVar2) + 1;
  return 0;
}


