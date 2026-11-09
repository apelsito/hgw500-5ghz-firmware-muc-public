/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012c830 */

void FUN_ram_0012c830(int *param_1,ushort param_2)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = DAT_ram_80038ee4;
  uVar1 = *(ushort *)(param_1 + 0x103);
  if (((param_2 & 8) == 0) && ((uVar1 & 8) != 0)) {
    bVar3 = CARRY4(*(uint *)(*param_1 + 0x70),DAT_ram_80038ee0);
    param_1[0x106] = *(uint *)(*param_1 + 0x70) + DAT_ram_80038ee0;
    param_1[0x107] = iVar2 + (uint)bVar3;
  }
  if (((param_2 & 1) != 0 || (uVar1 & 1) != 0) && (param_1[0x105] != 0)) {
    FUN_ram_000f7d60();
    param_1[0x105] = 0;
  }
  if ((param_2 & 0xb) != (uVar1 & 0xb)) {
    *(ushort *)(param_1 + 0x103) = *(ushort *)(param_1 + 0x103) & 0xfff4 | param_2 & 0xb;
    FUN_ram_0015762c(param_1);
  }
  return;
}


