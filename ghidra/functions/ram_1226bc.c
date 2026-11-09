/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001226bc */

void FUN_ram_001226bc(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined3 uVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined3 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  
  if (*(int *)(param_1 + 0xd38) == 0) {
    puVar4 = (undefined1 *)FUN_ram_000ee73c(0x11,0);
    *(undefined1 **)(param_1 + 0xd38) = puVar4;
    if (puVar4 != (undefined1 *)0x0) {
      puVar9 = (undefined3 *)(param_1 + 0x96);
      iVar11 = *(int *)(**(int **)(param_1 + 4) + 0x1c);
      piVar5 = (int *)FUN_ram_0010914c(iVar11,1,0x80);
      if (piVar5 != (int *)0x0) {
        iVar6 = FUN_ram_000f9640(*(undefined4 *)(iVar11 + 0x3b20),piVar5 + 1,0x80);
        *piVar5 = iVar6;
        if (iVar6 != 0) {
          piVar5[0x14] = 5;
          *(int **)(param_1 + 0xd3c) = piVar5;
          *puVar4 = 0x44;
          puVar4[1] = 0;
          puVar4[2] = 0xb0;
          puVar4[3] = 0;
          if ((((uint)(puVar4 + 4) & 1) == 0) && (((uint)puVar9 & 1) == 0)) {
            *(undefined2 *)(puVar4 + 4) = *(undefined2 *)(param_1 + 0x96);
            *(undefined2 *)(puVar4 + 6) = *(undefined2 *)(param_1 + 0x98);
            *(undefined2 *)(puVar4 + 8) = *(undefined2 *)(param_1 + 0x9a);
          }
          else {
            FUN_ram_0039fe00(puVar4 + 4,puVar9,6);
          }
          if ((((uint)(puVar4 + 10) & 1) == 0) && ((param_1 + 0x9cU & 1) == 0)) {
            *(undefined2 *)(puVar4 + 10) = *(undefined2 *)(param_1 + 0x9c);
            *(undefined2 *)(puVar4 + 0xc) = *(undefined2 *)(param_1 + 0x9e);
            *(undefined2 *)(puVar4 + 0xe) = *(undefined2 *)(param_1 + 0xa0);
          }
          else {
            FUN_ram_0039fe00(puVar4 + 10,param_1 + 0x9cU,6);
          }
          uVar1 = *(ushort *)(piVar5 + 9);
          puVar4[0x10] = 0xff;
          puVar10 = (undefined4 *)*piVar5;
          *(ushort *)(piVar5 + 9) = uVar1 | 2;
          *puVar10 = 0x10010518;
          puVar10[1] = 0x11;
          puVar10[2] = 0;
          iVar6 = *(int *)(iVar11 + 0x3b20);
          if ((DAT_ram_0018c110 != '\0') &&
             (puVar10[2] = &DAT_ram_001a0000, DAT_ram_0018c110 == '\x01')) {
            puVar4[10] = puVar4[10] | 1;
          }
          uVar8 = *(uint *)(param_1 + 0xd38);
          iVar7 = FUN_ram_000e2000(uVar8);
          if (iVar7 == 0) {
            if ((uVar8 < 0x60000000) || (0x6007ffff < uVar8)) {
              if ((uVar8 < 0x40000000) || (0x47ffffff < uVar8)) {
                if (uVar8 < 0xc0000000) {
                  uVar8 = 0;
                }
              }
              else {
                uVar8 = uVar8 + 0xc0000000;
              }
            }
            else {
              uVar8 = uVar8 + 0x20000000;
            }
          }
          puVar10[3] = uVar8;
          puVar10[4] = 0;
          puVar10[5] = 0x11;
          puVar10[6] = 0x1080422;
          uVar8 = piVar5[2];
          puVar10[7] = 0x4de;
          iVar7 = FUN_ram_000e2000(uVar8);
          if (iVar7 == 0) {
            if ((uVar8 < 0x60000000) || (0x6007ffff < uVar8)) {
              if ((uVar8 < 0x40000000) || (0x47ffffff < uVar8)) {
                if (uVar8 < 0xc0000000) {
                  uVar8 = 0;
                }
              }
              else {
                uVar8 = uVar8 + 0xc0000000;
              }
            }
            else {
              uVar8 = uVar8 + 0x20000000;
            }
          }
          uVar3 = *puVar9;
          puVar10[8] = uVar8;
          uVar1 = *(ushort *)(param_1 + 0x9a);
          puVar10[9] = CONCAT13(*(undefined1 *)(param_1 + 0x99),uVar3);
          puVar10[10] = (uint)uVar1;
          uVar8 = FUN_ram_000e4890(puVar10,*(undefined4 *)(iVar11 + 0x3b20),2,
                                   DAT_ram_0018c110 != '\0');
          uVar2 = *(undefined2 *)(iVar6 + 0x1fc);
          puVar10[0xb] = uVar8 & 0xffff;
          puVar10[0xc] = 100;
          puVar10[0xd] = CONCAT22(uVar2,*(undefined2 *)(iVar6 + 0x1c4));
          return;
        }
        FUN_ram_00109920(iVar11,piVar5);
      }
      FUN_ram_000ee834(*(undefined4 *)(param_1 + 0xd38));
      *(undefined4 *)(param_1 + 0xd38) = 0;
    }
  }
  return;
}


