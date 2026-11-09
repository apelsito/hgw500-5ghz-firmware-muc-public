/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010de20 */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_ram_0010de20(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  cVar1 = DAT_ram_8002c94c;
  iVar11 = *(int *)(param_1 + 0x3b20);
  if (*(char *)(param_1 + 0x1e) != '\x06') {
    return 0;
  }
  uVar9 = 0;
  iVar8 = 4;
LAB_ram_0010dea0:
  uVar10 = uVar9;
  if (cVar1 == '\0') goto LAB_ram_0010deb8;
  uVar10 = uVar9 * 2;
joined_r0x0010deac:
  if ((int)uVar10 < 8) {
LAB_ram_0010deb8:
    do {
      piVar2 = (int *)FUN_ram_00128c64(param_1,uVar10);
      if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
        if (7 < (int)uVar10) break;
        uVar7 = *(uint *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + 0x3014);
        uVar6 = *(uint *)(*(int *)(*(int *)(param_1 + 0x3b20) + 0xc) + 0x3018);
        iVar5 = *(int *)(iVar11 + 0xc);
        uVar4 = *(uint *)(iVar5 + uVar9 * 0x10 + 0x4e0);
        uVar10 = uVar6;
        if (uVar4 < uVar7) {
          uVar10 = uVar6 + 1;
        }
        if ((((param_6 & 1) != 0) &&
            ((uVar10 < param_5 || ((param_5 == uVar10 && (uVar4 <= param_4)))))) &&
           ((param_3 < uVar10 || ((param_3 == uVar10 && (param_2 <= uVar4)))))) {
          return 1;
        }
        if ((param_6 & 2) == 0) break;
        uVar3 = *(uint *)(uVar9 * 0x10 + 0x4e8 + iVar5);
        if (uVar3 < uVar7) {
          uVar6 = uVar6 + 1;
        }
        if ((uVar10 <= uVar6) && ((uVar6 != uVar10 || (uVar4 <= uVar3)))) break;
        uVar10 = uVar9;
        if (cVar1 == '\0') goto LAB_ram_0010dff0;
        uVar10 = uVar9 * 2;
        goto joined_r0x0010dfc4;
      }
      if (cVar1 == '\0') {
        uVar10 = uVar10 + 4;
      }
      else {
        if ((uVar10 & 1) != 0) goto code_r0x0010df54;
        uVar10 = uVar10 + 1;
      }
      if (7 < (int)uVar10) break;
    } while( true );
  }
  goto LAB_ram_0010e074;
joined_r0x0010dfc4:
  if ((int)uVar10 < 8) {
LAB_ram_0010dff0:
    do {
      piVar2 = (int *)FUN_ram_00128c64(param_1,uVar10);
      if (((piVar2 != (int *)0x0) && (*piVar2 != 0)) && ((*(byte *)((int)piVar2 + 0x1a) & 2) != 0))
      {
        return 2;
      }
      if (cVar1 == '\0') {
        uVar10 = uVar10 + 4;
      }
      else {
        if ((uVar10 & 1) != 0) goto code_r0x0010e060;
        uVar10 = uVar10 + 1;
      }
      if (7 < (int)uVar10) break;
    } while( true );
  }
  goto LAB_ram_0010e074;
code_r0x0010e060:
  uVar10 = uVar10 + 7;
  goto joined_r0x0010dfc4;
code_r0x0010df54:
  uVar10 = uVar10 + 7;
  goto joined_r0x0010deac;
LAB_ram_0010e074:
  iVar8 = iVar8 + -1;
  uVar9 = uVar9 + 1;
  if (iVar8 == 0) {
    return 0;
  }
  goto LAB_ram_0010dea0;
}


