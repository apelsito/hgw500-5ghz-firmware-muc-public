/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00117f6c */

undefined4 FUN_ram_00117f6c(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_2 + 0x24);
  uVar1 = (uint)DAT_ram_8002c932;
  if (DAT_ram_8002c92e == 0) {
    if (((((*(char *)(param_2 + 6) != -1) || (*(char *)(param_2 + 7) != -1)) ||
         (*(char *)(param_2 + 8) != -1)) ||
        (((*(char *)(param_2 + 9) != -1 || (*(char *)(param_2 + 10) != -1)) ||
         (*(char *)(param_2 + 0xb) != -1)))) && (param_1 != 0x4208)) {
      if (param_1 != 8) {
        return 0;
      }
      if (*(char *)(iVar2 + 9) != '\x11') {
        return 0;
      }
      if (*(undefined **)(iVar2 + 0x16) != (undefined *)0x700 &&
          *(undefined **)(iVar2 + 0x16) != &UNK_auxregs_0900) {
        return 0;
      }
    }
  }
  else if (DAT_ram_8002c92e == 1) {
    if (param_1 != ((int)(uint)DAT_ram_8002c930 >> 8 | (DAT_ram_8002c930 & 0xff) << 8)) {
      return 0;
    }
  }
  else {
    if (DAT_ram_8002c92e != 2 || param_1 != 8) {
      return 0;
    }
    if (*(char *)(iVar2 + 9) == '\x11') {
      uVar3 = (uint)*(ushort *)(iVar2 + 0x16);
      if ((uVar1 == 0xffff) && (uVar3 == 0x700 || uVar3 == 0x900)) {
        return 1;
      }
    }
    else {
      uVar3 = 0;
    }
    if (((int)uVar1 >> 8 | (uVar1 & 0xff) << 8) != uVar3) {
      return 0;
    }
  }
  return 1;
}


