/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015813c */

void FUN_ram_0015813c(undefined4 param_1,int param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = param_2 + 0x7e0;
  iVar7 = param_3 * 0x4c;
  bVar4 = *(byte *)(param_2 + 0x67c);
  bVar1 = *(byte *)(iVar8 + iVar7 + 0x3f);
  uVar2 = *(ushort *)(iVar7 + iVar8 + 0x1a);
  uVar3 = *(ushort *)(iVar8 + iVar7 + 0x46);
  bVar5 = 1;
  if (param_3 != 1) {
    if (param_3 == 5) {
      bVar5 = 2;
    }
    else if (param_3 == 6 || param_3 == 4) {
      bVar5 = 3;
    }
    else {
      bVar5 = -(param_3 == 7) & 3;
    }
  }
  uVar6 = FUN_ram_0012ca88(bVar5);
  FUN_ram_001563ac(0xb,(uint)uVar3 << 0x10 |
                       (bVar1 & 0xf) << 0xc | (param_3 & 0xf) << 8 | (uint)bVar4,
                   (uVar2 & 0xfff) << 8 | 0x40,uVar6 / 100 & 0xffff,1);
  return;
}


