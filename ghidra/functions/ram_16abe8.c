/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016abe8 */

uint FUN_ram_0016abe8(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = (uint)*(ushort *)(param_2 + 2);
  uVar3 = 4;
  if (4 < uVar2) {
    do {
      iVar4 = uVar3 + param_2;
      if (*(byte *)(uVar3 + param_2) == 0) {
        FUN_ram_000ee260(s_CMD_ADD____x_ram_001c8d24,param_2);
        FUN_ram_000ee260(s_Wrong_agrument_ID____Stop_calibr_ram_001c8d34);
        FUN_ram_80030314();
        return uVar3;
      }
      iVar5 = (uint)*(byte *)(uVar3 + param_2) * 0xc + -0xc;
      iVar6 = iVar5 + param_4;
      if (param_1 == *(byte *)(iVar5 + param_4)) {
        if ((*(byte *)(iVar6 + 2) < 9) || (0x11 < *(byte *)(iVar6 + 2))) {
          FUN_ram_0039fe00(*(undefined4 *)(iVar6 + 8),iVar4 + 1,*(undefined1 *)(iVar6 + 3));
          iVar4 = *(byte *)(iVar6 + 3) + 1;
        }
        else {
          uVar1 = *(undefined4 *)(iVar6 + 8);
          **(undefined1 **)(iVar6 + 4) = *(undefined1 *)(iVar4 + 1);
          FUN_ram_0039fe00(uVar1,iVar4 + 2,(uint)*(byte *)(iVar6 + 3) * (uint)*(byte *)(iVar4 + 1));
          iVar4 = (uint)*(byte *)(iVar6 + 3) * (uint)*(byte *)(iVar4 + 1) + 2;
        }
        uVar3 = uVar3 + iVar4 & 0xffff;
        uVar2 = (uint)*(ushort *)(param_2 + 2);
      }
    } while (uVar3 < uVar2);
  }
  return uVar3;
}


