/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ecdf8 */

void thunk_FUN_ram_0039fe00(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  
  if (param_3 != 0) {
    if ((((uint)param_1 | (uint)param_2) & 3) != 0) {
      puVar4 = (undefined1 *)((int)param_2 + -1);
      puVar7 = (undefined1 *)((int)param_1 + -1);
      LP_START = 0x39fe90;
      LP_END = 0x39fe98;
      do {
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
        *puVar7 = *puVar4;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
    uVar12 = param_3 >> 4;
    bVar1 = false;
    if (uVar12 == 0) goto LAB_ram_0039fe3c;
    LP_START = 0x39fe1c;
    LP_END = 0x39fe3c;
    bVar1 = true;
    do {
      uVar8 = *param_2;
      uVar9 = param_2[1];
      puVar2 = param_2 + 3;
      uVar10 = param_2[2];
      param_2 = param_2 + 4;
      uVar11 = *puVar2;
      *param_1 = uVar8;
      param_1[1] = uVar9;
      puVar2 = param_1 + 3;
      param_1[2] = uVar10;
      param_1 = param_1 + 4;
      *puVar2 = uVar11;
LAB_ram_0039fe3c:
    } while ((bVar1) && (uVar12 = uVar12 - 1, uVar12 != 0));
    if ((param_3 & 0xf) == 0) {
      return;
    }
    if ((param_3 & 8) != 0) {
      puVar2 = param_2 + 1;
      uVar8 = *param_2;
      param_2 = param_2 + 2;
      uVar9 = *puVar2;
      puVar2 = param_1 + 1;
      *param_1 = uVar8;
      param_1 = param_1 + 2;
      *puVar2 = uVar9;
    }
    puVar2 = param_2;
    puVar5 = param_1;
    if ((param_3 & 4) != 0) {
      puVar2 = param_2 + 1;
      puVar5 = param_1 + 1;
      *param_1 = *param_2;
    }
    puVar3 = puVar2;
    puVar6 = puVar5;
    if ((param_3 & 2) != 0) {
      puVar3 = (undefined4 *)((int)puVar2 + 2);
      puVar6 = (undefined4 *)((int)puVar5 + 2);
      *(undefined2 *)puVar5 = *(undefined2 *)puVar2;
    }
    if ((param_3 & 1) != 0) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar3;
    }
  }
  return;
}


