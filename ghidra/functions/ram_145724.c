/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00145724 */

void FUN_ram_00145724(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x683);
  uVar4 = (uint)bVar1;
  if (*(char *)(*(int *)(param_2 + 0x24b4) + (param_3 & 0xffffff7f)) == '\0') {
    *(byte *)(param_1 + 0x685) = bVar1;
LAB_ram_0014579c:
    *(byte *)(param_1 + 0x686) = bVar1;
    return;
  }
  if (uVar4 == 0) {
    *(byte *)(param_1 + 0x685) = bVar1;
    if (*(char *)(param_2 + 0x24ca) == '\0') goto LAB_ram_0014579c;
    uVar3 = 0;
  }
  else {
    uVar3 = uVar4 - 1 & 0xff;
    uVar2 = (undefined1)(uVar4 - 1);
    *(undefined1 *)(param_1 + 0x685) = uVar2;
    if (*(char *)(param_2 + 0x24ca) == '\0') {
      *(undefined1 *)(param_1 + 0x686) = uVar2;
      return;
    }
  }
  if (*(uint *)(param_1 + 0x408) <= uVar4 + 1) {
    uVar2 = (undefined1)*(uint *)(param_1 + 0x408);
    *(undefined1 *)(param_1 + 0x686) = uVar2;
    if (uVar4 == uVar3) {
      *(undefined1 *)(param_1 + 0x685) = uVar2;
      return;
    }
    return;
  }
  uVar2 = (undefined1)(uVar4 + 1);
  *(undefined1 *)(param_1 + 0x686) = uVar2;
  if (uVar4 == uVar3) {
    *(undefined1 *)(param_1 + 0x685) = uVar2;
    return;
  }
  return;
}


