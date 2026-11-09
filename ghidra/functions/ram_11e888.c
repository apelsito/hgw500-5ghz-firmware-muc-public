/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011e888 */

void FUN_ram_0011e888(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar2 = param_2 >> 0x18;
  uVar3 = param_2 >> 0x14 & 0xf;
  uVar4 = param_2 >> 8 & 0xf;
  uVar5 = (param_2 >> 0x10 & 0xf) - 1 & 0xff;
  iVar1 = uVar2 - 0xff;
  bVar7 = SBORROW4(uVar2,0xff);
  if (uVar2 < 0xff) {
    iVar1 = uVar3 - 2;
    bVar7 = SBORROW4(uVar3,2);
  }
  bVar6 = iVar1 < 0;
  if (bVar6 != bVar7) {
    bVar6 = (int)(uVar5 - 4) < 0;
    bVar7 = SBORROW4(uVar5,4);
  }
  if (bVar6 != bVar7) {
    bVar6 = (int)(uVar4 - 3) < 0;
    bVar7 = SBORROW4(uVar4,3);
  }
  if (bVar7 != bVar6) {
    *(char *)(uVar2 * 0x34 + uVar3 * 0xc + uVar5 * 3 + uVar4 + param_1 + 0x48a) = (char)param_2;
    FUN_ram_0011e774();
  }
  return;
}


