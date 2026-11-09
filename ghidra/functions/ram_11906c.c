/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011906c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_0011906c(int param_1,int param_2,uint param_3,undefined2 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined2 local_24;
  
  uVar1 = _DAT_ram_e000006c;
  local_38 = DAT_ram_001a6228;
  local_34 = DAT_ram_001a622c;
  local_30 = DAT_ram_001a6230;
  local_2c = DAT_ram_001a6234;
  uStack_28 = DAT_ram_001a6238;
  local_24 = DAT_ram_001a623c;
  if (((_DAT_ram_e000006c & 0xf) == 4) && (iVar2 = FUN_ram_000e6c28(3), iVar2 == 0)) {
    iVar2 = FUN_ram_000e6c54();
    if (iVar2 == 0) {
      FUN_ram_000e6c98(3);
    }
    else {
      _DAT_ram_e000006c = uVar1 & 0xfffffffb;
    }
  }
  FUN_ram_0039fe00(&local_38,param_2,0x10);
  FUN_ram_0039fe00(&uStack_28,param_2 + 0x12,6);
  iVar2 = (**(code **)(param_1 + 0x39ec))
                    (param_1,&local_38,&uStack_28,param_3 & 0xff,(param_3 & 0xff0000) >> 0x10,
                     (param_3 & 0xff00) >> 8,param_4,*(undefined1 *)(param_2 + 0x11));
  if (iVar2 == 0) {
    uVar3 = 5;
  }
  else {
    if (*(char *)(iVar2 + 0x2d) != '\x04') {
      *(undefined1 *)(iVar2 + 0x2d) = 4;
      FUN_ram_00106f00(*(int *)(iVar2 + 0xc),*(undefined1 *)(*(int *)(iVar2 + 0xc) + 0x438));
    }
    uVar3 = 0;
  }
  return uVar3;
}


