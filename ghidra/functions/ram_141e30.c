/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00141e30 */

void FUN_ram_00141e30(int param_1,ushort param_2,short param_3,undefined2 param_4,int param_5)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = (uint *)(&DAT_ram_00192b38 + param_1 * 4);
  uVar3 = *puVar2;
  if (uVar3 < 0x10) {
    piVar1 = (int *)(param_1 * 0x70 + uVar3 * 0xe0 + -0x7ffc7f20);
    piVar1[1] = DAT_ram_80038ee0;
    *piVar1 = DAT_ram_0018c214;
    DAT_ram_0018c214 = DAT_ram_0018c214 + 1;
    piVar1[2] = param_5;
    *(ushort *)((int)piVar1 + 0xe) = param_2 | param_3 << 0xc | 0x200;
    *(undefined2 *)(piVar1 + 3) = param_4;
    uVar3 = *puVar2;
  }
  *puVar2 = uVar3 + 1;
  return;
}


