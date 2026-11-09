/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016a1a8 */

undefined4 FUN_ram_0016a1a8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  
  iVar1 = FUN_ram_000f4bdc(param_2);
  puVar2 = (undefined2 *)FUN_ram_000ee734(0x14,0);
  FUN_ram_000eea80(puVar2,0,0x14);
  if ((iVar1 + -(iVar1 >> 0x1f) & 1U) == -(iVar1 >> 0x1f)) {
    uVar4 = 0x22;
  }
  else {
    uVar4 = 0x24;
    if (iVar1 % 2 != 1) {
      uVar4 = 0x32;
    }
  }
  *puVar2 = uVar4;
  *(undefined4 *)(puVar2 + 2) = 0;
  uVar4 = DAT_ram_0018c2f8;
  puVar2[7] = 0;
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar2[1] = uVar4;
  iVar3 = *(int *)(&DAT_ram_001dce70 + iVar1 * 0x14);
  puVar2[6] = 0;
  if (iVar3 != 0) {
    FUN_ram_000ee834();
  }
  *(undefined2 **)(&DAT_ram_001dce70 + iVar1 * 0x14) = puVar2;
  return 0;
}


