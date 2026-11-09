/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00149c2c */

void FUN_ram_00149c2c(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = 1 - *param_1;
  if (1 < *param_1) {
    iVar1 = 0;
  }
  puVar2 = param_1 + iVar1 * 0x1b2 + 1;
  puVar2[0x182] = 0;
  puVar2[0x183] = 0;
  puVar2[0x184] = 0;
  puVar2[0x186] = 0;
  puVar2[0x185] = 0;
  puVar2[0x18b] = 0;
  puVar2[0x18c] = 0;
  *puVar2 = 0;
  uVar3 = 1 - *param_1;
  if (1 < *param_1) {
    uVar3 = 0;
  }
  *param_1 = uVar3;
  iVar1 = 1 - uVar3;
  if (1 < uVar3) {
    iVar1 = 0;
  }
  puVar2 = param_1 + iVar1 * 0x1b2 + 1;
  puVar2[0x182] = 0;
  puVar2[0x183] = 0;
  puVar2[0x184] = 0;
  puVar2[0x186] = 0;
  puVar2[0x185] = 0;
  puVar2[0x18b] = 0;
  puVar2[0x18c] = 0;
  *puVar2 = 0;
  uVar3 = 1 - *param_1;
  if (1 < *param_1) {
    uVar3 = 0;
  }
  *param_1 = uVar3;
  return;
}


