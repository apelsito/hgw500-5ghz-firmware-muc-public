/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017f390 */

void FUN_ram_0017f390(int param_1)

{
  if (*(char *)(param_1 + 0x2c) == '\x03') {
    if ((DAT_ram_0018c3b8 == '\x02') || (DAT_ram_0018c3b8 == '\x03')) {
      FUN_ram_000ee260(s_check_adc_voltage_value_valid__s_ram_001ca774,3);
      return;
    }
  }
  else {
    if (DAT_ram_0018c3b8 == '\x02' || DAT_ram_0018c3b8 == '\x03') {
      FUN_ram_000ee260(s_check_adc_voltage_value_valid__p_ram_001ca7b0,*(int *)(param_1 + 0x28),2);
      if (*(int *)(param_1 + 0x28) < 2) {
LAB_ram_0017f408:
        *(undefined1 *)(param_1 + 0x2c) = 1;
        return;
      }
      *(undefined1 *)(param_1 + 0x2c) = 4;
    }
    else {
      if (*(int *)(param_1 + 0x28) < 2) goto LAB_ram_0017f408;
      *(undefined1 *)(param_1 + 0x2c) = 4;
    }
    if (DAT_ram_8002c8bc == '\x03') {
      *(int *)(param_1 + 0x14) = (*(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10)) / 2;
      return;
    }
  }
  return;
}


