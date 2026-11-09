/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00181604 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00181604(void)

{
  undefined1 *puVar1;
  int *extraout_r1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  FUN_ram_0018291c();
  FUN_ram_00172b90(1);
  _DAT_ram_e609101c = 0xfe;
  iVar6 = 0x23;
  piVar2 = extraout_r1;
  puVar7 = &DAT_ram_002205e8;
  do {
    FUN_ram_00183358((short)*puVar7,piVar2);
    FUN_ram_001831a8(&local_34,&local_24,0xe);
    if ((*puVar7 & 0x40) == 0) {
      puVar1 = &DAT_ram_e60a5000;
    }
    else {
      puVar1 = &DAT_ram_e60a6000;
    }
    piVar3 = (int *)(puVar1 + (*puVar7 & 0x3f) * 0x10);
    iVar5 = local_34;
    if (local_34 < 0) {
      iVar5 = local_34 + 0x1000;
    }
    iVar4 = local_24;
    if (local_24 < 0) {
      iVar4 = local_24 + 0x1000;
    }
    *piVar3 = iVar4 + iVar5 * 0x1000;
    iVar5 = iStack_30;
    if (iStack_30 < 0) {
      iVar5 = iStack_30 + 0x1000;
    }
    iVar4 = local_20;
    if (local_20 < 0) {
      iVar4 = local_20 + 0x1000;
    }
    piVar3[1] = iVar4 + iVar5 * 0x1000;
    iVar5 = iStack_2c;
    if (iStack_2c < 0) {
      iVar5 = iStack_2c + 0x1000;
    }
    iVar4 = local_1c;
    if (local_1c < 0) {
      iVar4 = local_1c + 0x1000;
    }
    piVar3[2] = iVar4 + iVar5 * 0x1000;
    iVar5 = iStack_28;
    if (iStack_28 < 0) {
      iVar5 = iStack_28 + 0x1000;
    }
    iVar4 = local_18;
    if (local_18 < 0) {
      iVar4 = local_18 + 0x1000;
    }
    piVar2 = piVar3 + 4;
    piVar3[3] = iVar4 + iVar5 * 0x1000;
    iVar6 = iVar6 + -1;
    puVar7 = puVar7 + 1;
  } while (iVar6 != 0);
  FUN_ram_00172b90(0,piVar2,4);
  FUN_ram_00183a40();
  return;
}


