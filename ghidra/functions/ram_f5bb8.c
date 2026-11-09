/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f5bb8 */

void FUN_ram_000f5bb8(char *param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
                     char param_6)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int in_lp_count;
  char in_is_in_loop;
  char acStack_20 [32];
  
  pcVar3 = acStack_20;
  while( true ) {
    uVar2 = param_2 - (param_2 & 0xfffffff0);
    param_3 = param_3 + -1;
    cVar1 = (char)uVar2;
    if (uVar2 < 10) {
      *pcVar3 = cVar1 + '0';
    }
    else {
      *pcVar3 = cVar1 + 'W';
    }
    if (param_2 >> 4 == 0) break;
    pcVar3 = pcVar3 + 1;
    param_2 = param_2 >> 4;
  }
  pcVar3 = pcVar3 + 1;
  if (param_3 < 1) goto LAB_ram_000f5c14;
  param_6 = '0';
  LP_START = 0xf5c10;
  LP_END = 0xf5c14;
  in_is_in_loop = '\x01';
  pcVar4 = pcVar3;
  do {
    pcVar3 = pcVar4 + 1;
    *pcVar4 = param_6;
    in_lp_count = param_3;
LAB_ram_000f5c14:
    while ((param_3 = in_lp_count, in_is_in_loop == '\0' ||
           (param_3 = param_3 + -1, pcVar4 = pcVar3, param_3 == 0))) {
      in_is_in_loop = '\0';
      pcVar3 = pcVar3 + -1;
      *param_1 = *pcVar3;
      param_1 = param_1 + 1;
      in_lp_count = param_3;
      if (pcVar3 <= acStack_20) {
        return;
      }
    }
  } while( true );
}


