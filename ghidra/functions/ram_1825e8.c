/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001825e8 */

void FUN_ram_001825e8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  
  DAT_ram_00220510 = uRame60920d4;
  uRame60920d4 = DAT_ram_0019d5f4;
  DAT_ram_00220514 = uRame60920d8;
  uRame60920d8 = DAT_ram_0019d5f8;
  DAT_ram_00220518 = uRame60920dc;
  uRame60920dc = DAT_ram_0019d5fc;
  DAT_ram_0022051c = uRame60920e0;
  uRame60920e0 = DAT_ram_0019d600;
  DAT_ram_00220520 = uRame60920e4;
  uRame60920e4 = DAT_ram_0019d604;
  DAT_ram_00220524 = uRame60920e8;
  uRame60920e8 = DAT_ram_0019d608;
  DAT_ram_00220528 = uRame60920ec;
  uRame60920ec = DAT_ram_0019d60c;
  DAT_ram_0022052c = uRame60920f0;
  uRame60920f0 = DAT_ram_0019d610;
  DAT_ram_00220530 = uRame60920f4;
  uRame60920f4 = DAT_ram_0019d614;
  DAT_ram_00220534 = uRame60920f8;
  uRame60920f8 = DAT_ram_0019d618;
  DAT_ram_00220538 = uRame609226c;
  uRame609226c = DAT_ram_0019d61c;
  DAT_ram_0022053c = uRame6092270;
  uRame6092270 = DAT_ram_0019d620;
  DAT_ram_00220540 = uRame6092274;
  uRame6092274 = DAT_ram_0019d624;
  DAT_ram_00220544 = uRame6092278;
  uRame6092278 = DAT_ram_0019d628;
  DAT_ram_00220548 = uRame609227c;
  uRame609227c = DAT_ram_0019d62c;
  DAT_ram_0022054c = uRame6092280;
  uRame6092280 = DAT_ram_0019d630;
  DAT_ram_00220550 = uRame6092284;
  uRame6092284 = DAT_ram_0019d634;
  iVar1 = 0x12;
  DAT_ram_00220554 = uRame6092288;
  uRame6092288 = DAT_ram_0019d638;
  iVar4 = 0;
  iVar7 = 0x12;
  LP_START = 0x1828b8;
  LP_END = 0x1828e0;
  puVar2 = &DAT_ram_0019d5f4;
  do {
    puVar6 = &DAT_ram_00220510 + iVar1;
    puVar3 = (undefined4 *)(iVar4 * 4 + -0x19f6dc9c);
    iVar1 = iVar1 + 1;
    uVar5 = *puVar2;
    *puVar6 = *puVar3;
    iVar4 = iVar4 + 1;
    *puVar3 = uVar5;
    iVar7 = iVar7 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar7 != 0);
  iVar4 = 0;
  iVar7 = 0x12;
  LP_START = 0x1828f4;
  LP_END = 0x182918;
  puVar2 = &DAT_ram_0019d5f4;
  do {
    puVar6 = &DAT_ram_00220510 + iVar1;
    puVar3 = (undefined4 *)(iVar4 * 4 + -0x19f6dc54);
    iVar1 = iVar1 + 1;
    uVar5 = *puVar2;
    *puVar6 = *puVar3;
    iVar4 = iVar4 + 1;
    *puVar3 = uVar5;
    iVar7 = iVar7 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar7 != 0);
  return;
}


