/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001135e4 */

undefined4 FUN_ram_001135e4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_ram_000fd2e4(*(undefined4 *)(param_1 + 0x3b20));
  FUN_ram_0039fec8(param_1);
  DAT_ram_800371c0 = 0xffffffff;
  DAT_ram_800371c4 = 0xffffffff;
  FUN_ram_001135a0(0);
  FUN_ram_001135a0(1);
  FUN_ram_001135a0(2);
  iVar2 = 0x800;
  puVar3 = DAT_ram_8002c988;
  puVar1 = &DAT_ram_002019d4;
  do {
    DAT_ram_8002c988 = puVar1;
    *DAT_ram_8002c988 = puVar3;
    iVar2 = iVar2 + -1;
    puVar3 = DAT_ram_8002c988;
    puVar1 = DAT_ram_8002c988 + 6;
  } while (iVar2 != 0);
  if ((DAT_ram_8002c8bc == '\x03') && (FUN_ram_800248c8(param_1), DAT_ram_0018c298 == 0)) {
    FUN_ram_0015ce50(param_1);
  }
  FUN_ram_000fd5c4(*(undefined4 *)(param_1 + 0x3b20));
  iVar2 = *(int *)(*(int *)(param_1 + 0x3b20) + 0xc);
  *(uint *)(iVar2 + 0x2000) = *(uint *)(iVar2 + 0x2000) | 1;
  return 0;
}


