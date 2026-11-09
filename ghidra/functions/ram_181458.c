/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00181458 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00181458(void)

{
  int iVar1;
  undefined *extraout_r1;
  undefined *puVar2;
  undefined *extraout_r1_00;
  int *piVar3;
  
  FUN_ram_0018291c();
  iVar1 = FUN_ram_000e5038();
  _DAT_ram_e6092434 = 0;
  _DAT_ram_e6092438 = 0;
  _DAT_ram_e609243c = 0;
  _DAT_ram_e6092440 = 0;
  _DAT_ram_e6092444 = 0;
  _DAT_ram_e6092448 = 0;
  _DAT_ram_e609244c = 0;
  _DAT_ram_e6092450 = 0;
  _DAT_ram_e6092454 = 0;
  _DAT_ram_e6092458 = 0;
  _DAT_ram_e609245c = 0;
  _DAT_ram_e6092460 = 0;
  _DAT_ram_e6092464 = 0;
  _DAT_ram_e6092468 = 0;
  _DAT_ram_e609246c = 0;
  _DAT_ram_e6092470 = 0;
  _DAT_ram_e6092474 = 0;
  _DAT_ram_e6092478 = 0;
  _DAT_ram_e609247c = 0;
  _DAT_ram_e6092480 = 0;
  _DAT_ram_e6092484 = 0;
  _DAT_ram_e6092488 = 0;
  _DAT_ram_e609248c = 0;
  _DAT_ram_e6092490 = 0;
  _DAT_ram_e6092494 = 0;
  _DAT_ram_e6092498 = 0;
  _DAT_ram_e609249c = 0;
  _DAT_ram_e60924a0 = 0;
  _DAT_ram_e60924a4 = 0;
  _DAT_ram_e60924a8 = 0;
  _DAT_ram_e60924ac = 0;
  _DAT_ram_e60924b0 = 0;
  FUN_ram_00172b90(1,&DAT_ram_e60924b4);
  _DAT_ram_e609101c = 0xfe;
  if (iVar1 == 0x11) {
    DAT_ram_00220500 = DAT_ram_0019d0f0;
    DAT_ram_00220504 = DAT_ram_0019d0f4;
    DAT_ram_00220508 = DAT_ram_0019d0f8;
    DAT_ram_0022050c = DAT_ram_0019d0fc;
    puVar2 = extraout_r1;
  }
  else {
    DAT_ram_00220500 = DAT_ram_0019d100;
    DAT_ram_00220504 = DAT_ram_0019d104;
    DAT_ram_00220508 = DAT_ram_0019d108;
    puVar2 = &DAT_ram_0019d110;
    DAT_ram_0022050c = DAT_ram_0019d10c;
  }
  iVar1 = 4;
  piVar3 = &DAT_ram_00220500;
  do {
    iVar1 = iVar1 + -1;
    FUN_ram_00183358(*(undefined2 *)(&DAT_ram_002205e8 + *piVar3),puVar2);
    FUN_ram_001811bc((uint)(&DAT_ram_002205e8)[*piVar3] >> 8 & 0xf);
    piVar3 = piVar3 + 1;
    puVar2 = extraout_r1_00;
  } while (iVar1 != 0);
  FUN_ram_00172b90(0);
  FUN_ram_00183a40();
  return;
}


