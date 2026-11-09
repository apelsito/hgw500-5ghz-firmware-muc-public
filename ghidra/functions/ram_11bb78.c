/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011bb78 */

void FUN_ram_0011bb78(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (DAT_ram_8002c8e8 != '\x01') {
    DAT_ram_8002c8e8 = '\x01';
  }
  FUN_ram_0018ade0(1);
  FUN_ram_00158388(DAT_ram_0018c16d);
  FUN_ram_0039fe00(&DAT_ram_0018d1fc,param_1,0x20);
  FUN_ram_0011ba78(param_1,&local_20,&local_1c,&local_18,&local_14);
  DAT_ram_8003792c = DAT_ram_8003792c + 1;
  DAT_ram_80037930 = local_20;
  DAT_ram_80037934 = local_1c;
  DAT_ram_80037938 = local_18;
  DAT_ram_8003793c = local_14;
  uVar3 = local_1c;
  uVar1 = local_18;
  uVar2 = local_20;
  if (-1 < DAT_ram_0018c14c) {
    uVar3 = 0;
    uVar1 = uVar3;
    uVar2 = uVar3;
  }
  FUN_ram_00158374(uVar2,uVar3,uVar1);
  if (2 < DAT_ram_8002c229) {
    FUN_ram_000ee260(s_PPPC__set_tx_scale_bases___20M___ram_001c2b28,local_20,local_1c,local_18);
  }
  return;
}


