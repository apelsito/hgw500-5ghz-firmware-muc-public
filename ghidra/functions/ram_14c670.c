/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014c670 */

void FUN_ram_0014c670(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  
  param_1 = param_1 + 0x5abc;
  param_2 = param_2 * 0x30;
  bVar4 = *(byte *)(param_1 + param_2 + 0x28);
  cVar1 = *(char *)(param_1 + param_2 + 0x29);
  pcVar5 = *(code **)(param_1 + param_2 + 0x20);
  param_1 = param_1 + param_2;
  if ((bVar4 & 1) == 0) {
    bVar2 = 0;
    *(undefined1 *)(param_1 + 0x2b) = 0;
    if ((bVar4 & 4) != 0) goto LAB_ram_0014c6fc;
    *(undefined1 *)(param_1 + 0x2c) = 0;
    if (pcVar5 == (code *)0x0) {
      return;
    }
    if ((bVar4 & 8) == 0) {
      bVar4 = *(byte *)(param_1 + 0x16);
      bVar3 = 0;
      if (bVar4 == 0) {
        if (*(char *)(param_1 + 0x17) == '\0') {
          return;
        }
        if (*(char *)(param_1 + 0x17) != '\0') {
          return;
        }
        (*pcVar5)();
        if (cVar1 != '\0') {
          return;
        }
        if (*(char *)(param_1 + 0x29) == '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_1 + 0x18);
        return;
      }
      goto LAB_ram_0014c750;
    }
  }
  else {
    bVar2 = *(char *)(param_1 + 0x2b) + 1;
    *(byte *)(param_1 + 0x2b) = bVar2;
    if ((bVar4 & 4) == 0) {
      bVar3 = 0;
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
    else {
LAB_ram_0014c6fc:
      bVar3 = *(char *)(param_1 + 0x2c) + 1;
      *(byte *)(param_1 + 0x2c) = bVar3;
    }
    if (pcVar5 == (code *)0x0) {
      return;
    }
    if ((bVar4 & 8) == 0) {
      bVar4 = *(byte *)(param_1 + 0x16);
      if (bVar4 == 0) {
        if (*(byte *)(param_1 + 0x17) == 0) {
          return;
        }
        if (bVar3 < *(byte *)(param_1 + 0x17)) {
          return;
        }
        (*pcVar5)();
        goto joined_r0x0014c764;
      }
LAB_ram_0014c750:
      if (bVar2 < bVar4) {
        if (*(byte *)(param_1 + 0x17) == 0) {
          return;
        }
        if (bVar3 < *(byte *)(param_1 + 0x17)) {
          return;
        }
      }
    }
  }
  (*pcVar5)();
joined_r0x0014c764:
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x29) != '\0')) {
    *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_1 + 0x18);
  }
  return;
}


