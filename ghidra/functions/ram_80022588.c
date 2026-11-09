/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80022588 */

void FUN_ram_80022588(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  
  if ((DAT_ram_8002c86c & 1) != 0) {
    bVar1 = param_2[1];
    if ((*param_2 & 0x8c) == 0x88) {
      if ((bVar1 & 3) == 3) {
        if ((*(ushort *)(param_1 + 0xc) & 8) == 0 || (bVar1 & 0x80) == 0) {
          uVar3 = 0x48;
        }
        else {
          uVar3 = 0x4c;
        }
      }
      else if ((*(ushort *)(param_1 + 0xc) & 8) == 0 || (bVar1 & 0x80) == 0) {
        uVar3 = 0x42;
      }
      else {
        uVar3 = 0x46;
      }
    }
    else {
      uVar3 = 0x46;
      if ((bVar1 & 3) != 3) {
        uVar3 = 0x40;
      }
    }
    if ((bVar1 & 0x40) != 0) {
      iVar2 = FUN_ram_0013bb0c(*(undefined1 *)(param_1 + 0x67e));
      uVar3 = uVar3 + iVar2 & 0xffff;
    }
    iVar2 = *(int *)(param_1 + 0x7bc) + param_3;
    *(int *)(param_1 + 0x7bc) = iVar2;
    if ((int)uVar3 < param_3) {
      *(uint *)(param_1 + 0x7bc) = iVar2 - uVar3;
    }
  }
  return;
}


