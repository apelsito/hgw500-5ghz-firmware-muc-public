/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000efab8 */

void FUN_ram_000efab8(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *in_r7;
  
  if (param_2 < param_1) {
    param_2 = param_2 + param_3;
    puVar2 = param_1 + param_3;
    if (param_3 == 0) {
      return;
    }
    if (param_3 < 0) {
      param_3 = -param_3;
    }
    LP_START = 0xefadc;
    LP_END = 0xefae4;
    do {
      param_2 = param_2 + -1;
      puVar2 = puVar2 + -1;
      *puVar2 = *param_2;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    bVar1 = false;
    param_3 = 0;
    param_1 = in_r7;
    goto LAB_ram_000efb0c;
  }
  if (param_2 <= param_1) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (param_3 < 0) {
    param_3 = -param_3;
  }
  LP_START = 0xefb04;
  LP_END = 0xefb0c;
  bVar1 = true;
  do {
    puVar2 = param_2 + 1;
    *param_1 = *param_2;
    param_1 = param_1 + 1;
LAB_ram_000efb0c:
  } while ((bVar1) && (param_3 = param_3 + -1, param_2 = puVar2, param_3 != 0));
  return;
}


