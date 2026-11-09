/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014d610 */

/* WARNING: Removing unreachable block (ram,0x0014d666) */
/* WARNING: Removing unreachable block (ram,0x0014d66c) */
/* WARNING: Removing unreachable block (ram,0x0014d670) */
/* WARNING: Removing unreachable block (ram,0x0014d674) */

undefined4 FUN_ram_0014d610(uint param_1)

{
  char *pcVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  uVar4 = param_1 & 0xff;
  if (uVar4 == 4) {
    DAT_ram_0018c240 = param_1 >> 0x18;
    pcVar1 = s_PSEL__New_fixed_matrix__u_ram_001c6998;
    puVar2 = (undefined *)(param_1 >> 0x18);
LAB_ram_0014d700:
    FUN_ram_000ee260(pcVar1,puVar2);
    return 0;
  }
  if (uVar4 == 5) {
    uVar4 = param_1 >> 0x18;
    if (uVar4 == 0) {
      uVar4 = FUN_ram_000f5e64(1000,0);
    }
    else {
      uVar3 = LZCOUNT(uVar4) - 0x16;
      bVar8 = (int)uVar3 < 0;
      if (bVar8) {
        uVar3 = 0;
      }
      uVar7 = uVar3 + 1;
      if (!bVar8) {
        uVar4 = uVar4 << (uVar3 & 0x1f);
      }
      uVar3 = 0;
      LP_START = 0x14d690;
      LP_END = 0x14d6a0;
      uVar5 = 1000;
      do {
        uVar6 = uVar5 - uVar4;
        if (uVar5 < uVar4) {
          uVar6 = uVar6 + uVar4;
        }
        else {
          uVar3 = uVar3 | 1 << (uVar7 & 0x1f);
        }
        uVar4 = uVar4 >> 1;
        uVar7 = uVar7 - 1;
        uVar5 = uVar6;
      } while (uVar7 != 0);
      uVar4 = uVar3 >> 1 | uVar3 << 0x1f;
    }
    puVar2 = (undefined *)((param_1 & 0xff0000) >> 0x10);
    pcVar1 = s_PSEL__New_packet_interval__u_cou_ram_001c69b4;
    DAT_ram_0018c238 = uVar4;
    DAT_ram_0018c23c = puVar2;
  }
  else {
    if (uVar4 == 6) {
      DAT_ram_0018c244 = (param_1 & 0x100) >> 8;
      pcVar1 = s_PSEL__Peer_type_set_to__s_ram_001c69dc;
      if (DAT_ram_0018c244 == 0) {
        puVar2 = &DAT_ram_001c69fc;
      }
      else {
        puVar2 = &DAT_ram_001c69f8;
      }
      goto LAB_ram_0014d700;
    }
    uVar4 = param_1 & 0xff;
    DAT_ram_8002c8bd = (undefined1)param_1;
    if (uVar4 == 0) {
      FUN_ram_000ee260(s_PSEL__Disabled_ram_001c6a04,0);
      return 0;
    }
    pcVar1 = s_PSEL__Enabled__d____s_ram_001c6a14;
    if (DAT_ram_0018c244 == 0) {
      puVar2 = &DAT_ram_001c69fc;
    }
    else {
      puVar2 = &DAT_ram_001c69f8;
    }
  }
  FUN_ram_000ee260(pcVar1,uVar4,puVar2);
  return 0;
}


