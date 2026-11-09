/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010c69c */

void FUN_ram_0010c69c(int param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  
  FUN_ram_000ee260(s_FD__d__fd__p_ac__d_tid__d_status_ram_001c0974,param_2,param_1,
                   *(undefined1 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x49),
                   *(undefined4 *)(param_1 + 8));
  if (param_3 == *(byte *)(param_1 + 0x49) || param_3 == 0xffffffff) {
    if (DAT_ram_0018d152 < 0xf0) {
      FUN_ram_000ee260(s_printing__d_of__d_ram_001c0908,DAT_ram_0018d152,0xf0);
      uVar1 = DAT_ram_0018d152;
    }
    else {
      uVar1 = 0xf0;
    }
    FUN_ram_000eeca8(&DAT_ram_001c0904,param_1,uVar1);
    uVar2 = *(undefined4 *)(param_1 + 8);
    if (DAT_ram_0018d152 < 0x38) {
      FUN_ram_000ee260(s_printing__d_of__d_ram_001c0908,DAT_ram_0018d152,0x38);
      uVar1 = DAT_ram_0018d152;
    }
    else {
      uVar1 = 0x38;
    }
    FUN_ram_000eeca8(s_txstatus__ram_001c099c,uVar2,uVar1);
    FUN_ram_000ee260(s_End_FD__d_ram_001c09ac,param_2);
  }
  return;
}


