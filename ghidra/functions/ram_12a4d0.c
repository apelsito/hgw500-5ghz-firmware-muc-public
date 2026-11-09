/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012a4d0 */

void FUN_ram_0012a4d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x3f7c) != 0) {
    uVar6 = 0;
    do {
      uVar7 = 0;
      puVar4 = (undefined1 *)(uVar6 * 0x38 + param_1 + 0x3dbc);
      do {
        iVar2 = *(int *)(puVar4 + uVar7 * 8 + 0xc);
        while (iVar2 != 0) {
          iVar2 = *(int *)(iVar2 + 0xec);
          *(int *)(puVar4 + uVar7 * 8 + 0xc) = iVar2;
          if (iVar2 == 0) {
            *(undefined1 **)(puVar4 + uVar7 * 8 + 0x10) = puVar4 + uVar7 * 8 + 0xc;
          }
          FUN_ram_00109920(param_1);
          iVar2 = *(int *)(puVar4 + uVar7 * 8 + 0xc);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 2);
      puVar4[0x1e] = 0;
      puVar4[0x1f] = 0;
      puVar4[0x1d] = 0;
      *(undefined4 *)(puVar4 + 0x20) = 0;
      uVar1 = *(undefined4 *)(param_1 + 0x3b20);
      *(undefined4 *)(puVar4 + 0x30) = *(undefined4 *)(puVar4 + 0x28);
      FUN_ram_0010252c(uVar1,*puVar4);
      iVar2 = 2;
      puVar5 = (undefined1 *)(uVar6 * 0x38 + param_1 + 0x3e9c);
      puVar4 = puVar5;
      do {
        iVar3 = *(int *)(puVar4 + 0xc);
        while (iVar3 != 0) {
          iVar3 = *(int *)(iVar3 + 0xec);
          *(int *)(puVar4 + 0xc) = iVar3;
          if (iVar3 == 0) {
            *(undefined1 **)(puVar4 + 0x10) = puVar4 + 0xc;
          }
          FUN_ram_00109920(param_1);
          iVar3 = *(int *)(puVar4 + 0xc);
        }
        iVar2 = iVar2 + -1;
        puVar4 = puVar4 + 8;
      } while (iVar2 != 0);
      puVar5[0x1e] = 0;
      puVar5[0x1f] = 0;
      puVar5[0x1d] = 0;
      *(undefined4 *)(puVar5 + 0x20) = 0;
      uVar1 = *(undefined4 *)(param_1 + 0x3b20);
      *(undefined4 *)(puVar5 + 0x30) = *(undefined4 *)(puVar5 + 0x28);
      FUN_ram_0010252c(uVar1,*puVar5);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x3f7c));
  }
  return;
}


