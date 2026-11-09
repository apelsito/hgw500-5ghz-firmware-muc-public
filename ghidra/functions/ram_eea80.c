/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000eea80 */

/* WARNING: Removing unreachable block (ram,0x000eeae2) */

void FUN_ram_000eea80(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 < 8) {
    if (param_3 == 0) {
      return;
    }
  }
  else {
    uVar2 = param_2 << 8 | param_2;
    uVar2 = uVar2 << 0x10 | uVar2;
    for (; ((uint)param_1 & 3) != 0; param_1 = (uint *)((int)param_1 + 1)) {
      *(char *)param_1 = (char)param_2;
      param_3 = param_3 - 1;
    }
    for (uVar3 = param_3 >> 5; uVar3 != 0; uVar3 = uVar3 - 1) {
      *param_1 = uVar2;
      param_1[1] = uVar2;
      param_1[2] = uVar2;
      param_1[3] = uVar2;
      param_1[4] = uVar2;
      param_1[5] = uVar2;
      param_1[6] = uVar2;
      param_1[7] = uVar2;
      param_1 = param_1 + 8;
    }
    uVar3 = (param_3 & 0x1f) >> 2;
    if (uVar3 == 0) {
      param_3 = param_3 & 3;
      if (param_3 == 0) {
        return;
      }
    }
    else {
      LP_START = 0xeeaec;
      LP_END = 0xeeaf0;
      do {
        puVar1 = param_1 + 1;
        *param_1 = uVar2;
        uVar3 = uVar3 - 1;
        param_1 = puVar1;
      } while (uVar3 != 0);
      param_3 = param_3 & 3;
      if (param_3 == 0) {
        return;
      }
    }
  }
  do {
    param_3 = param_3 - 1;
    *(char *)param_1 = (char)param_2;
    param_1 = (uint *)((int)param_1 + 1);
  } while (param_3 != 0);
  return;
}


