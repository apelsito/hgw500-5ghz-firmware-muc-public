/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00103cf4 */

byte FUN_ram_00103cf4(int param_1)

{
  char cVar1;
  char *pcVar2;
  byte bVar3;
  
  pcVar2 = *(char **)(param_1 + 0x14c);
  bVar3 = false;
  if ((DAT_ram_8002ca84 == '\0') && (*(char **)(param_1 + 0x118) != (char *)0x0)) {
    bVar3 = **(char **)(param_1 + 0x118) != DAT_ram_001a5ea8;
  }
  if ((*(char **)(param_1 + 0x128) == (char *)0x0) ||
     (**(char **)(param_1 + 0x128) == DAT_ram_001a5e64)) {
    if (pcVar2 == (char *)0x0) goto LAB_ram_00103d84;
    cVar1 = *pcVar2;
  }
  else {
    bVar3 = bVar3 | 2;
    if (pcVar2 == (char *)0x0) goto LAB_ram_00103d84;
    cVar1 = *pcVar2;
  }
  if (cVar1 != DAT_ram_001a5e90) {
    bVar3 = bVar3 | 4;
  }
LAB_ram_00103d84:
  if ((*(char **)(param_1 + 0x154) != (char *)0x0) &&
     (**(char **)(param_1 + 0x154) != DAT_ram_0018cd00)) {
    bVar3 = bVar3 | 8;
  }
  if ((*(char **)(param_1 + 0x15c) != (char *)0x0) &&
     (DAT_ram_001a5e9c != **(char **)(param_1 + 0x15c))) {
    bVar3 = bVar3 | 0x10;
  }
  return bVar3;
}


