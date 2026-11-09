/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f7b50 */

undefined4 FUN_ram_000f7b50(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_ram_8002c20c;
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  if (DAT_ram_8002c20c != 0) {
    uVar3 = *(undefined4 *)(DAT_ram_8002c20c + 0x20);
    if (*(int *)(DAT_ram_8002c20c + 0x1c) != 0) {
      *(undefined4 *)(*(int *)(DAT_ram_8002c20c + 0x1c) + 0x20) =
           *(undefined4 *)(DAT_ram_8002c20c + 0x20);
      uVar3 = DAT_ram_8002c210;
    }
    DAT_ram_8002c210 = uVar3;
    **(undefined4 **)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 0x1c);
    DAT_ram_8002c214 = DAT_ram_8002c214 + -1;
  }
  STATUS32 = uVar1;
  if (iVar2 != 0) {
    uVar1 = (iVar2 + -0x1fbebc) / 0x24;
    if (0x1ff < uVar1) {
      return 0xfffffff2;
    }
    *param_1 = iVar2;
    *param_2 = uVar1;
    return 0;
  }
  return 0xfffffffe;
}


