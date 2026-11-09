/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010c788 */

void FUN_ram_0010c788(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  param_2 = param_2 & 1;
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  FUN_ram_000ee260(s_qtn_cmd_memdbg_dump_ram_001c09b8);
  if (DAT_ram_0018d158 != 0) {
    FUN_ram_001126ec();
  }
  FUN_ram_0010c600(param_1,param_2,DAT_ram_0018d150);
  FUN_ram_000ee260(s_WMAC0_Frame_descriptors__max__d__ram_001c09d0,DAT_ram_0018d14e);
  iVar3 = 0;
  iVar4 = param_1 + 0x3dbc;
  iVar2 = 4;
  do {
    uVar6 = 0;
    do {
      for (iVar5 = *(int *)(iVar4 + uVar6 * 8 + 0xc); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0xec)) {
        while (iVar3 = iVar3 + 1, iVar3 <= (int)(uint)DAT_ram_0018d14e) {
          if (param_2 == 0) {
            FUN_ram_0010c69c(iVar5,iVar3,param_3);
            break;
          }
          FUN_ram_001097c4();
          iVar5 = *(int *)(iVar5 + 0xec);
          if (iVar5 == 0) goto LAB_ram_0010c864;
        }
      }
LAB_ram_0010c864:
      uVar6 = uVar6 + 1;
    } while (uVar6 < 2);
    iVar2 = iVar2 + -1;
    iVar4 = iVar4 + 0x38;
  } while (iVar2 != 0);
  FUN_ram_000ee260(s_Total___d_ram_001c0968,iVar3);
  FUN_ram_000ee260(s_WMAC1_Frame_descriptors__ram_001c09f4);
  iVar3 = 0;
  param_1 = param_1 + 0x3e9c;
  iVar2 = 4;
  do {
    uVar6 = 0;
    do {
      for (iVar4 = *(int *)(param_1 + uVar6 * 8 + 0xc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xec))
      {
        while (iVar3 = iVar3 + 1, iVar3 <= (int)(uint)DAT_ram_0018d14e) {
          if (param_2 == 0) {
            FUN_ram_0010c69c(iVar4,iVar3,param_3);
            break;
          }
          FUN_ram_001097c4();
          iVar4 = *(int *)(iVar4 + 0xec);
          if (iVar4 == 0) goto LAB_ram_0010c8f0;
        }
      }
LAB_ram_0010c8f0:
      uVar6 = uVar6 + 1;
    } while (uVar6 < 2);
    iVar2 = iVar2 + -1;
    param_1 = param_1 + 0x38;
    if (iVar2 == 0) {
      FUN_ram_000ee260(s_Total___d_ram_001c0968,iVar3);
      FUN_ram_000ee260(s_end_qtn_cmd_memdbg_dump_ram_001c0a10);
      STATUS32 = uVar1;
      return;
    }
  } while( true );
}


