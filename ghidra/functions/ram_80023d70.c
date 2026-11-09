/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80023d70 */

undefined4 FUN_ram_80023d70(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  do {
    iVar2 = FUN_ram_800239d8(0,0);
  } while (iVar2 != 0);
  do {
    iVar2 = FUN_ram_800239d8(1,0);
  } while (iVar2 != 0);
  puVar5 = &DAT_ram_8002c9a4;
  bVar1 = false;
  iVar2 = 2;
  do {
    do {
      iVar3 = FUN_ram_80023b78(puVar5,0);
    } while (0 < iVar3);
    if (iVar3 < 0) {
      bVar1 = true;
    }
    iVar2 = iVar2 + -1;
    puVar5 = puVar5 + 3;
  } while (iVar2 != 0);
  if ((DAT_ram_8002c98c != 0) || (DAT_ram_8002c998 != 0 || bVar1)) {
    DAT_ram_80037294 = DAT_ram_80037294 + 1;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    DAT_ram_80037290 = DAT_ram_80037290 + 1;
  }
  return uVar4;
}


