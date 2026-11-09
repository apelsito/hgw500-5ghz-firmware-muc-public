/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00182bc4 */

void FUN_ram_00182bc4(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uRame60920d4 = DAT_ram_00220510;
  uRame60920d8 = DAT_ram_00220514;
  uRame60920dc = DAT_ram_00220518;
  uRame60920e0 = DAT_ram_0022051c;
  uRame60920e4 = DAT_ram_00220520;
  uRame60920e8 = DAT_ram_00220524;
  uRame60920ec = DAT_ram_00220528;
  uRame60920f0 = DAT_ram_0022052c;
  uRame60920f4 = DAT_ram_00220530;
  uRame60920f8 = DAT_ram_00220534;
  uRame609226c = DAT_ram_00220538;
  uRame6092270 = DAT_ram_0022053c;
  uRame6092274 = DAT_ram_00220540;
  uRame6092278 = DAT_ram_00220544;
  uRame609227c = DAT_ram_00220548;
  uRame6092280 = DAT_ram_0022054c;
  uRame6092284 = DAT_ram_00220550;
  iVar4 = 0x12;
  uRame6092288 = DAT_ram_00220554;
  iVar5 = 0x12;
  iVar3 = 0;
  LP_START = 0x182e0e;
  LP_END = 0x182e2e;
  do {
    puVar1 = &DAT_ram_00220510 + iVar4;
    iVar2 = iVar3 * 4;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar2 + -0x19f6dc9c) = *puVar1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = 0x12;
  iVar3 = 0;
  LP_START = 0x182e3a;
  LP_END = 0x182e5a;
  do {
    puVar1 = &DAT_ram_00220510 + iVar4;
    iVar2 = iVar3 * 4;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar2 + -0x19f6dc54) = *puVar1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}


