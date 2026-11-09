/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018a358 */

void FUN_ram_0018a358(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
                     undefined4 *param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = 0x40;
    LP_START = 0x18a39c;
    LP_END = 0x18a3a4;
    puVar1 = (undefined4 *)&DAT_ram_e60b2000;
    do {
      *puVar1 = *param_1;
      iVar2 = iVar2 + -1;
      param_1 = param_1 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 != 0);
  }
  if (param_2 != (undefined4 *)0x0) {
    iVar2 = 0x40;
    LP_START = 0x18a3b8;
    LP_END = 0x18a3c0;
    puVar1 = (undefined4 *)&DAT_ram_e60b2100;
    do {
      *puVar1 = *param_2;
      iVar2 = iVar2 + -1;
      param_2 = param_2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 != 0);
  }
  if (param_3 != (undefined4 *)0x0) {
    iVar2 = 0x40;
    LP_START = 0x18a3d4;
    LP_END = 0x18a3dc;
    puVar1 = (undefined4 *)&DAT_ram_e60b2200;
    do {
      *puVar1 = *param_3;
      iVar2 = iVar2 + -1;
      param_3 = param_3 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 != 0);
  }
  if (param_4 != (undefined4 *)0x0) {
    iVar2 = 0x40;
    LP_START = 0x18a3f0;
    LP_END = 0x18a3f8;
    puVar1 = (undefined4 *)&DAT_ram_e60b2300;
    do {
      *puVar1 = *param_4;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + 1;
      param_4 = param_4 + 1;
    } while (iVar2 != 0);
  }
  if (param_5 == (undefined4 *)0x0) {
    return;
  }
  iVar2 = 0x40;
  LP_START = 0x18a380;
  LP_END = 0x18a388;
  puVar1 = (undefined4 *)&DAT_ram_e60b2400;
  do {
    *puVar1 = *param_5;
    iVar2 = iVar2 + -1;
    param_5 = param_5 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  return;
}


