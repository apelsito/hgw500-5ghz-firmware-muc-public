/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f1e08 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000f1e08(char *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  
  if (DAT_ram_001cb2ac != 0) {
    cVar5 = *param_1;
    uVar3 = DAT_ram_001cb2a4;
    while (DAT_ram_001cb2a4 = uVar3, cVar5 != '\0') {
      if (cVar5 == '\n') {
        uVar2 = STATUS32;
        if ((uVar2 & 2) != 0) {
          STATUS32 = uVar2 & 0xfffffffd;
        }
        DAT_ram_001cb2a4 = uVar3 + 1;
        bVar1 = DAT_ram_001cb2a4 < DAT_ram_001cb2a0;
        *(undefined1 *)(DAT_ram_001cb2ac + uVar3) = 0xd;
        if (bVar1) {
          if (DAT_ram_001cb2a4 == DAT_ram_001cb2a8) goto LAB_ram_000f1ea4;
        }
        else {
          DAT_ram_001cb2a4 = 0;
          if (DAT_ram_001cb2a8 == 0) {
LAB_ram_000f1ea4:
            DAT_ram_001cb2a8 = DAT_ram_001cb2a8 + 1;
            if (DAT_ram_001cb2a0 <= DAT_ram_001cb2a8) {
              DAT_ram_001cb2a8 = 0;
            }
          }
        }
        STATUS32 = uVar2;
        cVar5 = *param_1;
      }
      param_1 = param_1 + 1;
      uVar3 = STATUS32;
      if ((uVar3 & 2) != 0) {
        STATUS32 = uVar3 & 0xfffffffd;
      }
      pcVar4 = (char *)(DAT_ram_001cb2a4 + DAT_ram_001cb2ac);
      bVar1 = DAT_ram_001cb2a4 + 1 < DAT_ram_001cb2a0;
      DAT_ram_001cb2a4 = DAT_ram_001cb2a4 + 1;
      *pcVar4 = cVar5;
      if (bVar1) {
        if (DAT_ram_001cb2a4 == DAT_ram_001cb2a8) goto LAB_ram_000f1f0c;
      }
      else {
        DAT_ram_001cb2a4 = 0;
        if (DAT_ram_001cb2a8 == 0) {
LAB_ram_000f1f0c:
          DAT_ram_001cb2a8 = DAT_ram_001cb2a8 + 1;
          if (DAT_ram_001cb2a0 <= DAT_ram_001cb2a8) {
            DAT_ram_001cb2a8 = 0;
          }
        }
      }
      STATUS32 = uVar3;
      if ((_DAT_ram_f0000014 & 0x40) != 0) {
        uVar3 = STATUS32;
        if ((uVar3 & 2) != 0) {
          STATUS32 = uVar3 & 0xfffffffd;
        }
        if (DAT_ram_001cb2a4 != DAT_ram_001cb2a8) {
          _DAT_ram_f0000000 = (uint)*(byte *)(DAT_ram_001cb2ac + DAT_ram_001cb2a8);
          DAT_ram_001cb2a8 = DAT_ram_001cb2a8 + 1;
          if (DAT_ram_001cb2a0 <= DAT_ram_001cb2a8) {
            DAT_ram_001cb2a8 = 0;
          }
        }
        STATUS32 = uVar3;
      }
      uVar3 = DAT_ram_001cb2a4;
      cVar5 = *param_1;
    }
  }
  return;
}


