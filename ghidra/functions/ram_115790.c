/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00115790 */

void FUN_ram_00115790(undefined4 param_1,int param_2,int *param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  ushort uVar2;
  
  if (*(char *)(*param_3 + 0x2c) == '\x02') {
    return;
  }
  uVar2 = *(ushort *)(param_3 + 3);
  if (param_5 == 0) {
    if ((uVar2 & 0x10) == 0) {
      FUN_ram_000ee260(s_Awake__node_PWR_mode_is_incorrec_ram_001c1d7c);
      FUN_ram_000ee260(&DAT_ram_001c1d78);
      uVar2 = *(ushort *)(param_3 + 3);
    }
    uVar2 = uVar2 & 0xff6f;
    *(ushort *)(param_3 + 3) = uVar2;
    if (*(char *)((int)param_3 + 0x40e) == '\x03') {
      FUN_ram_0012c830(param_3,0);
      uVar2 = *(ushort *)(param_3 + 3);
    }
    cVar1 = *(char *)(param_2 + 0x2c);
    *(ushort *)(param_3 + 3) = uVar2 | 0x40;
    if ((cVar1 == '\x06') && (*(short *)(param_2 + 0x30) != 0)) {
      *(short *)(param_2 + 0x30) = *(short *)(param_2 + 0x30) + -1;
    }
    DAT_ram_800370ac = DAT_ram_800370ac + 1;
    DAT_ram_800370a0 = (uint)*(ushort *)(param_2 + 0x30);
    FUN_ram_001594cc(param_1,param_3,3);
    return;
  }
  if ((uVar2 & 0x10) != 0) {
    FUN_ram_000ee260(s_Doze__node_PWR_mode_is_incorrect_ram_001c1d54);
    FUN_ram_000ee260(&DAT_ram_001c1d78);
    uVar2 = *(ushort *)(param_3 + 3);
  }
  *(ushort *)(param_3 + 3) = uVar2 | 0x10;
  if (*(char *)((int)param_3 + 0x40e) == '\x03') {
    FUN_ram_0012c830(param_3,0);
  }
  FUN_ram_001594cc(param_1,param_3,2);
  if (*(char *)(param_2 + 0x2c) == '\x06') {
    *(short *)(param_2 + 0x30) = *(short *)(param_2 + 0x30) + 1;
  }
  DAT_ram_800370a8 = DAT_ram_800370a8 + 1;
  DAT_ram_800370a0 = (uint)*(ushort *)(param_2 + 0x30);
  return;
}


