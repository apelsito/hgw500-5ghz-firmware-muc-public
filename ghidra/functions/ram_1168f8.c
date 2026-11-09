/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001168f8 */

void FUN_ram_001168f8(int param_1,int param_2,int param_3,int param_4,uint *param_5,
                     undefined2 param_6,int param_7,undefined1 *param_8,undefined2 *param_9)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = DAT_ram_80038ee4;
  if ((*param_5 & 8) == 0) {
    if ((*param_5 & 4) != 0) goto LAB_ram_00116974;
    if (param_7 != 0x80) goto LAB_ram_0011694c;
    *(undefined4 *)(param_1 + 0x468c) = DAT_ram_80038ee0;
    *(undefined4 *)(param_1 + 0x4690) = uVar2;
LAB_ram_00116954:
    if (param_3 == 0) goto LAB_ram_00116b3c;
    bVar1 = *(byte *)(param_4 + 1);
  }
  else {
    if (param_7 == 0x80) {
      *(undefined4 *)(param_1 + 0x468c) = DAT_ram_80038ee0;
      *(undefined4 *)(param_1 + 0x4690) = uVar2;
      goto LAB_ram_00116954;
    }
LAB_ram_0011694c:
    if (param_7 != 0xd0) goto LAB_ram_00116954;
    DAT_ram_80037100 = DAT_ram_80037100 + 1;
    iVar4 = FUN_ram_00116608(param_2,param_3,param_4,param_5,*param_9);
    if (iVar4 < 0) {
LAB_ram_00116974:
      *param_9 = 0;
      *param_8 = 1;
      return;
    }
    if (param_3 == 0) goto LAB_ram_00116b3c;
    bVar1 = *(byte *)(param_4 + 1);
  }
  if ((bVar1 & 8) == 0) {
    *(undefined2 *)(param_3 + 0x5c) = param_6;
  }
  if (param_7 == 0x80) {
    DAT_ram_80037104 = DAT_ram_80037104 + 1;
    if (*(char *)(param_2 + 0x2c) == '\x01') {
      if ((param_4 + 10U & 1) == 0 && (param_3 + 0x9cU & 1) == 0) {
        if (((*(short *)(param_3 + 0xa0) != *(short *)(param_4 + 0xe)) ||
            (*(short *)(param_3 + 0x9e) != *(short *)(param_4 + 0xc))) ||
           (*(short *)(param_3 + 0x9c) != *(short *)(param_4 + 10))) goto LAB_ram_00116b3c;
      }
      else {
        uVar3 = FUN_ram_000eeb74(param_4 + 10U,param_3 + 0x9cU,6);
        iVar4 = 1 - uVar3;
        if (1 < uVar3) {
          iVar4 = 0;
        }
        if (iVar4 == 0) goto LAB_ram_00116b3c;
      }
      FUN_ram_001166ac(param_1,param_3,param_4,*param_9);
      iVar4 = FUN_ram_00160010();
      if (iVar4 == 0) {
        FUN_ram_0015ffec(param_2,4);
      }
    }
  }
  else if (param_7 == 0xb0) {
    FUN_ram_00151ca0(param_1,0x12);
    DAT_ram_80037108 = DAT_ram_80037108 + 1;
  }
  else if (param_7 == 0) {
    DAT_ram_8003710c = DAT_ram_8003710c + 1;
  }
  else if (param_7 == 0x10) {
    DAT_ram_80037110 = DAT_ram_80037110 + 1;
  }
  else if (param_7 == 0xc0) {
    DAT_ram_80037114 = DAT_ram_80037114 + 1;
  }
  else if (param_7 == 0xa0) {
    DAT_ram_80037118 = DAT_ram_80037118 + 1;
  }
LAB_ram_00116b3c:
  FUN_ram_00115aec(param_1,param_5,param_2,param_3,param_4);
  DAT_ram_80037094 = DAT_ram_80037094 + 1;
  return;
}


