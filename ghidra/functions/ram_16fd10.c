/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016fd10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_0016fd10(byte *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  
  bVar3 = FUN_ram_001711e0(0x298,0x1c000,0xe);
  *param_1 = bVar3;
  bVar3 = FUN_ram_001711e0(0x2a0,0xc,2);
  uVar1 = _DAT_ram_e6090364;
  param_1[1] = bVar3;
  uVar2 = _DAT_ram_e6090368;
  param_1[2] = (byte)uVar1;
  uVar1 = _DAT_ram_e609036c;
  param_1[3] = (byte)uVar2;
  uVar2 = _DAT_ram_e6090370;
  param_1[4] = (byte)uVar1;
  param_1[5] = (byte)uVar2;
  *(ushort *)(param_1 + 6) =
       (ushort)param_1[4] * 2 + 4 + (ushort)*param_1 * -2 + (ushort)param_1[1] * 4;
  return;
}


