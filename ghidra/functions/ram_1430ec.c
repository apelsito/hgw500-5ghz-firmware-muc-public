/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001430ec */

void FUN_ram_001430ec(ushort param_1,short param_2,undefined2 param_3,int param_4,undefined4 param_5
                     )

{
  int iVar1;
  short sVar2;
  
  if (param_4 == 0) {
    if (0xf < DAT_ram_0018c20c) goto LAB_ram_00143160;
    sVar2 = 1;
  }
  else {
    if (0xf < DAT_ram_0018c20c) goto LAB_ram_00143160;
    sVar2 = 2;
  }
  iVar1 = DAT_ram_0018c20c * 0x70;
  *(undefined4 *)(&DAT_ram_800379e4 + iVar1) = DAT_ram_80038ee0;
  *(int *)(&DAT_ram_800379e0 + iVar1) = DAT_ram_0018c208;
  DAT_ram_0018c208 = DAT_ram_0018c208 + 1;
  *(undefined4 *)(&DAT_ram_800379e8 + iVar1) = param_5;
  *(ushort *)(&DAT_ram_800379ee + iVar1) = param_1 | param_2 << 0xc | sVar2 << 8;
  *(undefined2 *)(&DAT_ram_800379ec + iVar1) = param_3;
LAB_ram_00143160:
  DAT_ram_0018c20c = DAT_ram_0018c20c + 1;
  return;
}


