/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00157594 */

void FUN_ram_00157594(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_ram_00155e14(*(undefined1 *)(param_1 + 0x67c));
  if (iVar2 == 0) {
    return;
  }
  if ((*(char *)(param_1 + 100) != '\0') && (DAT_ram_8002c90c == '\0')) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x38c) & 0xffffff9f;
  *(uint *)(param_1 + 0x38c) = uVar3;
  if (DAT_ram_8002c90a == '\0') goto LAB_ram_0015760c;
  if (DAT_ram_8002c90a == '\x01') {
LAB_ram_00157604:
    uVar1 = 0x40;
  }
  else {
    if (DAT_ram_8002c90a != '\x02') {
      if (DAT_ram_8002c90a == '\x03') {
        if (*(char *)(iVar2 + 99) == '\x01') goto LAB_ram_0015760c;
        goto LAB_ram_00157604;
      }
      if ((DAT_ram_8002c90a != '\x04') || (*(char *)(iVar2 + 99) == '\x01')) goto LAB_ram_0015760c;
    }
    uVar1 = 0x20;
  }
  uVar3 = uVar3 | uVar1;
  *(uint *)(param_1 + 0x38c) = uVar3;
LAB_ram_0015760c:
  FUN_ram_80025e54(iVar2 + 100,uVar3,2);
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_1 + 0x38c);
  return;
}


