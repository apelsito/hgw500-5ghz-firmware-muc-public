/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00156884 */

void FUN_ram_00156884(void)

{
  undefined4 *puVar1;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  puVar1 = (undefined4 *)FUN_ram_0015659c();
  local_1c = DAT_ram_8002c8b8;
  FUN_ram_001567ec(DAT_ram_0018c274 + 0x14,&local_1c,4);
  FUN_ram_001567ec((uint)*(ushort *)*puVar1 * 0x30 + DAT_ram_0018c278,puVar1 + 0xe70,0x20);
  FUN_ram_00156834(puVar1,puVar1);
  uStack_18 = DAT_ram_8002c8fc;
  FUN_ram_001567ec(DAT_ram_0018c278 + 0x24 + (uint)*(ushort *)*puVar1 * 0x30,&uStack_18,4);
  return;
}


