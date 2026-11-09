/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000eb8d0 */

void FUN_ram_000eb8d0(undefined1 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar3 = param_1 + -0x40;
  puVar1 = param_1 + 0x3f;
  if ((((puVar3 < (undefined1 *)0x80000000) || ((undefined1 *)0x8007ffff < puVar3)) &&
      ((undefined1 *)0x7ffffff < puVar3)) ||
     (((puVar1 < (undefined1 *)0x80000000 || ((undefined1 *)0x8007ffff < puVar1)) &&
      ((undefined1 *)0x7ffffff < puVar1)))) {
    if (((param_1 < (undefined1 *)0x80000000) || ((undefined1 *)0x8007ffff < param_1)) &&
       ((undefined1 *)0x7ffffff < param_1)) {
      FUN_ram_000eaac4(0,s_Not_a_valid_memory_address_to_fe_ram_001bd1f4,param_1);
    }
    else {
      FUN_ram_000eaac4(0,s_Instruction___0x_08x__>_ram_001bd1d4,param_1);
      iVar2 = 4;
      do {
        FUN_ram_000eaac4(0,s_0x_02x_ram_001bd1ec,*param_1);
        iVar2 = iVar2 + -1;
        param_1 = param_1 + 1;
      } while (iVar2 != 0);
    }
  }
  else {
    FUN_ram_000eaac4(0,s_0x_08x__ram_001bd1b8,puVar3);
    if (puVar3 <= puVar1) {
      puVar1 = puVar1 + (1 - (int)puVar3);
      puVar4 = puVar3;
      puVar5 = puVar3;
      do {
        FUN_ram_000eaac4(0,s__02x_ram_001bd1c0,*puVar5);
        if ((puVar4 != (undefined1 *)0x0) && (((uint)(puVar4 + (1 - (int)puVar3)) & 0xf) == 0)) {
          FUN_ram_000eaac4(0,s_0x_08x__ram_001bd1c8,puVar4 + 1);
        }
        puVar1 = puVar1 + -1;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (puVar1 != (undefined1 *)0x0);
    }
  }
  FUN_ram_000eaac4(0,&DAT_ram_001bd220);
  return;
}


