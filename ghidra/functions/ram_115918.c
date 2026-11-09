/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00115918 */

undefined4 FUN_ram_00115918(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_2 + 4);
  uVar4 = uVar3 & 0xf0;
  if (((((*(ushort *)(param_4 + 0xc) & 0x1000) == 0 || (*(ushort *)(param_4 + 0xc) & 0x10) == 0) ||
       (*(char *)(param_4 + 0x420) == '\0')) ||
      (iVar2 = FUN_ram_00159570(param_4), iVar2 != 0 || (uVar3 & 0xc) != 8)) ||
     (uVar4 != 0x80 && uVar4 != 0xc0)) {
    uVar1 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0xc) & 0xf;
    if ((uVar3 == 0) || (uVar3 == 3)) {
      iVar2 = 0;
    }
    else if (uVar3 < 3) {
      iVar2 = 1;
    }
    else {
      iVar2 = (5 < uVar3) + 2;
    }
    if ((*(byte *)(param_4 + 0x420) & 0xf & 1 << (3U - iVar2 & 0x1f)) != 0) {
      FUN_ram_0015961c(param_1,param_4);
      DAT_ram_800372e4 = DAT_ram_800372e4 + 1;
    }
    uVar1 = 1;
  }
  return uVar1;
}


