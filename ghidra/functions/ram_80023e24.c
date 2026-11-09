/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80023e24 */

undefined4 FUN_ram_80023e24(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  FUN_ram_80025588(param_3[2],0x20);
  uVar4 = 0;
  if (*(int *)(param_3[2] + 0x14) < 0) {
    return 1;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x3b20) + 0xc);
  iVar5 = *(int *)(iVar2 + *(int *)(&DAT_ram_001aa63c + param_2 * 4));
  uVar1 = *(uint *)(iVar2 + param_2 * 4 + 0x2090);
  iVar2 = 1 - uVar1;
  if (1 < uVar1) {
    iVar2 = 0;
  }
  if (((iVar2 == 0) && (*(int *)(*param_3 + 4) == iVar5)) ||
     (piVar6 = (int *)param_3[3], piVar6 == (int *)0x0)) {
    puVar3 = &DAT_ram_80037000 + param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    do {
      if ((iVar2 == 0) && (iVar5 == *(int *)(*piVar6 + 4))) break;
      FUN_ram_80025588(piVar6[2],0x20);
      uVar1 = uVar1 + 1;
      if (*(int *)(piVar6[2] + 0x14) < 0) {
        iVar2 = param_2 * 4;
        puVar3 = &DAT_ram_80037000 + param_2;
        uVar4 = 1;
        *(int *)(&DAT_ram_8003737c + iVar2) = *(int *)(&DAT_ram_8003737c + iVar2) + 1;
        *(uint *)(&DAT_ram_80037388 + iVar2) = *(int *)(&DAT_ram_80037388 + iVar2) + uVar1;
        FUN_ram_80025588(param_3[2],0x20);
        goto LAB_ram_80023f60;
      }
      piVar6 = (int *)piVar6[3];
    } while (piVar6 != (int *)0x0);
    puVar3 = &DAT_ram_80037000 + param_2;
    uVar4 = 0;
  }
LAB_ram_80023f60:
  puVar3[0xd6] = puVar3[0xd6] + 1;
  puVar3[0xd9] = puVar3[0xd9] + uVar1;
  if (uVar1 <= (uint)puVar3[0xdc]) {
    return uVar4;
  }
  puVar3[0xdc] = uVar1;
  return uVar4;
}


