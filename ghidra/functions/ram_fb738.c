/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000fb738 */

void FUN_ram_000fb738(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                     int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  
  FUN_ram_000fb5e8();
  iVar4 = *(int *)(param_1 + 0xc);
  uVar6 = *(undefined4 *)(iVar4 + 0x3024);
  uVar7 = param_5 << 4 | 1U | *(uint *)(iVar4 + 0x3020) & 0xffffff0f;
  cVar5 = '\0';
  iVar1 = 2;
  while( true ) {
    if (cVar5 == '\0') {
      *(uint *)(iVar4 + 0x3020) = uVar7;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x3024) = uVar6;
    }
    else {
      *(uint *)(iVar4 + 0x103020) = uVar7;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x103024) = uVar6;
    }
    iVar4 = 0;
    puVar3 = param_4;
    do {
      iVar2 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0xc) + (uint)(cVar5 != '\0') * 0x100000 + iVar2 + 0x3028) =
           *puVar3;
      puVar3 = puVar3 + 1;
    } while (iVar4 < 4);
    FUN_ram_000fb058(param_1,1,param_3,param_2,cVar5);
    cVar5 = cVar5 + '\x01';
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) break;
    iVar4 = *(int *)(param_1 + 0xc);
  }
  return;
}


