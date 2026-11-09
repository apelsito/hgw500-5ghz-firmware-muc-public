/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00116ea0 */

void FUN_ram_00116ea0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     undefined4 param_7,int param_8,char param_9,undefined1 *param_10,
                     undefined2 *param_11)

{
  char cVar1;
  ushort uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  
  DAT_ram_80037098 = DAT_ram_80037098 + 1;
  if (((DAT_ram_0018c130 != 0) && ((*(uint *)(param_5 + 4) & 0xf0) == 0xc0)) &&
     ((*(uint *)(param_6 + 0x18) & 0x8000) != 0)) {
    uVar5 = (*(uint *)(param_6 + 0x18) & 0x300) >> 8;
    if (uVar5 < 2) {
      if (DAT_ram_0018c12c == 0) {
        DAT_ram_0018c12c = 1;
        *(undefined4 *)(param_1 + 0x5b88) = 0;
        pcVar3 = s_qtn_rxdone_process_frame_ctrl__s_ram_001c1fcc;
        goto LAB_ram_00116f90;
      }
    }
    else if (((uVar5 == 2) && (DAT_ram_0018c12c != 0)) &&
            (iVar4 = *(int *)(param_1 + 0x5b88), *(int *)(param_1 + 0x5b88) = iVar4 + 1,
            0x80 < iVar4)) {
      pcVar3 = s_qtn_rxdone_process_frame_ctrl__s_ram_001c1f94;
      DAT_ram_0018c12c = 0;
LAB_ram_00116f90:
      FUN_ram_000ee260(pcVar3);
    }
  }
  if (param_3 != 0) {
    if ((DAT_ram_8002c21c & 8) == 0) {
      cVar1 = *(char *)(param_3 + 100);
    }
    else {
      FUN_ram_00116bf8(param_4,param_6,param_5);
      cVar1 = *(char *)(param_3 + 100);
    }
    if (((cVar1 == '\0') && (*(char *)(param_2 + 0x2c) == '\x06')) &&
       ((*(uint *)(param_5 + 4) & 0xf0) == 0xa0)) {
      *(ushort *)(param_3 + 0xc) = *(ushort *)(param_3 + 0xc) | 0x80;
      iVar4 = FUN_ram_001584ec(param_3);
      if (iVar4 == 0) {
        FUN_ram_0012e164(param_1,param_3,4,0);
      }
      FUN_ram_001594cc(param_1,param_3,4);
      DAT_ram_8003709c = DAT_ram_8003709c + 1;
    }
  }
  if (((((*(uint *)(param_1 + 0x3b28) & 0x10) == 0) || (DAT_ram_0018c0c0 != 0)) && (param_3 != 0))
     && ((param_8 == 4 && (param_9 == -0x80)))) {
    uVar2 = *(ushort *)(param_4 + 0x10);
    FUN_ram_00116db4(param_1,param_3,param_4,*param_11);
    if ((*(uint *)(param_1 + 0x3b28) & 0x10) != 0) goto LAB_ram_001170ac;
    FUN_ram_0012dc84(param_1,param_3,param_4);
    FUN_ram_0012e350(param_1,param_3,(int)(uVar2 & 0xf000) >> 0xc,1);
  }
  else {
LAB_ram_001170ac:
    if ((*(char *)(param_2 + 0x2c) == '\x01') && (param_9 == -0x60)) goto LAB_ram_001170cc;
  }
  *param_11 = 0;
LAB_ram_001170cc:
  *param_10 = 1;
  return;
}


