/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00114978 */

uint FUN_ram_00114978(uint *param_1)

{
  uint uVar1;
  
  if (param_1[1] - DAT_ram_8002c978 < 2) {
    return 0;
  }
  if (((DAT_ram_8002c968 == 0) && (DAT_ram_8002c968 = *param_1, DAT_ram_8002c968 == 0)) ||
     (*(int *)(DAT_ram_8002c968 + 0x8c) == 0)) {
    DAT_ram_800370b4 = DAT_ram_800370b4 + 1;
    return 0;
  }
  if ((DAT_ram_8002c968 < 0x60000000) || (0x6007ffff < DAT_ram_8002c968)) {
    if ((DAT_ram_8002c968 < 0x40000000) || (0x47ffffff < DAT_ram_8002c968)) {
      if ((DAT_ram_8002c968 < 0xc0000000) || (DAT_ram_8002c968 == 0)) goto LAB_ram_00114a4c;
    }
    else if (DAT_ram_8002c968 == 0x40000000) {
LAB_ram_00114a4c:
      uVar1 = 0;
      if ((0x7fffffff < DAT_ram_8002c968) && (DAT_ram_8002c968 < 0x80080000)) {
        uVar1 = DAT_ram_8002c968 + 0xe0000000;
        goto LAB_ram_001149e4;
      }
      if (DAT_ram_8002c968 < 0x8000000) {
        uVar1 = DAT_ram_8002c968 + 0x40000000;
        goto LAB_ram_001149e4;
      }
      if (DAT_ram_8002c968 < 0xc0000000) goto LAB_ram_001149e4;
    }
  }
  else if (DAT_ram_8002c968 == 0xe0000000) goto LAB_ram_00114a4c;
  uVar1 = DAT_ram_8002c968;
LAB_ram_001149e4:
  DAT_ram_8002c968 = *(int *)(DAT_ram_8002c968 + 0x8c);
  *(undefined4 *)(uVar1 + 0x8c) = 0;
  DAT_ram_8002c978 = DAT_ram_8002c978 + 1;
  DAT_ram_80037000 = DAT_ram_80037000 + 1;
  return uVar1;
}


