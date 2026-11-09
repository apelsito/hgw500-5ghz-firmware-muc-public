/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00114470 */

void FUN_ram_00114470(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int local_1c;
  uint local_18;
  int iStack_14;
  
  if ((*(byte *)(param_1 + 0x424) & 2) == 0) {
    if (param_3 < 0x56) {
      DAT_ram_80037060 = DAT_ram_80037060 + 1;
      if (DAT_ram_8002c942 != '\0') {
        FUN_ram_000ee260(s_QTNRT_E_bad_len_ram_001c1c8c);
        return;
      }
    }
    else {
      FUN_ram_0039fe00(&local_1c,param_2,0xc);
      if ((local_1c == 0x2a2a2a2a) && (iStack_14 == 0x2a2a2a2a)) {
        iVar1 = *(int *)(param_1 + 0x440) + 1;
        *(int *)(param_1 + 0x440) = iVar1;
        *(byte *)(param_1 + 0x424) = *(byte *)(param_1 + 0x424) | 1;
        if (iVar1 == 1000) {
          DAT_ram_80037068 = DAT_ram_80037068 + 1;
          FUN_ram_000ee260(s_QTNRT___pM__QTN_node_0x_02x_ram_001c1c9c,param_1 + 0x96,
                           *(undefined1 *)(param_1 + 0x424));
        }
        if (local_18 != 0x2a2a2a2a) {
          if (*(uint *)(param_1 + 0x43c) == 0) {
            *(byte *)(param_1 + 0x424) = *(byte *)(param_1 + 0x424) | 4;
            DAT_ram_80037060 = DAT_ram_80037060 + 1;
            return;
          }
          if (*(uint *)(param_1 + 0x43c) !=
              (local_18 >> 0x18 | (local_18 & 0xff0000) >> 8 | (local_18 & 0xff00) << 8 |
              local_18 << 0x18)) {
            *(byte *)(param_1 + 0x424) = *(byte *)(param_1 + 0x424) | 8;
            DAT_ram_8003706c = DAT_ram_8003706c + 1;
            *(undefined4 *)(param_1 + 0x444) = 0;
            return;
          }
          iVar1 = *(int *)(param_1 + 0x444) + 1;
          *(int *)(param_1 + 0x444) = iVar1;
          if (iVar1 == 0x14) {
            *(byte *)(param_1 + 0x424) = *(byte *)(param_1 + 0x424) | 2;
            DAT_ram_80037070 = DAT_ram_80037070 + 1;
            FUN_ram_000ee260(s_QTNRT___pM__QTN_node_0x_02x_ram_001c1c9c,param_1 + 0x96,
                             *(undefined1 *)(param_1 + 0x424));
            return;
          }
        }
      }
      else {
        DAT_ram_80037060 = DAT_ram_80037060 + 1;
        if (DAT_ram_8002c942 != '\0') {
          FUN_ram_000ee260(s_QTNRT_E_bad_frame_ram_001c1cbc);
          return;
        }
      }
    }
  }
  return;
}


