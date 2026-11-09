/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001823f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_001823f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                     undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
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
  puVar1[5] = param_3;
  uVar2 = param_4[1];
  puVar1[6] = *param_4;
  puVar1[7] = uVar2;
  uVar2 = *param_5;
  uVar3 = param_5[1];
  puVar1[8] = uVar2;
  puVar1[9] = uVar3;
  puVar1[10] = uVar2;
  puVar1[0xb] = uVar3;
  puVar1[0xc] = uVar2;
  puVar1[0xd] = uVar3;
  puVar1[0xe] = uVar2;
  puVar1[0xf] = uVar3;
  return;
}


