/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0014d95c */

undefined4 FUN_ram_0014d95c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((param_1 == 0) || (DAT_ram_8002c8bd == '\0')) || (*(char *)(param_1 + 0x67) != '\0')) ||
     ((DAT_ram_0018c244 == 0 && (*(char *)(param_1 + 0x65) != '\x02')))) {
LAB_ram_0014d9e8:
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(**(int **)(param_1 + 4) + 0x1c);
    if (*(char *)(param_1 + 0x52c) == '\0') {
      iVar1 = FUN_ram_0014d784(uVar2,param_1);
      if (iVar1 == 0) goto LAB_ram_0014d9e8;
      iVar1 = *(int *)(param_1 + 0x53c);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x53c);
    }
    if (iVar1 != 0) {
      FUN_ram_0014d848(param_1);
    }
    *(undefined1 *)(param_1 + 0x4e8) = 2;
    *(undefined1 *)(param_1 + 0x4ea) = 7;
    *(undefined1 *)(param_1 + 0x4eb) = 0;
    DAT_ram_80037884 = 2;
    *(undefined1 *)(param_1 + 0x52d) = 2;
    *(undefined4 *)(param_1 + 0x518) = 0;
    FUN_ram_0014d910(uVar2,param_1,0,4000);
    uVar2 = 1;
  }
  return uVar2;
}


