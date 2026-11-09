/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80023900 */

void FUN_ram_80023900(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  do {
    DAT_ram_8002c1f0 = DAT_ram_80038ee0;
    uVar2 = (uint)DAT_ram_8002c1ec;
    if (uVar2 != 0) {
      iVar4 = 0;
      do {
        uVar1 = (uint)(byte)(&DAT_ram_8002c1cc)[iVar4];
        iVar3 = uVar1 * 0x1c;
        if ((*(uint *)(&DAT_ram_8002be5c + iVar3) & 4) != 0) {
          uVar2 = STATUS32;
          if ((uVar2 & 6) != 0) {
            STATUS32 = uVar2 & 0xfffffff9;
          }
          DAT_ram_001cb28c = uVar1;
          *(uint *)(&DAT_ram_8002be5c + iVar3) = *(uint *)(&DAT_ram_8002be5c + iVar3) & 0xfffffffb;
          STATUS32 = uVar2;
          (*(code *)(&DAT_ram_8002be4c)[uVar1 * 7])
                    (*(undefined4 *)(&DAT_ram_8002be50 + iVar3),
                     *(undefined4 *)(&DAT_ram_8002be54 + iVar3));
          uVar2 = (uint)DAT_ram_8002c1ec;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar2);
    }
    FUN_ram_0018bae8();
  } while( true );
}


