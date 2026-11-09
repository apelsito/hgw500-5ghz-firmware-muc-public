/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00125d98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00125d98(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  if (param_1 == 1) {
    puVar5 = (uint *)&DAT_ram_e0000094;
LAB_ram_00125df0:
    *puVar5 = *puVar5 & 0x7fffffff;
    sync();
  }
  else {
    if (param_1 == 2) {
      puVar5 = (uint *)&DAT_ram_e0000098;
      goto LAB_ram_00125df0;
    }
    if (param_1 == 4) {
      puVar5 = (uint *)&DAT_ram_e00000a0;
      goto LAB_ram_00125df0;
    }
  }
  if (param_1 == 1) {
    puVar5 = (uint *)&DAT_ram_e000009c;
  }
  else if (param_1 == 2) {
    puVar5 = (uint *)&DAT_ram_e00000a4;
  }
  else {
    if (param_1 != 4) goto LAB_ram_00125e48;
    puVar5 = (uint *)&DAT_ram_e00000a8;
  }
  *puVar5 = *puVar5 & 0x7fffffff;
  sync();
LAB_ram_00125e48:
  iVar3 = FUN_ram_000e2000(_DAT_ram_e00000bc);
  iVar3 = *(int *)(iVar3 + 0xac);
  uVar1 = STATUS32;
  if ((uVar1 & 6) != 0) {
    STATUS32 = uVar1 & 0xfffffff9;
  }
  iVar4 = *(int *)(iVar3 + 0x14) * 0x20 + 0x180 + iVar3;
  *(undefined4 *)(iVar4 + 0x30) = *(undefined4 *)(iVar3 + 4);
  uVar2 = DAT_ram_80038ee4;
  *(undefined4 *)(iVar4 + 0x34) = DAT_ram_80038ee0;
  *(undefined4 *)(iVar4 + 0x38) = uVar2;
  *(undefined4 *)(iVar4 + 0x3c) = 2;
  *(char **)(iVar4 + 0x40) = s______include_qtn_qtn_bb_mutex_h_ram_001c38cc;
  *(undefined4 *)(iVar4 + 0x48) = 0xc9;
  *(undefined4 *)(iVar4 + 0x44) = param_3;
  *(undefined4 *)(iVar4 + 0x4c) = param_4;
  *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
  *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 4) % 0xc;
  STATUS32 = uVar1;
  STATUS32 = *param_2;
  return;
}


