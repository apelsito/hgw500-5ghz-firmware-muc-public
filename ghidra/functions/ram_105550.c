/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00105550 */

undefined4 FUN_ram_00105550(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((((param_1 < 3) && (-1 < param_1)) && (param_2 < 4)) &&
     (((-1 < param_2 && (&stack0x00000000 != (undefined1 *)0x4)) && (param_3 < 3)))) {
    uVar1 = (&DAT_ram_001a5ee8)[param_3];
    if (param_1 == 0) {
      *(undefined4 *)(&DAT_ram_0018cd20 + param_2 * 4) = uVar1;
    }
    else if (param_1 == 1) {
      *(undefined4 *)(&DAT_ram_0018cd30 + param_2 * 4) = uVar1;
    }
    else {
      *(undefined4 *)(&DAT_ram_0018cd40 + param_2 * 4) = uVar1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


