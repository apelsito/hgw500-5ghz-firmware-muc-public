/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00158244 */

void FUN_ram_00158244(int *param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22 [2];
  
  local_28 = DAT_ram_001aa5b8;
  local_24 = DAT_ram_001aa5bc;
  iVar3 = param_1[0x19f];
  uVar1 = *(undefined1 *)(*param_1 + 0x7d);
  uVar5 = 0;
  iVar6 = 6;
  do {
    cVar2 = *(char *)((int)&local_28 + uVar5);
    if (cVar2 == '\x01') {
      bVar7 = 1;
    }
    else if (cVar2 == '\x05') {
      bVar7 = 2;
    }
    else if (cVar2 == '\x06' || cVar2 == '\x04') {
      bVar7 = 3;
    }
    else {
      bVar7 = -(cVar2 == '\a') & 3;
    }
    uVar4 = FUN_ram_00156ea0((char)iVar3,cVar2,uVar1,local_22);
    FUN_ram_00156f44((char)iVar3,cVar2,bVar7,uVar4,local_22[0]);
    iVar6 = iVar6 + -1;
    uVar5 = uVar5 + 1 & 0xff;
  } while (iVar6 != 0);
  return;
}


