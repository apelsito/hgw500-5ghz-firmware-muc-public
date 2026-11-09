/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fb0e4 */

byte FUN_ram_000fb0e4(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0x80;
  do {
    DAT_ram_0018c074 = DAT_ram_0018c074 + 1 & 0x7f;
    if ((3 < DAT_ram_0018c074) && (DAT_ram_0018c074 != 0x3f && DAT_ram_0018c074 != 0x7f)) {
      FUN_ram_000fb058(param_1,2,0,DAT_ram_0018c074,0);
      uVar3 = *(uint *)(*(int *)(param_1 + 0xc) + 0x3020);
      if (param_2 == 1) {
        if (DAT_ram_0018c074 < 0x40) {
          bVar1 = DAT_ram_0018c074 + 0x40;
        }
        else {
          if (DAT_ram_0018c074 < 0x44) goto LAB_ram_000fb18c;
          bVar1 = DAT_ram_0018c074 - 0x40;
        }
        FUN_ram_000fb058(param_1,2,0,bVar1,0);
        if ((uVar3 & 1) == 0 && (*(uint *)(*(int *)(param_1 + 0xc) + 0x3020) & 1) == 0) {
          if (DAT_ram_0018c074 < 0x40) {
            return DAT_ram_0018c074;
          }
          return bVar1;
        }
      }
      else if ((uVar3 & 1) == 0) {
        return DAT_ram_0018c074;
      }
    }
LAB_ram_000fb18c:
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      return 0xff;
    }
  } while( true );
}


