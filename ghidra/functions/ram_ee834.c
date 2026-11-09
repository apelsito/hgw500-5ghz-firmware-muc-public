/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ee834 */

undefined4 FUN_ram_000ee834(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if ((param_1 < (undefined4 *)0x80000000) || ((undefined4 *)0x8007ffff < param_1)) {
    if (param_1 < (undefined4 *)0x8000000) {
      puVar5 = param_1 + 0x10000000;
    }
    else {
      puVar5 = (undefined4 *)0x0;
      if ((undefined4 *)0xbfffffff < param_1) {
        puVar5 = param_1;
      }
    }
  }
  else {
    puVar5 = param_1 + -0x8000000;
  }
  if (puVar5 == (undefined4 *)0x0) {
    if ((param_1 < (undefined4 *)0x60000000) || ((undefined4 *)0x6007ffff < param_1)) {
      if ((param_1 < (undefined4 *)0x40000000) || ((undefined4 *)0x47ffffff < param_1)) {
        if (param_1 < (undefined4 *)0xc0000000) {
          return 0x16;
        }
      }
      else {
        param_1 = param_1 + -0x10000000;
      }
    }
    else {
      param_1 = param_1 + 0x8000000;
    }
  }
  if (param_1 == (undefined4 *)0x0) {
    return 0x16;
  }
  if ((param_1 < &DAT_ram_80030800) || (&DAT_ram_80037000 <= param_1)) {
    if ((param_1 < &DAT_ram_00222e00) || ((undefined4 *)0x39fdff < param_1)) {
      FUN_ram_000ee260(s_uc_kfree__pointer__mem__p__out_o_ram_001bda9c,param_1);
      FUN_ram_000ec0ec();
      return 0xe;
    }
    puVar5 = &DAT_ram_001cb24c;
    pcVar6 = s_SLOW_MEM_ram_001bda6c;
    DAT_ram_800372d4 = DAT_ram_800372d4 + 1;
  }
  else {
    puVar5 = &DAT_ram_001cb25c;
    pcVar6 = s_FAST_MEM_ram_001bda60;
    DAT_ram_800372d0 = DAT_ram_800372d0 + 1;
  }
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  puVar3 = (undefined4 *)puVar5[2];
  do {
    if (puVar3 == (undefined4 *)0x0) {
      FUN_ram_000ee260(s_pointer__mem__p__not_found_in__s_ram_001bda78,param_1,pcVar6);
      FUN_ram_000ec0ec();
      uVar4 = 0xe;
LAB_ram_000ee9dc:
      STATUS32 = uVar1;
      return uVar4;
    }
    if (param_1 + -3 == puVar3) {
      puVar2 = (undefined4 *)puVar3[2];
      if (puVar3[1] == 0) {
        puVar5[3] = puVar2;
      }
      else {
        *(undefined4 **)(puVar3[1] + 8) = puVar2;
      }
      *puVar3 = 0;
      uVar4 = 0;
      *puVar2 = puVar3[1];
      goto LAB_ram_000ee9dc;
    }
    puVar3 = (undefined4 *)puVar3[1];
  } while( true );
}


