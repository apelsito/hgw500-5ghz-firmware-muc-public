/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f4d18 */

undefined4 FUN_ram_000f4d18(int param_1,uint param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  
  param_1 = param_1 * 0x14;
  uVar1 = (uint)*(ushort *)(*(int *)(&DAT_ram_001dce70 + param_1) + 0xe);
  if (uVar1 != 0) {
    iVar2 = 0;
    LP_START = 0xf4d50;
    LP_END = 0xf4d60;
    do {
      if (param_2 == *(ushort *)(*(int *)(&DAT_ram_001dce74 + param_1) + iVar2 * 8)) {
        if (iVar2 == -1) {
          return 0xfffffffd;
        }
        iVar2 = *(int *)(&DAT_ram_001dce74 + param_1) + iVar2 * 8;
        if ((-1 < param_3) && (param_4 + param_3 <= (int)(uint)*(ushort *)(iVar2 + 2))) {
          (*DAT_ram_001dc458)(param_5,**(int **)(&DAT_ram_001dce7c + param_1) + *(int *)(iVar2 + 4)
                                      + param_3,param_4);
          return 0;
        }
        return 0xfffffffe;
      }
      iVar2 = iVar2 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return 0xfffffffd;
}


