/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00107110 */

void FUN_ram_00107110(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (0xe < param_2) {
    FUN_ram_000ee260(s_invalid_mode__u_ram_001bfff0);
    FUN_ram_000ee260(0x1c0000);
  }
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 != 0) {
    bVar2 = (&DAT_ram_001a5f19)[param_2 * 0x20];
    iVar5 = 0;
    do {
      bVar3 = *(byte *)(param_1 + iVar5 + 2) & 0x7f;
      *(byte *)(param_1 + iVar5 + 2) = bVar3;
      if (bVar2 != 0) {
        iVar4 = 0;
        LP_START = 0x107180;
        LP_END = 0x107194;
        uVar6 = (uint)bVar2;
        do {
          if (bVar3 == (&DAT_ram_001a5f1a)[iVar4 + param_2 * 0x20]) {
            *(byte *)(param_1 + iVar5 + 2) = bVar3 | 0x80;
            break;
          }
          iVar4 = iVar4 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)(uint)bVar1);
  }
  return;
}


