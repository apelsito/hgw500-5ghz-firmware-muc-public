/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018005c */

void FUN_ram_0018005c(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  
  if (DAT_ram_8002c8bc != '\x03') {
    DAT_ram_0018c3dc = '\x01';
    FUN_ram_0039fe00(&DAT_ram_0019a5a0,PTR_PTR_ram_0018c3b4,0x10);
    uVar1 = (ushort)DAT_ram_0019a5a0;
    if (uVar1 == 0) {
      DAT_ram_0018c2f8 = 0;
    }
    else {
      uVar4 = 0;
      uVar2 = 0;
      iVar3 = 0;
      do {
        uVar1 = uVar1 - 0x30 & 0xff;
        if (uVar1 == 0xfe) {
          DAT_ram_0018c3dc = '\0';
        }
        else if (DAT_ram_0018c3dc == '\0') {
          if (uVar1 < 10) {
            uVar4 = uVar1 + uVar4 * 10 & 0xff;
          }
        }
        else if (uVar1 < 10) {
          uVar2 = uVar1 + uVar2 * 10 & 0xff;
        }
      } while ((iVar3 + 1 < 0x10) &&
              (uVar1 = (ushort)(byte)(&DAT_ram_0019a5a1)[iVar3], iVar3 = iVar3 + 1, uVar1 != 0));
      DAT_ram_0018c2f8 = uVar2 << 8 | uVar4;
    }
  }
  return;
}


