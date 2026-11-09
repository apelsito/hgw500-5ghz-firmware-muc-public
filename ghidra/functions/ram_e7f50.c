/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e7f50 */

undefined4 FUN_ram_000e7f50(undefined2 *param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  
  puVar4 = DAT_ram_001cb26c;
  while( true ) {
    if (puVar4 == (undefined2 *)0x0) {
      return 0x13;
    }
    if (param_1 == puVar4) break;
    puVar4 = *(undefined2 **)(puVar4 + 0x30);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x32);
  if (*(int *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 100) = *(undefined4 *)(param_1 + 0x32);
    uVar3 = DAT_ram_001cb270;
  }
  DAT_ram_001cb270 = uVar3;
  uVar1 = param_1[7];
  uVar2 = *param_1;
  **(undefined4 **)(param_1 + 0x32) = *(undefined4 *)(param_1 + 0x30);
  param_1[7] = uVar1 & 0xfffd;
  FUN_ram_000efe3c(2,uVar2,uVar1 & 0xfffd,0);
  return 0;
}


