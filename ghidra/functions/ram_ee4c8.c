/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ee4c8 */

uint FUN_ram_000ee4c8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  
  if (param_2 == 0) {
    if (param_3 < 2) {
LAB_ram_000ee5d4:
      FUN_ram_000ee260(s_uc_kmalloc_align______ERROR__wro_ram_001bd9d0,param_3);
      return 0;
    }
    puVar9 = &DAT_ram_001bd9c0;
    DAT_ram_800372c4 = DAT_ram_800372c4 + 1;
  }
  else {
    if (param_3 < 2) goto LAB_ram_000ee5d4;
    puVar9 = (undefined *)0x1bd9c8;
    DAT_ram_800372c0 = DAT_ram_800372c0 + 1;
  }
  uVar5 = 0;
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  piVar4 = (int *)(&DAT_ram_001cb254)[param_2 * 4];
  iVar7 = (&DAT_ram_001cb24c)[param_2 * 4];
  iVar3 = 1 << (param_3 & 0x1f);
  if (piVar4 != (int *)0x0) {
    do {
      if (((iVar7 + iVar3 + 0xbU & ~(iVar3 - 1U)) + ((iVar3 + param_1) - 1U & ~(iVar3 - 1U))) -
          iVar7 <= (uint)((int)piVar4 - iVar7)) {
        if (piVar4 != (int *)0x0) goto LAB_ram_000ee66c;
        break;
      }
      iVar7 = *piVar4 + (int)piVar4;
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
  }
  uVar6 = (&DAT_ram_001cb250)[param_2 * 4] - iVar7;
  if (uVar6 < (((iVar3 + param_1) - 1U & ~(iVar3 - 1U)) + (~(iVar3 - 1U) & iVar7 + iVar3 + 0xbU)) -
              iVar7) {
    if (param_2 == 0) {
      DAT_ram_800372cc = DAT_ram_800372cc + 1;
    }
    else {
      DAT_ram_800372c8 = DAT_ram_800372c8 + 1;
    }
    FUN_ram_000ee260(s_run_out_of__s__seg_req_size__d_s_ram_001bda00,puVar9,param_1,param_3);
    if ((int)uVar6 < 0) {
      FUN_ram_000ee260(s__s_fatal_error__avail__d_ptr_0x__ram_001bda2c,
                       s_uc_kmalloc_align_ram_001a57c0,uVar6,iVar7,(&DAT_ram_001cb250)[param_2 * 4])
      ;
      FUN_ram_000ec0ec();
    }
  }
  else {
LAB_ram_000ee66c:
    uVar6 = ~(iVar3 - 1U);
    uVar8 = iVar7 + iVar3 + 0xbU & uVar6;
    uVar5 = (uVar8 + iVar3) - 1 & uVar6;
    piVar2 = (int *)(uVar5 - 0xc);
    *piVar2 = (uVar5 + (uVar6 & (iVar3 + param_1) - 1U)) - (uVar8 - 0xc);
    if (piVar4 == (int *)0x0) {
      *(undefined4 *)(uVar5 - 8) = 0;
      piVar4 = (int *)(&DAT_ram_001cb258)[param_2 * 4];
      *(int **)(uVar5 - 4) = piVar4;
      *piVar4 = (int)piVar2;
      (&DAT_ram_001cb258)[param_2 * 4] = uVar5 - 8;
    }
    else {
      iVar3 = piVar4[2];
      *(int **)(uVar5 - 8) = piVar4;
      *(int *)(uVar5 - 4) = iVar3;
      *(int **)piVar4[2] = piVar2;
      piVar4[2] = uVar5 - 8;
    }
  }
  STATUS32 = uVar1;
  return uVar5;
}


