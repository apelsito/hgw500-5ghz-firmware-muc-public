/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001714f8 */

undefined4 FUN_ram_001714f8(uint *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = FUN_ram_00183c8c();
  if (((0 < param_2) && (param_1 != (uint *)0x0)) && (uVar2 = *param_1, uVar2 != 0)) {
    iVar5 = 0;
    iVar6 = 0;
    do {
      iVar3 = FUN_ram_0017148c(uVar2 >> 2);
      puVar4 = (uint *)(iVar3 * 4 + -0x19fc0000);
      if (param_3 == 0) {
        if (param_4 != 0) {
          *puVar4 = *(uint *)(param_4 + iVar6) & 0xffffff;
        }
      }
      else {
        *(uint *)(param_3 + iVar6) = *puVar4;
        if (param_4 != 0) {
          *puVar4 = *(uint *)(param_4 + iVar6) & 0xffffff;
        }
      }
      if ((param_2 <= iVar5 + 1) || (param_1 == (uint *)0x0)) break;
      iVar5 = iVar5 + 1;
      iVar6 = iVar5 * 4;
      uVar2 = param_1[iVar5];
    } while (uVar2 != 0);
  }
  FUN_ram_00183cd0(uVar1);
  return 0;
}


