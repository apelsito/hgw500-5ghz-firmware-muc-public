/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013b65c */

undefined4 FUN_ram_0013b65c(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_2c;
  undefined2 local_28;
  
  iVar7 = *(int *)(**(int **)(param_1 + 0xc) + 0x1c);
  uVar3 = *(ushort *)(param_2 + 0xb8);
  uVar6 = *(undefined4 *)(iVar7 + 0x3b20);
  cVar1 = *(char *)(param_2 + 0xb4);
  uVar2 = *(undefined1 *)(param_1 + 0x10);
  local_2c = DAT_ram_001a876c;
  local_28 = DAT_ram_001a8770;
  if ((*(char *)(param_1 + 0x2c) == '\x01') && ((*(byte *)(param_2 + 1) & 4) != 0)) {
    FUN_ram_000fb294(uVar6,cVar1 == '\x01');
  }
  switch(cVar1) {
  case '\0':
    for (iVar8 = *(int *)(*(int *)(param_1 + 0xc) + 0x388c); iVar8 != 0;
        iVar8 = *(int *)(iVar8 + 0x114)) {
      cVar1 = *(char *)(iVar8 + 0x81f);
      if ((cVar1 == '\x01' || cVar1 == '\x05') || cVar1 == '\x06') {
        uVar4 = 4;
        *(undefined1 *)(iVar8 + 0x67e) = 3;
        *(undefined1 *)(iVar8 + 0x67f) = 0x10;
      }
      else {
        uVar4 = 2;
        *(undefined1 *)(iVar8 + 0x67e) = 0;
        *(undefined1 *)(iVar8 + 0x67f) = 8;
      }
      FUN_ram_000fb55c(uVar6,iVar8 + 0x96,*(undefined1 *)(iVar8 + 0x67c),param_2 + 4,0,uVar2,uVar4);
    }
    FUN_ram_000fb55c(uVar6,&local_2c,0x3f,param_2 + 4,0,uVar2,2);
    *(char *)(iVar7 + 0x3db8) = (char)*(undefined2 *)(param_2 + 2);
    return 1;
  case '\x01':
    FUN_ram_000fb55c(uVar6,param_3,uVar3 & 0xff,param_2 + 0x14,0,uVar2,3);
    uVar3 = uVar3 + 0x40 & 0xff;
    uVar4 = 1;
    uVar5 = 3;
    break;
  default:
    return 1;
  case '\x03':
    uVar3 = uVar3 & 0xff;
    uVar4 = 0;
    uVar5 = 4;
    break;
  case '\x06':
    uVar3 = uVar3 & 0xff;
    FUN_ram_000fb55c(uVar6,param_3,uVar3,param_2 + 4,0,uVar2,0);
    uVar4 = 1;
    uVar5 = 0;
  }
  FUN_ram_000fb55c(uVar6,param_3,uVar3,param_2 + 4,uVar4,uVar2,uVar5);
  return 1;
}


