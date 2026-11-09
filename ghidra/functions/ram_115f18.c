/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00115f18 */

void FUN_ram_00115f18(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x3b35);
  if (cVar1 != '\x14') {
    if (cVar1 == '(') {
      if (*(char *)(param_1 + 0x3b34) == '\0') {
LAB_ram_00115f6c:
        *param_3 = 1;
        *param_2 = 1;
        return;
      }
      if (*(char *)(param_1 + 0x3b34) != '\x01') {
        return;
      }
LAB_ram_00115f7c:
      *param_3 = 0;
      *param_2 = 1;
      return;
    }
    if (cVar1 == 'P') {
      cVar1 = *(char *)(param_1 + 0x3b34);
      if (cVar1 == '\0') goto LAB_ram_00115f7c;
      if (cVar1 == '\x01') {
        *param_3 = 1;
        goto LAB_ram_00115f5c;
      }
      if (cVar1 == '\x02') goto LAB_ram_00115f6c;
      if (cVar1 != '\x03') {
        return;
      }
    }
  }
  *param_3 = 0;
LAB_ram_00115f5c:
  *param_2 = 0;
  return;
}


