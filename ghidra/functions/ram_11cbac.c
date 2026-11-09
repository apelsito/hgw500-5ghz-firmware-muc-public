/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011cbac */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_0011cbac(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = FUN_ram_000e5c84();
  if (iVar2 == 3) {
    if (*(char *)(param_2 + 100) != '\0') {
      return;
    }
    cVar1 = *(char *)(param_2 + 0x68);
  }
  else {
    cVar1 = *(char *)(param_2 + 0x68);
  }
  if ((cVar1 == '\0') && (DAT_ram_8002c90b != '\0')) {
    FUN_ram_0012f818(param_1,param_2);
  }
  if ((*(ushort *)(param_2 + 0xc) & 8) == 0) {
    bVar3 = *(byte *)(param_2 + 100);
LAB_ram_0011cc50:
    if ((bVar3 != 0) ||
       (((*(byte *)(param_2 + 0x88) & 6) == 0 &&
        (((((*(uint *)(param_2 + 0x3c2) & 0x1000) == 0 ||
           ((param_4 != 0 && (*(char *)(param_2 + 0x68) != '\0')))) &&
          ((*(char *)(*(int *)(param_2 + 4) + 0x39e8) == '\0' ||
           (*(uint *)(param_2 + 0x3c2) & 0x100000) == 0) || param_4 == 0)) ||
         (DAT_ram_8002c90b == '\0')))))) {
      if ((param_4 != 0) && (iVar2 = FUN_ram_0014d95c(param_2), iVar2 != 0)) {
        return;
      }
      goto LAB_ram_0011ccf8;
    }
  }
  else {
    iVar2 = FUN_ram_000e5c84();
    if ((iVar2 == 2) || ((*(byte *)(param_2 + 100) & 2) == 0 && (*(byte *)(param_2 + 100) & 4) == 0)
       ) {
      iVar2 = FUN_ram_000e5c84();
      bVar3 = *(byte *)(param_2 + 100);
      if ((iVar2 != 2) || ((bVar3 & 0x40) == 0)) goto LAB_ram_0011cc50;
    }
  }
  FUN_ram_0012f5d8(param_1,param_2,param_3);
LAB_ram_0011ccf8:
  FUN_ram_0011bdb8(param_2);
  return;
}


