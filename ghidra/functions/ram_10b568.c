/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010b568 */

void FUN_ram_0010b568(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  
  if (DAT_ram_8002c8bc == '\x03') {
    *(undefined4 *)(param_2 + 0x430) = 0;
    *(undefined4 *)(param_2 + 0x434) = 0;
    FUN_ram_00157dc0(param_1,param_2,0,0);
    FUN_ram_0011714c(*(undefined1 *)(param_2 + 0x67c));
    *(undefined4 *)(param_2 + 0xd78) = 0;
    FUN_ram_800255f4(param_2 + 0xd78,0xc);
    if ((*(byte *)(param_2 + 0x458) & 2) == 0) {
      *(byte *)(param_2 + 0x458) = *(byte *)(param_2 + 0x458) | 1;
      iVar2 = FUN_ram_00157fb8(param_2);
      if (iVar2 == 0) {
        puVar4 = &DAT_ram_00201934 + DAT_ram_0018c098;
        DAT_ram_0018c098 = DAT_ram_0018c098 + 1;
        *puVar4 = 0xc;
        if (0x3f < DAT_ram_0018c098) {
          DAT_ram_0018c098 = 0;
        }
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      iVar2 = param_1 + 0x3dbc;
      iVar9 = param_1 + 0x3e9c;
      iVar6 = 4;
      do {
        uVar5 = 0;
        do {
          for (iVar7 = *(int *)(iVar2 + uVar5 * 8 + 0xc); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0xec)
              ) {
            if (param_2 == *(int *)(iVar7 + 0x14)) {
              bVar1 = true;
              puVar4 = &DAT_ram_00201934 + DAT_ram_0018c098;
              DAT_ram_0018c098 = DAT_ram_0018c098 + 1;
              *puVar4 = 10;
              if (0x3f < DAT_ram_0018c098) {
                DAT_ram_0018c098 = 0;
              }
              break;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 2);
        iVar8 = 2;
        iVar7 = iVar9;
        do {
          piVar10 = (int *)(iVar7 + 0xc);
          iVar7 = iVar7 + 8;
          for (iVar3 = *piVar10; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xec)) {
            if (param_2 == *(int *)(iVar3 + 0x14)) {
              bVar1 = true;
              puVar4 = &DAT_ram_00201934 + DAT_ram_0018c098;
              DAT_ram_0018c098 = DAT_ram_0018c098 + 1;
              *puVar4 = 10;
              if (0x3f < DAT_ram_0018c098) {
                DAT_ram_0018c098 = 0;
              }
              break;
            }
          }
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        iVar2 = iVar2 + 0x38;
        iVar6 = iVar6 + -1;
        iVar9 = iVar9 + 0x38;
      } while (iVar6 != 0);
      if (!bVar1) {
        iVar2 = 10;
        piVar10 = (int *)(param_1 + 0x3fb4);
        LP_START = 0x10b778;
        LP_END = 0x10b79c;
        while ((((iVar6 = *piVar10, iVar6 == 0 || (param_2 != *(int *)(iVar6 + 0x14))) ||
                (*(int **)(iVar6 + 8) == (int *)0x0)) || (**(int **)(iVar6 + 8) != 0))) {
          piVar10 = piVar10 + 1;
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) {
            func_0x0010ad3c(param_2);
            puVar4 = &DAT_ram_00201934 + DAT_ram_0018c098;
            DAT_ram_0018c098 = DAT_ram_0018c098 + 1;
            *puVar4 = 0xd;
            if (0x3f < DAT_ram_0018c098) {
              DAT_ram_0018c098 = 0;
            }
            FUN_ram_0010b160(param_2);
            return;
          }
        }
        puVar4 = &DAT_ram_00201934 + DAT_ram_0018c098;
        DAT_ram_0018c098 = DAT_ram_0018c098 + 1;
        *puVar4 = 0xb;
        if (0x3f < DAT_ram_0018c098) {
          DAT_ram_0018c098 = 0;
          return;
        }
      }
    }
    else {
      puVar4 = &DAT_ram_00201934 + DAT_ram_0018c098;
      DAT_ram_0018c098 = DAT_ram_0018c098 + 1;
      *puVar4 = 0xf;
      if (0x3f < DAT_ram_0018c098) {
        DAT_ram_0018c098 = 0;
        return;
      }
    }
  }
  return;
}


