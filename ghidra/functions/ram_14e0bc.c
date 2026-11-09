/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014e0bc */

void FUN_ram_0014e0bc(undefined4 param_1,int param_2)

{
  bool bVar1;
  
  *(undefined1 *)(param_2 + 0x533) = 0;
  *(undefined4 *)(param_2 + 0x660) = 0x7fffffff;
  *(undefined1 *)(param_2 + 0x52f) = 0;
  *(undefined1 *)(param_2 + 0x535) = 1;
  *(undefined1 **)(param_2 + 0x538) = &DAT_ram_00192bf0;
  *(undefined1 *)(param_2 + 0x5c0) = 0x12;
  *(undefined4 *)(param_2 + 0x5a8) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x5c1) = 0x12;
  *(undefined4 *)(param_2 + 0x5ac) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x5c2) = 0x12;
  *(undefined4 *)(param_2 + 0x5b0) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x5c3) = 0x12;
  *(undefined4 *)(param_2 + 0x5b4) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x5c4) = 0x12;
  *(undefined4 *)(param_2 + 0x5b8) = 0xffffffff;
  *(undefined1 *)(param_2 + 0x5c5) = 0x12;
  *(undefined4 *)(param_2 + 0x5bc) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x5a4) = 0;
  bVar1 = DAT_ram_0018c238 != 0;
  *(undefined1 *)(param_2 + 0x530) = DAT_ram_00192bf0;
  if (bVar1) {
    *(undefined1 *)(param_2 + 0x531) = 0;
    FUN_ram_0014db58(param_2);
    FUN_ram_0014dedc(param_1,param_2);
  }
  return;
}


