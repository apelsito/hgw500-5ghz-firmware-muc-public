/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011ca38 */

/* WARNING: Type propagation algorithm not settling */

void FUN_ram_0011ca38(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_ram_8002c228 == '\0') {
    if (DAT_ram_8002c229 == '\0') {
      return;
    }
    if ((*(int *)(param_1 + 0x690) != 0) && (FUN_ram_0011c310(), DAT_ram_8002c229 == '\0')) {
      if (*(char *)(param_1 + 100) == '\0') {
        cVar1 = *(char *)(param_1 + 0x65);
        goto joined_r0x0011cb20;
      }
      goto LAB_ram_0011cb50;
    }
LAB_ram_0011cac0:
    uVar2 = FUN_ram_0011c784(param_1,(*(uint *)(*(int *)(**(int **)(param_1 + 4) + 0x1c) + 0x4678) &
                                     0xff00) >> 8);
    FUN_ram_0011c894(param_1,uVar2);
    if (((*(char *)(param_1 + 100) == '\0') && (*(char *)(param_1 + 0x65) != '\x02')) &&
       ((*(ushort *)(param_1 + 0x6e) & 0x20) == 0 && (*(ushort *)(param_1 + 0x6e) & 0x40) == 0)) {
LAB_ram_0011cb30:
      bVar3 = false;
      if ((*(uint *)(param_1 + 0x3c2) & 0x20) == 0) goto LAB_ram_0011cb54;
    }
  }
  else {
    if (*(int *)(param_1 + 0x690) != 0) {
      FUN_ram_0011c310();
      if (DAT_ram_8002c229 == '\0') {
        if (*(char *)(param_1 + 100) == '\0') {
          cVar1 = *(char *)(param_1 + 0x65);
          goto joined_r0x0011cb20;
        }
        goto LAB_ram_0011cb50;
      }
      goto LAB_ram_0011cac0;
    }
    if (DAT_ram_8002c229 != '\0') goto LAB_ram_0011cac0;
    if (*(char *)(param_1 + 100) == '\0') {
      cVar1 = *(char *)(param_1 + 0x65);
joined_r0x0011cb20:
      if ((cVar1 == '\x02') ||
         ((*(ushort *)(param_1 + 0x6e) & 0x20) != 0 || (*(ushort *)(param_1 + 0x6e) & 0x40) != 0))
      goto LAB_ram_0011cb50;
      goto LAB_ram_0011cb30;
    }
  }
LAB_ram_0011cb50:
  bVar3 = true;
LAB_ram_0011cb54:
  if (!bVar3) {
    *(undefined1 *)(param_1 + 0x682) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x682) = 0;
  }
  FUN_ram_0011b9f4(param_1,bVar3);
  *(undefined1 *)(param_1 + 0x6b4) = *(undefined1 *)(param_1 + 0x682);
  FUN_ram_0011c9d4(param_1,0,4000);
  return;
}


