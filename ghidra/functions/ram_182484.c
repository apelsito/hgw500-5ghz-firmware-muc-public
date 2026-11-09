/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00182484 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00182484(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined4 *)&DAT_ram_e60923f4;
  }
  else {
    puVar1 = (undefined4 *)&DAT_ram_e60924b4;
    _DAT_ram_e6092574 = 1;
  }
  *puVar1 = param_2;
  puVar1[1] = param_2;
  puVar1[2] = param_2;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  puVar1[5] = param_4;
  puVar1[6] = param_5;
  puVar1[7] = param_6;
  puVar1[8] = param_7;
  puVar1[9] = param_8;
  puVar1[10] = param_7;
  puVar1[0xb] = param_8;
  puVar1[0xc] = param_7;
  puVar1[0xd] = param_8;
  puVar1[0xe] = param_7;
  puVar1[0xf] = param_8;
  return;
}


