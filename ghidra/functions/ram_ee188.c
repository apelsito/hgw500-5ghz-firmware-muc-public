/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ee188 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_000ee188(char *param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  int extraout_r1;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  
  piVar2 = DAT_ram_0018c038;
  if ((DAT_ram_0018c038 == (int *)0x0) || (iVar7 = DAT_ram_0018c038[2], iVar7 == 0)) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((param_1 != (char *)0x0) && (cVar6 = *param_1, cVar6 != '\0')) {
      iVar5 = *DAT_ram_0018c038;
      iVar4 = DAT_ram_0018c038[1];
      bVar1 = false;
      do {
        FUN_ram_000f5e64(iVar5,iVar4);
        *(char *)(extraout_r1 + iVar7) = cVar6;
        cVar6 = *param_1;
        iVar5 = iVar5 + 1;
        param_1 = param_1 + 1;
        bVar1 = (bool)(bVar1 | cVar6 == '\n');
        if (param_1 == (char *)0x0) break;
        cVar6 = *param_1;
      } while (cVar6 != '\0');
      *piVar2 = iVar5;
      if (bVar1) {
        _DAT_ram_e000002c = 0x40004000;
        sync();
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


