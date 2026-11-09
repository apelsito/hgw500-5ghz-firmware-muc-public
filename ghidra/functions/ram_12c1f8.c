/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012c1f8 */

undefined4 FUN_ram_0012c1f8(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar5 = DAT_ram_0018c1b4;
  iVar3 = param_1 + 0x3fe0 + DAT_ram_0018c1b4 * 4;
  iVar6 = *(int *)(iVar3 + -0x2c);
  uVar7 = 0;
  if (((((DAT_ram_0018c1b4 == 0) || (iVar6 != *(int *)(iVar3 + -0x30))) && (iVar6 != 0)) &&
      ((iVar3 = *(int *)(iVar6 + 0x14), iVar3 != 0 && ((*(ushort *)(iVar3 + 0xc) & 0x10) == 0)))) &&
     (*(int *)(iVar6 + 0x7c) == 0)) {
    if ((*(byte *)(iVar3 + 0x458) & 1) == 0) {
      if (DAT_ram_0018c180 != 0) {
        if ((*(uint *)(iVar3 + 0x7d8) < DAT_ram_8002c914) ||
           (-1 < DAT_ram_80038ee0 - (*(int *)(iVar3 + 2000) + 10000))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        iVar4 = param_1 + 0x3f80 + DAT_ram_0018c1b4;
        if ((bVar2) ||
           (bVar1 = *(byte *)(iVar4 + 0x5c), *(byte *)(iVar4 + 0x5c) = bVar1 + 1, 0x32 < bVar1)) {
          *(undefined1 *)(iVar4 + 0x5c) = 0;
          FUN_ram_0012be34(param_1,iVar6);
          uVar7 = 1;
          iVar5 = DAT_ram_0018c1b4;
          if (*(int *)(iVar6 + 0x14) != 0) {
            *(undefined4 *)(iVar3 + 0x7d8) = 0;
          }
          goto LAB_ram_0012c380;
        }
      }
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0x7d8) = 0;
        if (iVar5 + 1 != 10) {
          DAT_ram_0018c1b4 = iVar5 + 1;
          return 0;
        }
        DAT_ram_0018c1b4 = 1;
        return 0;
      }
    }
    else {
      *(undefined4 *)(iVar6 + 0x14) = 0;
      FUN_ram_0010b568(param_1,iVar3);
      iVar5 = DAT_ram_0018c1b4;
      if (*(int *)(iVar6 + 0x14) != 0) {
        *(undefined4 *)(iVar3 + 0x7d8) = 0;
        if (DAT_ram_0018c1b4 + 1 != 10) {
          DAT_ram_0018c1b4 = DAT_ram_0018c1b4 + 1;
          return 0;
        }
        DAT_ram_0018c1b4 = 1;
        return 0;
      }
    }
  }
LAB_ram_0012c380:
  DAT_ram_0018c1b4 = iVar5 + 1;
  if (DAT_ram_0018c1b4 == 10) {
    DAT_ram_0018c1b4 = 1;
  }
  return uVar7;
}


