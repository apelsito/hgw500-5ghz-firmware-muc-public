/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f6b50 */

uint FUN_ram_000f6b50(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((param_1 == 0) || (param_2 < 1)) {
    return 0;
  }
  iVar6 = 0;
  uVar3 = 0xffff;
  uVar4 = 0xffff;
  iVar5 = param_2;
  if (param_2 < 0x81) goto LAB_ram_000f6bcc;
  do {
    iVar5 = 0x80;
    param_2 = param_2 + -0x80;
    while( true ) {
      do {
        iVar5 = iVar5 + -1;
        uVar1 = *(uint *)(param_1 + iVar6 * 4);
        iVar2 = (uVar1 >> 0x10) + uVar3;
        uVar3 = (uVar1 & 0xffff) + iVar2;
        uVar4 = uVar4 + iVar2 + uVar3;
        iVar6 = iVar6 + 1;
      } while (iVar5 != 0);
      uVar3 = (uVar3 >> 0x10) + (uVar3 & 0xffff);
      uVar4 = (uVar4 >> 0x10) + (uVar4 & 0xffff);
      if (param_2 == 0) {
        return (uVar3 & 0xffff) + (uVar3 >> 0x10) | ((uVar4 & 0xffff) + (uVar4 >> 0x10)) * 0x10000;
      }
      iVar5 = param_2;
      if (0x80 < param_2) break;
LAB_ram_000f6bcc:
      param_2 = 0;
    }
  } while( true );
}


