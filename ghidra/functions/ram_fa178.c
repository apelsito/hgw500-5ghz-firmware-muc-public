/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fa178 */

void FUN_ram_000fa178(int param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  FUN_ram_000ee260(s_hal_framedesc_inuse_dump_ram_001bf0b4);
  iVar3 = 0;
  piVar4 = &DAT_ram_002016bc;
  iVar5 = 0x30;
  do {
    if (*piVar4 == 0) {
      pcVar1 = s_not_in_use_ram_001bf0ec;
    }
    else {
      pcVar1 = s_in_use_ram_001bf0e4;
    }
    FUN_ram_000ee260(s_HAL_FD__d__x__s_ram_001bf0d0,iVar3,DAT_ram_0018c068 + iVar3 * 100,pcVar1);
    if (2 < param_1) {
      FUN_ram_000eeca8(&DAT_ram_001bf0f8,DAT_ram_0018c068 + iVar3 * 0x6c,0x6c);
      goto LAB_ram_000fa274;
    }
    if (*piVar4 != 0 && param_1 != 0) {
      if (param_1 < 2) {
        if (param_1 == 1) {
          FUN_ram_000eeca8(&DAT_ram_001bf0f8,DAT_ram_0018c068 + iVar3 * 0x6c,0x6c);
          iVar2 = *piVar4;
          goto joined_r0x000fa270;
        }
      }
      else {
        iVar2 = DAT_ram_0018c068 + iVar3 * 0x6c;
        if (iVar2 != 0) {
          FUN_ram_000f9a10(iVar2);
          iVar2 = *piVar4;
joined_r0x000fa270:
          if (iVar2 == 0) goto LAB_ram_000fa284;
        }
      }
LAB_ram_000fa274:
      FUN_ram_000ee260(s_End_FD_ram_001bf0fc);
    }
LAB_ram_000fa284:
    piVar4 = piVar4 + 1;
    iVar5 = iVar5 + -1;
    iVar3 = iVar3 + 1;
    if (iVar5 == 0) {
      FUN_ram_000ee260(s_end_hal_framedesc_inuse_dump_ram_001bf104);
      return;
    }
  } while( true );
}


