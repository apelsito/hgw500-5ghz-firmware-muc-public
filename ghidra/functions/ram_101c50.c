/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00101c50 */

void FUN_ram_00101c50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = *(undefined4 **)(param_1 + 0x218);
  uVar3 = (uint)((int)&DAT_ram_e5044000 - (int)puVar4) >> 2;
  if (uVar3 < 0x80) {
    FUN_ram_000ee260(s_ERROR__Insufficient_TCM_left_for_ram_001bf8fc);
    FUN_ram_80030314();
    if (uVar3 != 0) goto LAB_ram_00101ca0;
  }
  else {
    uVar3 = 0x80;
LAB_ram_00101ca0:
    iVar1 = 0;
    puVar2 = puVar4;
    do {
      iVar1 = iVar1 + 1;
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    } while (iVar1 < (int)uVar3);
  }
  uVar3 = (uint)((int)&DAT_ram_e5044000 - (int)puVar4) >> 2;
  *(undefined4 **)(param_1 + 0x21c) = puVar4;
  puVar2 = puVar4;
  if (uVar3 < 0x80) {
    FUN_ram_000ee260(s_ERROR__Insufficient_TCM_left_for_ram_001bf938);
    FUN_ram_80030314();
    if (uVar3 == 0) goto LAB_ram_00101d00;
    iVar1 = 0;
  }
  else {
    uVar3 = 0x80;
    iVar1 = 0;
  }
  do {
    iVar1 = iVar1 + 1;
    *puVar2 = 0xa0000000;
    puVar2 = puVar2 + 1;
  } while (iVar1 < (int)uVar3);
LAB_ram_00101d00:
  *(uint *)(*(int *)(param_1 + 0xc) + 0x47c) = (int)puVar4 << 0x10 | (uint)puVar4 & 0xffff;
  return;
}


