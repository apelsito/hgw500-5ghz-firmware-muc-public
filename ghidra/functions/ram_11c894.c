/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011c894 */

void FUN_ram_0011c894(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != *(byte *)(param_1 + 0x688)) {
    if (DAT_ram_0018c14c < 0) {
      if (DAT_ram_0018c168 == '\x0f') {
        *(char *)(param_1 + 0x688) = (char)param_2;
      }
      else {
        *(char *)(param_1 + 0x688) = DAT_ram_0018c168;
      }
    }
    else {
      *(char *)(param_1 + 0x688) = (char)DAT_ram_0018c14c;
    }
    if (2 < DAT_ram_8002c229) {
      FUN_ram_000ee260(s_PPPC____pM__tx_scale__u_ram_001c2bcc,param_1 + 0x96,param_2);
    }
    iVar1 = FUN_ram_0011bca8(param_1);
    if ((int)(uint)(byte)(&DAT_ram_0018c16c)[DAT_ram_8002c8e8] < (int)(iVar1 + param_2)) {
      if (2 < DAT_ram_8002c229) {
        uVar2 = FUN_ram_0011bca8(param_1);
        FUN_ram_000ee260(s_PPPC__tx_scale_overstep__base____ram_001c2be8,uVar2,param_2);
      }
      DAT_ram_80037940 = DAT_ram_80037940 + 1;
    }
    DAT_ram_8003791c = (uint)*(byte *)(param_1 + 0x67c);
    DAT_ram_80037918 = DAT_ram_80037918 + 1;
    DAT_ram_80037920 = param_2;
    FUN_ram_00158358(param_1);
  }
  return;
}


