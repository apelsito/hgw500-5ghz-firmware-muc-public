/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010f89c */

void FUN_ram_0010f89c(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0x408);
  if (((DAT_ram_0018c104 != 0) && (uVar1 = DAT_ram_0018c108, DAT_ram_0018c108 <= uVar3)) ||
     (uVar1 = uVar3, uVar2 = DAT_ram_0018c118, uVar3 <= DAT_ram_0018c118)) {
    uVar2 = uVar1;
  }
  if ((uVar2 & 0xff) != (uint)*(byte *)(param_1 + 0x683)) {
    (**(code **)(*(int *)(param_1 + 0x4c0) + 0x14))();
  }
  return;
}


