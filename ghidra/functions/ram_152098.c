/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00152098 */

void FUN_ram_00152098(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_1 != 0) && (-1 < param_2)) && (param_2 < 0x16)) {
    iVar1 = (&DAT_ram_00192d34)[param_2];
    if ((iVar1 != param_3 && param_2 != 7) && (param_2 != 0 || param_3 != 0)) {
      FUN_ram_000ee260(s_ioctl_power_save___s___d__>__d_ram_001c7014,
                       (&PTR_s_level_ram_001aa414_ram_00192da4)[param_2],iVar1,param_3);
    }
    (&DAT_ram_00192d34)[param_2] = param_3;
    if (DAT_ram_00192d34 < DAT_ram_00192d38) {
      if (DAT_ram_00192d34 < DAT_ram_00192d4c) {
        iVar1 = *(int *)(param_1 + 18000);
        if (iVar1 != 0) {
          *(undefined4 *)(iVar1 + 4) = 1;
          *(undefined4 *)(iVar1 + 0xc) = 500000;
          *(undefined4 *)(iVar1 + 0x14) = DAT_ram_80038ee0;
        }
      }
      else {
        FUN_ram_00151d10(param_1,DAT_ram_00192d50,DAT_ram_00192d54);
      }
    }
    else {
      FUN_ram_00151d10(param_1,DAT_ram_00192d3c,DAT_ram_00192d40);
    }
    FUN_ram_00151f5c(param_1);
    DAT_ram_8002c9cc = (uint)(DAT_ram_00192d60 <= DAT_ram_00192d34);
  }
  return;
}


