/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014dba8 */

void FUN_ram_0014dba8(undefined4 param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  
  FUN_ram_000f7d60(*(undefined4 *)(param_2 + 0x540));
  *(undefined4 *)(param_2 + 0x540) = 0;
  if (*(char *)(param_2 + 0x535) == '\0') {
    if (DAT_ram_8002c8bd == '\x03') {
      FUN_ram_000ee260(s_PSEL__Probe_pkt_txdone__qn__p__w_ram_001c6a94,param_2);
    }
  }
  else {
    if ((param_3 & 2) == 0) {
      uVar4 = *(int *)(param_2 + 0x5a4) + 8;
    }
    else {
      uVar4 = *(int *)(param_2 + 0x5a4) + ((param_3 & 0xf00) >> 8);
    }
    *(uint *)(param_2 + 0x5a4) = uVar4;
    uVar1 = DAT_ram_0018c23c;
    *(int *)(param_2 + 0x4b4) = *(int *)(param_2 + 0x4b4) + -1;
    if (uVar1 <= *(byte *)(param_2 + 0x531) || 0x27 < uVar4) {
      FUN_ram_0014da74(param_1,param_2);
      bVar3 = *(char *)(param_2 + 0x52f) + 1;
      *(byte *)(param_2 + 0x52f) = bVar3;
      if (0x11 < bVar3) {
        if (DAT_ram_8002c8bd == '\x03') {
          FUN_ram_000ee260(s_PSEL__Stage_2_Matrices___ram_001c6ad0);
          iVar5 = 6;
          puVar6 = (undefined1 *)(param_2 + 0x5c0);
          puVar7 = (undefined4 *)(param_2 + 0x5a8);
          do {
            FUN_ram_000ee260(s_mat__d_stats__d__ram_001c6aec,*puVar6,*puVar7);
            iVar5 = iVar5 + -1;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar5 != 0);
          FUN_ram_000ee260(&DAT_ram_001c6b00);
        }
        *(undefined1 *)(param_2 + 0x535) = 0;
        FUN_ram_0014d910(param_1,param_2,1,0x14);
        return;
      }
      *(undefined1 *)(param_2 + 0x530) = *(undefined1 *)(*(int *)(param_2 + 0x538) + (uint)bVar3);
      FUN_ram_0014db58(param_2);
      *(undefined1 *)(param_2 + 0x531) = 0;
      *(undefined4 *)(param_2 + 0x5a4) = 0;
    }
    FUN_ram_000f7d60(*(undefined4 *)(param_2 + 0x53c));
    uVar2 = FUN_ram_000f7c10(DAT_ram_0018c238,param_1,param_2,&LAB_ram_0014e704,2);
    *(undefined4 *)(param_2 + 0x53c) = uVar2;
  }
  return;
}


