/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011714c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_0011714c(uint param_1)

{
  short sVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  piVar6 = &DAT_ram_8002c9a4;
  iVar10 = 2;
  uVar4 = param_1;
  do {
    if (param_1 == *(ushort *)(piVar6 + 2)) {
      piVar5 = (int *)*piVar6;
      while (piVar5 != (int *)0x0) {
        sVar1 = *(short *)(piVar5 + 4);
        *piVar6 = *piVar5;
        iVar7 = piVar5[1];
        uVar2 = STATUS32;
        if ((uVar2 & 2) != 0) {
          STATUS32 = uVar2 & 0xfffffffd;
        }
        if ((_DAT_ram_e1020114 & 0x80000000) == 0) {
          iVar8 = 0;
          bVar3 = false;
          do {
            iVar9 = 0;
            do {
              sync();
              iVar9 = iVar9 + 1;
            } while (iVar9 < 10);
            if ((!bVar3) && (iVar8 = iVar8 + 1, iVar8 == 0x3e9)) {
              FUN_ram_000ee260(s_MuC___s_ram_001c19a4,s___topaz_hbm_wait_timeout_ram_001c1cd0);
              bVar3 = true;
            }
          } while ((_DAT_ram_e1020114 & 0x80000000) == 0);
        }
        sync();
        _DAT_ram_e1020114 = 0xd;
        uVar4 = 0xd;
        sync();
        STATUS32 = uVar2;
        _DAT_ram_e1020144 = sVar1 + iVar7;
        piVar5 = (int *)*piVar6;
      }
    }
    iVar10 = iVar10 + -1;
    piVar6 = piVar6 + 3;
  } while (iVar10 != 0);
  return uVar4;
}


