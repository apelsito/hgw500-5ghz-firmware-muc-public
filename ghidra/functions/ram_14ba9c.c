/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014ba9c */

void FUN_ram_0014ba9c(char *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  
  cVar5 = '\0';
  uVar4 = 100;
  do {
    if ((int)uVar4 <= param_2) {
      *param_1 = cVar5;
      break;
    }
    uVar4 = uVar4 >> 1;
    cVar5 = cVar5 + '\x01';
  } while (uVar4 != 0);
  uVar1 = param_2 - uVar4 & 0xff;
  cVar5 = '\0';
  param_1[1] = '\0';
  uVar3 = 100;
  uVar2 = 100;
  uVar4 = uVar2;
  if (uVar1 < 100) {
    do {
      uVar2 = uVar4;
      cVar5 = cVar5 + '\x01';
      uVar3 = uVar2 >> 1;
      if (uVar3 == 0) {
        return;
      }
      uVar4 = uVar3;
    } while (uVar1 < uVar3);
  }
  param_1[1] = cVar5;
  if (cVar5 != '\0') {
    if ((int)(uVar2 - uVar1) < (int)(uVar1 - uVar3)) {
      param_1[1] = cVar5 + -1;
      return;
    }
    return;
  }
  return;
}


