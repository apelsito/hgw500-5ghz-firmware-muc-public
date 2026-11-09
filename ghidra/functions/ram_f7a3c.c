/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f7a3c */

void FUN_ram_000f7a3c(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  uVar1 = STATUS32;
  iVar2 = DAT_ram_8002c1f4;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  for (; iVar3 = DAT_ram_8002c200, iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x1c)) {
    if ((*(uint *)(iVar2 + 0x18) & 1) == 0) {
      puVar4 = &LAB_ram_001bea98;
    }
    else {
      puVar4 = &DAT_ram_001bea90;
    }
    FUN_ram_000ee260(s_timer__s_rel__s_uid_0x_x_per__d_ram_001bea68,&DAT_ram_001bea94,puVar4,
                     *(uint *)(iVar2 + 0x18) >> 0xc,*(undefined4 *)(iVar2 + 0x14));
  }
  for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x1c)) {
    if ((*(uint *)(iVar3 + 0x18) & 1) == 0) {
      puVar4 = &LAB_ram_001bea98;
    }
    else {
      puVar4 = &DAT_ram_001bea90;
    }
    FUN_ram_000ee260(s_timer__s_rel__s_uid_0x_x_per__d_ram_001bea68,&DAT_ram_001bea8c,puVar4,
                     *(uint *)(iVar3 + 0x18) >> 0xc,*(undefined4 *)(iVar3 + 0x14));
  }
  FUN_ram_000ee260(s_Timer_counters__th__d__bh__d__fr_ram_001bea9c,DAT_ram_8002c1fc,DAT_ram_8002c208
                   ,DAT_ram_8002c214,DAT_ram_0018c05c);
  STATUS32 = uVar1;
  return;
}


