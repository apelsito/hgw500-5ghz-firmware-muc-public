/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00157b04 */

void FUN_ram_00157b04(int param_1,int param_2,uint param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  
  uVar1 = *(undefined1 *)(param_2 + 0x67c);
  iVar2 = FUN_ram_00155e44(uVar1,param_3);
  if (param_3 == 1) {
    iVar7 = 1;
    cVar6 = '\x01';
  }
  else if (param_3 == 5) {
    iVar7 = 2;
    cVar6 = '\x02';
  }
  else if ((param_3 == 6 || param_3 == 4) || (param_3 == 7)) {
    iVar7 = 3;
    cVar6 = '\x03';
  }
  else {
    iVar7 = 0;
    cVar6 = '\0';
  }
  if ((param_3 == 7) || (param_3 == 4)) {
    uVar3 = 2;
  }
  else if (((*(ushort *)(param_2 + 0xc) & 8) == 0) || (param_4 != 0)) {
    uVar3 = 0x10;
  }
  else {
    uVar3 = 0x20;
  }
  FUN_ram_00156738(iVar2 + 0x87,1,uVar3,0);
  FUN_ram_00156738(iVar2 + 2,1,uVar1,2);
  FUN_ram_00156738(iVar2 + 3,1,param_3,2);
  FUN_ram_00156738(iVar2 + 4,1,cVar6,2);
  cVar5 = '\x01';
  if ((cVar6 != '\0') && (cVar5 = '\0', iVar7 != 1)) {
    cVar5 = cVar6;
  }
  FUN_ram_00156738(iVar2 + 5,1,cVar5,2);
  if (param_3 == 1) {
    cVar6 = *(char *)(param_1 + 0x39ce);
  }
  else if (param_3 == 5) {
    cVar6 = *(char *)(param_1 + 0x39d6);
  }
  else if (param_3 == 6) {
    cVar6 = *(char *)(param_1 + 0x39de);
  }
  else if (param_3 == 4) {
    cVar6 = *(char *)(param_1 + 0x39de);
  }
  else if (param_3 == 7) {
    cVar6 = *(char *)(param_1 + 0x39de);
  }
  else {
    cVar6 = *(char *)(param_1 + 0x39c6);
  }
  if (cVar6 == '\0') {
    uVar4 = 1 - DAT_ram_8002c8c0;
    if (1 < DAT_ram_8002c8c0) {
      uVar4 = 0;
    }
    uVar4 = (uVar4 & 3) << 5;
  }
  else {
    uVar4 = 0x20;
  }
  FUN_ram_00156738(iVar2,2,param_3 & 0xf | uVar4,2);
  return;
}


