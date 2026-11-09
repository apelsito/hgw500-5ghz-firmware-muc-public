/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00156a38 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_00156a38(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int extraout_lp_count;
  int extraout_lp_count_00;
  char in_is_in_loop;
  int local_1c;
  
  iVar1 = FUN_ram_0015659c();
  if (iVar1 == 0) {
    iVar1 = FUN_ram_000e2000(_DAT_ram_e00000bc);
    uVar6 = 0;
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x38);
      goto joined_r0x00156ab0;
    }
  }
  else {
    uVar6 = *(undefined4 *)(iVar1 + 0x3b20);
    iVar1 = FUN_ram_000e2000(_DAT_ram_e00000bc);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x38);
joined_r0x00156ab0:
      if (5 < iVar1) goto LAB_ram_00156b14;
    }
  }
  if (param_2 == 1) {
    if (DAT_ram_0018c290 == (int *)0x0) {
      DAT_ram_0018c290 = (int *)FUN_ram_000ee73c(0x3a0,0);
      if (DAT_ram_0018c290 != (int *)0x0) {
        FUN_ram_000eea80(DAT_ram_0018c290,0,0x3a0);
        goto LAB_ram_00156b14;
      }
      pcVar4 = s_Can_t_alloc_pseudo_fcs_list__ram_001c7360;
    }
    else {
      pcVar4 = s_Warning__Init_the_pseudo_fcs_aga_ram_001c7380;
    }
    FUN_ram_000ee260(pcVar4);
  }
LAB_ram_00156b14:
  do {
    if (param_2 != 0) {
      if (param_2 != 1) {
        pcVar4 = s_qtn_auc_fcs_prepare_by_wmac_id__N_ram_001c73a8;
        goto LAB_ram_00156b80;
      }
      piVar2 = (int *)FUN_ram_000f98ac(uVar6,&local_1c,0x800);
      if (piVar2 != (int *)0x0) {
        iVar3 = FUN_ram_000e2000(_DAT_ram_e00000bc);
        iVar1 = extraout_lp_count;
        if (iVar3 != 0) {
          iVar3 = *(int *)(iVar3 + 0x38);
          goto joined_r0x00156ba0;
        }
        goto LAB_ram_00156ba4;
      }
LAB_ram_00156b78:
      pcVar4 = s_Can_t_allocate_more_fcs_for_AuC__ram_001c73e0;
LAB_ram_00156b80:
      FUN_ram_000ee260(pcVar4,param_2);
      return;
    }
    piVar2 = (int *)FUN_ram_000f9640(uVar6,&local_1c,0x800);
    if (piVar2 == (int *)0x0) goto LAB_ram_00156b78;
    iVar3 = FUN_ram_000e2000(_DAT_ram_e00000bc);
    iVar1 = extraout_lp_count_00;
    if (iVar3 == 0) {
LAB_ram_00156ba4:
      if (param_2 == 1) {
        piVar5 = DAT_ram_0018c290;
        if (DAT_ram_0018c290 == (int *)0x0) goto LAB_ram_00156bcc;
        iVar1 = 8;
        LP_START = 0x156bbc;
        LP_END = 0x156bcc;
        in_is_in_loop = '\x01';
        while (*piVar5 != 0) {
          piVar5 = piVar5 + 0x1d;
LAB_ram_00156bcc:
          if ((in_is_in_loop == '\0') || (iVar1 = iVar1 + -1, iVar1 == 0)) {
            FUN_ram_000ee260(s_Can_t_alloc_pseudo_fcs_ram_001c7414);
            goto LAB_ram_00156c10;
          }
        }
        if (piVar5 == (int *)0x0) break;
        *piVar5 = local_1c;
        piVar5[1] = (int)piVar2;
        piVar2 = piVar5 + 2;
      }
    }
    else {
      iVar3 = *(int *)(iVar3 + 0x38);
joined_r0x00156ba0:
      if (iVar3 < 6) goto LAB_ram_00156ba4;
    }
    iVar1 = FUN_ram_001563ac(0x13,piVar2,local_1c,param_2,1);
  } while (iVar1 != 0);
LAB_ram_00156c10:
  FUN_ram_000f97d8(uVar6,local_1c);
  return;
}


