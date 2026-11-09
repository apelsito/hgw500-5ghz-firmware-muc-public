/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e5fd8 */

undefined4 FUN_ram_000e5fd8(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *local_288 [2];
  undefined4 local_284;
  undefined1 local_280;
  undefined1 local_27f;
  undefined1 local_27e;
  undefined1 local_27d;
  undefined *local_254 [2];
  undefined4 local_250;
  undefined1 local_24c;
  undefined1 local_24b;
  undefined1 local_24a;
  undefined1 local_249;
  
  local_288[0] = &UNK_auxregs_096c;
  local_284 = 0x100c0;
  local_280 = 0;
  local_27f = 0x12;
  local_27e = 0x12;
  local_27d = 0xec;
  local_254[0] = &UNK_auxregs_096d;
  local_250 = 0x100c0;
  local_24c = 1;
  local_24b = 0x12;
  local_24a = 0x12;
  local_249 = 0xec;
  iVar1 = FUN_ram_000e7fd4(param_1 & 0xffff,0x5be0,param_3,local_254,2);
  uVar2 = 0;
  if (iVar1 == 0) {
    FUN_ram_000ee260(s_Halting_no_dev_ram_001bc460);
    FUN_ram_80030314();
  }
  else {
    if (param_1 == 0) {
      FUN_ram_000eebfc(iVar1 + 4,&DAT_ram_001bc470);
      *(undefined1 *)(iVar1 + 0x12) = 0;
    }
    else {
      FUN_ram_000eebfc(iVar1 + 4,&DAT_ram_001bc478);
      *(undefined1 *)(iVar1 + 0x12) = 1;
    }
    uVar2 = FUN_ram_00108a2c(param_1 & 0xffff,iVar1,0,2,local_288,param_2);
  }
  return uVar2;
}


