/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00141c58 */

void FUN_ram_00141c58(int param_1,ushort param_2,short param_3,ushort param_4,ushort param_5,
                     ushort param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
                     char param_11)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (DAT_ram_6003b404 == 1) {
    DAT_ram_6003b404 = 0;
    FUN_ram_000eea80(&DAT_ram_00192b38,0,0x10);
    uVar3 = *(uint *)(&DAT_ram_00192b38 + param_1 * 4);
    if (0xf < uVar3) {
      *(undefined4 *)(&DAT_ram_00192b48 + param_1 * 4) = 1;
      goto LAB_ram_00141d50;
    }
    FUN_ram_000eea80(uVar3 * 0xe0 + -0x7ffc7f10 + param_1 * 0x70,0,0x60);
    uVar3 = *(uint *)(&DAT_ram_00192b38 + param_1 * 4);
    *(undefined4 *)(&DAT_ram_00192b48 + param_1 * 4) = 1;
  }
  else {
    uVar3 = *(uint *)(&DAT_ram_00192b38 + param_1 * 4);
  }
  if (uVar3 < 0x10) {
    if (param_11 == '\0') {
      uVar2 = *(uint *)(&DAT_ram_00192b48 + param_1 * 4);
      *(uint *)(&DAT_ram_00192b48 + param_1 * 4) = uVar2 + 1;
      if (5 < uVar2) {
        return;
      }
    }
    else {
      uVar2 = 0;
    }
    puVar1 = (ushort *)(uVar3 * 0xe0 + -0x7ffc7f10 + param_1 * 0x70 + uVar2 * 0x10);
    *puVar1 = param_2 | param_3 << 0xc | 0x200;
    puVar1[1] = param_4;
    puVar1[2] = param_5;
    puVar1[3] = param_6;
    puVar1[4] = param_7;
    puVar1[5] = param_8;
    puVar1[6] = param_9;
    puVar1[7] = param_10;
    return;
  }
LAB_ram_00141d50:
  DAT_ram_0018c214 = DAT_ram_0018c214 + 1;
  return;
}


