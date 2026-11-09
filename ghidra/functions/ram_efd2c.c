/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000efd2c */

void FUN_ram_000efd2c(void)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = DAT_ram_001cb2c8;
  while ((iVar1 = DAT_ram_001cb26c, DAT_ram_001cb2c8 = iVar4, iVar4 != 0 &&
         ((*(uint *)(iVar4 + 0x18) & 1) != 0))) {
    if (*(int *)(iVar4 + 0x10) == 0) {
      DAT_ram_001cb2c8 = *(int *)(iVar4 + 0x24);
    }
    else {
      FUN_ram_000ee834(*(undefined4 *)(iVar4 + 0x10));
      DAT_ram_001cb2c8 = *(int *)(DAT_ram_001cb2c8 + 0x24);
    }
    if (DAT_ram_001cb2c8 == 0) {
      DAT_ram_001cb2cc = &DAT_ram_001cb2c8;
    }
    FUN_ram_000eea80(iVar4,0,0x28);
    *(undefined4 *)(iVar4 + 0x24) = 0;
    piVar2 = (int *)(iVar4 + 0x24);
    *DAT_ram_001cb2b8 = iVar4;
    iVar4 = DAT_ram_001cb2c8;
    DAT_ram_001cb2b8 = piVar2;
  }
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x60)) {
    if (((((*(ushort *)(iVar1 + 0xe) & 2) != 0) && (iVar4 = *(int *)(iVar1 + 0x40), iVar4 != 0)) &&
        (puVar3 = *(undefined1 **)(iVar4 + 4), puVar3 != (undefined1 *)0x0)) &&
       ((puVar3[2] != '\0' && (*(undefined4 **)(puVar3 + 8) != (undefined4 *)0x0)))) {
      (*(code *)**(undefined4 **)(puVar3 + 8))(puVar3[1],*(undefined4 *)(puVar3 + 4),*puVar3);
      *(undefined4 *)(iVar4 + 4) = 0;
      FUN_ram_000ee260(s__s__calling_OS_KFREE__p__for_sca_ram_001bdcdc,
                       s_uc_hostlink_reap_ram_001a5830,puVar3);
      FUN_ram_000ee834(puVar3);
    }
  }
  return;
}


