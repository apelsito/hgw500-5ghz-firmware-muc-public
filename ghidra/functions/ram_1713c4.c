/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001713c4 */

undefined4 FUN_ram_001713c4(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  uVar1 = FUN_ram_00183c8c();
  if ((0 < param_2) && (param_1 != 0)) {
    iVar4 = 0;
    do {
      while (puVar3 = (undefined4 *)(param_1 + iVar4 * 0xc), param_3 != 0) {
        uVar2 = FUN_ram_00171128(*puVar3,puVar3[1],puVar3[2]);
        *(undefined4 *)(param_3 + iVar4 * 4) = uVar2;
        if (param_4 != 0) {
LAB_ram_00171444:
          FUN_ram_00171000(*puVar3,puVar3[1],puVar3[2],*(undefined4 *)(param_4 + iVar4 * 4));
          goto LAB_ram_00171454;
        }
        iVar4 = iVar4 + 1;
        if ((param_2 <= iVar4) || (param_1 == 0)) goto LAB_ram_00171460;
      }
      if (param_4 != 0) goto LAB_ram_00171444;
LAB_ram_00171454:
      iVar4 = iVar4 + 1;
    } while ((iVar4 < param_2) && (param_1 != 0));
  }
LAB_ram_00171460:
  FUN_ram_00183cd0(uVar1);
  return 0;
}


