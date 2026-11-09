/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f9184 */

undefined4 * FUN_ram_000f9184(undefined4 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_4 = 0;
  if (2 < param_2) {
    *param_4 = 5;
    return (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)FUN_ram_000ee4c8(0x810,1,2);
  if (puVar1 == (undefined4 *)0x0) {
    *param_4 = 0xc;
    FUN_ram_000ee260(s__s__qhh__ENOMEM__req___d_bytes__ram_001bed58,s_hal_attach_ram_001a5d8c,0x810)
    ;
    return (undefined4 *)0x0;
  }
  FUN_ram_000eea80(puVar1,0,0x810);
  *puVar1 = param_1;
  puVar1[3] = param_2 * 0x10000 + -0x1afb0000;
  puVar1[1] = param_2;
  FUN_ram_000fc660(puVar1,0);
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  FUN_ram_000f8be8(puVar1,0);
  FUN_ram_000fe510(puVar1);
  *(undefined1 *)((int)puVar1 + 0xd2) = 1;
  FUN_ram_00101ec0(puVar1,1);
  FUN_ram_001052b8(puVar1,0);
  iVar2 = FUN_ram_000f8f5c(puVar1);
  *param_3 = iVar2;
  if (iVar2 == 0) {
    FUN_ram_000ee834(puVar1);
    *param_4 = 0xc;
    FUN_ram_000ee260(s__s__numfd__ENOMEM__req______byte_ram_001bed7c,s_hal_attach_ram_001a5d8c);
    *param_3 = 0x100;
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *param_3 = 0x100;
  }
  FUN_ram_000f90e0(puVar1);
  return puVar1;
}


