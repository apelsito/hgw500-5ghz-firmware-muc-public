/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00140f88 */

void FUN_ram_00140f88(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  bVar1 = (&DAT_ram_001a9058)[*(byte *)(param_2 + 3)];
  uVar6 = 0;
  if (*(char *)(param_1 + 100) != '\0') {
    uVar5 = (int)(uint)bVar1 >> 4 & 3;
    uVar4 = bVar1 & 0xf;
    if ((bVar1 & 0x40) == 0) {
      iVar2 = uVar5 - 4;
      bVar7 = SBORROW4(uVar5,4);
      if (uVar5 < 4) {
        iVar2 = uVar4 - 10;
        bVar7 = SBORROW4(uVar4,10);
      }
      if (bVar7 != iVar2 < 0) {
        uVar6 = (uint)(byte)(&DAT_ram_001a8ce8)[uVar4 + uVar5 * 10];
      }
    }
    FUN_ram_001034e0(*(undefined4 *)(*(int *)(**(int **)(param_1 + 4) + 0x1c) + 0x3b20),
                     *(undefined1 *)(param_1 + 0x67c),(&DAT_ram_001a9058)[uVar6],0,
                     *(undefined1 *)(param_2 + 0x1f));
    uVar3 = DAT_ram_80038ee4;
    *(undefined4 *)(param_1 + 0xd68) = DAT_ram_80038ee0;
    *(undefined4 *)(param_1 + 0xd6c) = uVar3;
  }
  return;
}


