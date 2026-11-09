/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00158524 */

/* WARNING: Removing unreachable block (ram,0x001586dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_00158524(int param_1,uint param_2,ushort param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_44;
  int local_40;
  
  uVar7 = 0;
  if ((param_2 < 0x80) && (param_1 = param_1 + 0x3b54, *(int *)(param_1 + param_2 * 4) != 0)) {
    if (&stack0x00000000 == (undefined1 *)0x4) {
      param_2 = 0;
    }
    else {
      param_2 = param_2 & 0xff;
    }
    uVar2 = (param_2 & 0x7f) << 4 | 0x1007;
    local_44 = (uint)param_3;
    local_40 = 0x40000;
    if ((_DAT_ram_e1035038 & 1) != 0) {
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 1;
        if (((uVar4 & 0xffff0000) != 0) && ((uVar4 & 0xffff) == 0)) {
          FUN_ram_000ee260(s_stuck_in_topaz_tqe_wait___ram_001c7520);
        }
      } while ((_DAT_ram_e1035038 & 1) != 0);
    }
    FUN_ram_80025dec(s_qtn_auc_trigger_event_via_tqe_re_ram_001c74f8,0x88c);
    _DAT_ram_e1035020 = 0;
    _DAT_ram_e103502c = 0;
    _DAT_ram_e1035030 = local_44;
    _DAT_ram_e1035034 = 0x40000;
    sync();
    _DAT_ram_e1035038 = 1;
    param_1 = local_40;
    _DAT_ram_e1035024 = param_4;
    _DAT_ram_e1035028 = uVar2;
    if (param_5 != 0) {
      uVar7 = 0;
      iVar3 = 10000000;
      do {
        uVar7 = uVar7 + 1;
        if ((_DAT_ram_e1035038 & 1) != 0) {
          uVar4 = 0;
          do {
            uVar4 = uVar4 + 1;
            if (((uVar4 & 0xffff0000) != 0) && ((uVar4 & 0xffff) == 0)) {
              param_1 = FUN_ram_000ee260(s_stuck_in_topaz_tqe_wait___ram_001c7520);
            }
          } while ((_DAT_ram_e1035038 & 1) != 0);
        }
        iVar1 = 0;
        do {
          iVar5 = iVar1;
          if (((_DAT_ram_e1035038 & 1) == 0) && ((_DAT_ram_e1035038 & 0xc0000000) != 0)) {
            uVar4 = (uint)((_DAT_ram_e1035038 & 0x80000000) != 0);
            if (iVar5 + 1 < 0x989682) goto LAB_ram_00158764;
            break;
          }
          uVar4 = 0xffffffff;
          iVar1 = iVar5 + 1;
        } while (iVar5 + 1 < 0x989682);
        param_1 = FUN_ram_000ee260(s_Timeout_waiting_for_AuC_TQE_port_ram_001c753c);
LAB_ram_00158764:
        uVar6 = iVar5 + 1;
        if ((1 < (int)uVar6) &&
           (DAT_ram_800379d8 = DAT_ram_800379d8 + uVar6, DAT_ram_800379dc < uVar6)) {
          DAT_ram_800379dc = uVar6;
        }
        if (uVar4 == 1) break;
        if (uVar4 == 0) {
          if ((DAT_ram_0018c02c != 0) && ((_DAT_ram_e0000170 & 0xf) == 2)) {
            _DAT_ram_e0000170 = 0x20000000;
          }
          DAT_ram_800379d0 = DAT_ram_800379d0 + 1;
          if (DAT_ram_800379d4 < uVar7) {
            DAT_ram_800379d4 = uVar7;
          }
          if ((_DAT_ram_e1035038 & 1) != 0) {
            uVar4 = 0;
            do {
              uVar4 = uVar4 + 1;
              if (((uVar4 & 0xffff0000) != 0) && ((uVar4 & 0xffff) == 0)) {
                FUN_ram_000ee260(s_stuck_in_topaz_tqe_wait___ram_001c7520);
              }
            } while ((_DAT_ram_e1035038 & 1) != 0);
          }
          FUN_ram_80025dec(s_qtn_auc_trigger_event_via_tqe_re_ram_001c74f8,0x8bc);
          _DAT_ram_e1035020 = 0;
          _DAT_ram_e103502c = 0;
          _DAT_ram_e1035030 = local_44;
          _DAT_ram_e1035034 = 0x40000;
          sync();
          _DAT_ram_e1035038 = 1;
          param_1 = local_40;
          _DAT_ram_e1035024 = param_4;
          _DAT_ram_e1035028 = uVar2;
        }
        if ((param_5 == 0) || (iVar3 = iVar3 + -1, iVar3 == 0)) break;
      } while( true );
    }
    if ((DAT_ram_0018c02c != 0) && ((_DAT_ram_e0000170 & 0xf) == 2)) {
      _DAT_ram_e0000170 = 0x20000000;
    }
    if (9999999 < (int)uVar7) {
      FUN_ram_000ee260(s_IPC_to_AuC_failed___reboot_ram_001c7568);
      param_1 = FUN_ram_80030314();
    }
  }
  return param_1;
}


