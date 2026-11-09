/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010c46c */

void FUN_ram_0010c46c(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  
  FUN_ram_000ee260(s_Node__d__qn__p_ram_001c08f4,param_3,param_2);
  if (&UNK_auxregs_0d83 < DAT_ram_0018d152) {
    FUN_ram_000eeca8(&DAT_ram_001c0904,param_2,0xd84);
    iVar2 = *(int *)(param_2 + 0x4c0);
    if (iVar2 != 0) goto LAB_ram_0010c514;
    iVar2 = *(int *)(param_2 + 0x4c8);
    if ((iVar2 == 0) || (DAT_ram_0018d154 == 0)) goto LAB_ram_0010c5d8;
    if (DAT_ram_0018d152 < 0x24f4) goto LAB_ram_0010c584;
LAB_ram_0010c5c4:
    puVar1 = (undefined *)0x24f4;
  }
  else {
    FUN_ram_000ee260(s_printing__d_of__d_ram_001c0908,DAT_ram_0018d152,0xd84);
    FUN_ram_000eeca8(&DAT_ram_001c0904,param_2,DAT_ram_0018d152);
    iVar2 = *(int *)(param_2 + 0x4c0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_2 + 0x4c8);
    }
    else {
LAB_ram_0010c514:
      if (DAT_ram_0018d152 < 0x38) {
        FUN_ram_000ee260(s_printing__d_of__d_ram_001c0908,DAT_ram_0018d152,0x38);
        FUN_ram_000eeca8(s_rate_alg__ram_001c0920,iVar2,DAT_ram_0018d152);
        iVar2 = *(int *)(param_2 + 0x4c8);
      }
      else {
        FUN_ram_000eeca8(s_rate_alg__ram_001c0920,iVar2,0x38);
        iVar2 = *(int *)(param_2 + 0x4c8);
      }
    }
    if ((iVar2 == 0) || (DAT_ram_0018d154 == 0)) goto LAB_ram_0010c5d8;
    if (0x24f3 < DAT_ram_0018d152) goto LAB_ram_0010c5c4;
LAB_ram_0010c584:
    FUN_ram_000ee260(s_printing__d_of__d_ram_001c0908,DAT_ram_0018d152,0x24f4);
    puVar1 = DAT_ram_0018d152;
  }
  FUN_ram_000eeca8(s_rate_ctrl_state__ram_001c0930,iVar2,puVar1);
LAB_ram_0010c5d8:
  FUN_ram_000ee260(s_End_Node__d_ram_001c0944,param_3);
  return;
}


