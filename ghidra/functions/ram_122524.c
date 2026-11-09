/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00122524 */

undefined4 FUN_ram_00122524(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_ram_0011c784(param_1,(*(uint *)(*(int *)(**(int **)(param_1 + 4) + 0x1c) + 0x4678) &
                                   0xff00) >> 8);
  FUN_ram_0011c894(param_1,uVar1);
  *(char *)(param_1 + 0x6b8) = (char)uVar1;
  *(undefined1 *)(param_1 + 0x6b5) = 0;
  *(undefined1 *)(param_1 + 0x788) = 0;
  *(undefined1 *)(param_1 + 0x789) = 1;
  *(undefined4 *)(param_1 + 0x6c0) = 5000;
  if (param_2 == 0) {
    if (DAT_ram_8002c229 == '\0') {
      if ((((*(ushort *)(param_1 + 0xc) >> 3 ^ 1) & 1) != 0) || (DAT_ram_8002c228 == '\0')) {
        return 0;
      }
      if ((DAT_ram_8002c228 != '\x01') && (DAT_ram_8002c228 == '\x02')) {
        iVar2 = 1 - (uint)*(byte *)(param_1 + 100);
        if (1 < *(byte *)(param_1 + 100)) {
          iVar2 = 0;
        }
        if (iVar2 == 0) {
          return 0;
        }
      }
      FUN_ram_0011b9f4(param_1,1);
      FUN_ram_0011c9d4(param_1,1,500);
      return 1;
    }
  }
  else {
    FUN_ram_0011c310(param_1);
    if (DAT_ram_8002c229 == '\0') {
      return 0;
    }
  }
  if (DAT_ram_8002c8e8 != '\x01') {
    DAT_ram_8002c8e8 = '\x01';
  }
  FUN_ram_0018ade0(1);
  FUN_ram_00158388(DAT_ram_0018c16d);
  FUN_ram_00122320(param_1);
  return 1;
}


