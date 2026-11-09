/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010d420 */

undefined4 FUN_ram_0010d420(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(*param_1 + 0x1c);
  if ((*(ushort *)(param_2 + 0x10) & 1) == 0) {
    uVar3 = (uint)*(byte *)(iVar1 + 0x405d);
    if ((*(ushort *)(param_2 + 0x10) & 0x10) == 0) {
      if (0xb < uVar3) {
        return 2;
      }
      goto LAB_ram_0010d488;
    }
  }
  else {
    uVar3 = (uint)*(byte *)(iVar1 + 0x405d);
  }
  if (uVar3 != 0) {
    return 2;
  }
  uVar3 = 0;
LAB_ram_0010d488:
  *(char *)(iVar1 + 0x405d) = (char)uVar3 + '\x01';
  iVar2 = (&DAT_ram_00201974)[uVar3 * 2];
  if (iVar2 == 0 && (&DAT_ram_00201978)[uVar3 * 2] == 0) {
    return 3;
  }
  if ((((DAT_ram_80038ee0 + 2) - iVar2 < 0) && (iVar2 - (DAT_ram_80038ee0 + 0x1194) < 0)) &&
     (iVar1 = FUN_ram_00108bfc(*(undefined4 *)(iVar1 + 0x3b20),1,(iVar2 - DAT_ram_80038ee0) * 1000,0
                               ,param_3,0,0,0,0,param_1,param_2), iVar1 == 0)) {
    return 0;
  }
  return 1;
}


