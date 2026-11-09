/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00167b20 */

undefined4 FUN_ram_00167b20(undefined4 param_1)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  psVar2 = (short *)FUN_ram_000ee734(0x14,0);
  FUN_ram_000eea80(psVar2,0,0x14);
  uVar3 = FUN_ram_000f3c18(param_1,0);
  FUN_ram_000f3ce8(uVar3,psVar2,0x14);
  sVar1 = *psVar2;
  if (sVar1 == 0x24 || sVar1 == 0x32) {
    *(short *)(&DAT_ram_0018c2bc + DAT_ram_0018c2f0 * 2) = psVar2[1];
    uVar4 = *(undefined4 *)(psVar2 + 4);
    FUN_ram_000f3cf8(uVar3);
    FUN_ram_000ee834(psVar2);
    return uVar4;
  }
  if (sVar1 == 0x22) {
    *(short *)(&DAT_ram_0018c2b8 + DAT_ram_0018c2f0 * 2) = psVar2[1];
    uVar4 = *(undefined4 *)(psVar2 + 4);
    FUN_ram_000f3cf8(uVar3);
    FUN_ram_000ee834(psVar2);
    return uVar4;
  }
  uVar4 = *(undefined4 *)(psVar2 + 4);
  FUN_ram_000f3cf8(uVar3);
  FUN_ram_000ee834(psVar2);
  return uVar4;
}


