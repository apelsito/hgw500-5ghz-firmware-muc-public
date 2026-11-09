/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000ee734 */

/* WARNING: Removing unreachable block (ram,0x000ee5d4) */

uint FUN_ram_000ee734(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  
  if (param_2 == 0) {
    puVar7 = &DAT_ram_001bd9c0;
    DAT_ram_800372c4 = DAT_ram_800372c4 + 1;
  }
  else {
    puVar7 = (undefined *)0x1bd9c8;
    DAT_ram_800372c0 = DAT_ram_800372c0 + 1;
  }
  uVar6 = 0;
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  piVar3 = (int *)(&DAT_ram_001cb254)[param_2 * 4];
  iVar5 = (&DAT_ram_001cb24c)[param_2 * 4];
  if (piVar3 != (int *)0x0) {
    do {
      if (((iVar5 + 0xfU & 0xfffffffc) + (param_1 + 3U & 0xfffffffc)) - iVar5 <=
          (uint)((int)piVar3 - iVar5)) {
        if (piVar3 != (int *)0x0) goto LAB_ram_000ee66c;
        break;
      }
      iVar5 = *piVar3 + (int)piVar3;
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
  }
  uVar4 = (&DAT_ram_001cb250)[param_2 * 4] - iVar5;
  if (uVar4 < ((param_1 + 3U & 0xfffffffc) + (iVar5 + 0xfU & 0xfffffffc)) - iVar5) {
    if (param_2 == 0) {
      DAT_ram_800372cc = DAT_ram_800372cc + 1;
    }
    else {
      DAT_ram_800372c8 = DAT_ram_800372c8 + 1;
    }
    FUN_ram_000ee260(s_run_out_of__s__seg_req_size__d_s_ram_001bda00,puVar7,param_1,2);
    if ((int)uVar4 < 0) {
      FUN_ram_000ee260(s__s_fatal_error__avail__d_ptr_0x__ram_001bda2c,
                       s_uc_kmalloc_align_ram_001a57c0,uVar4,iVar5,(&DAT_ram_001cb250)[param_2 * 4])
      ;
      FUN_ram_000ec0ec();
    }
  }
  else {
LAB_ram_000ee66c:
    uVar6 = iVar5 + 0xfU & 0xfffffffc;
    piVar2 = (int *)(uVar6 - 0xc);
    *piVar2 = (param_1 + 3U & 0xfffffffc) + 0xc;
    if (piVar3 == (int *)0x0) {
      *(undefined4 *)(uVar6 - 8) = 0;
      piVar3 = (int *)(&DAT_ram_001cb258)[param_2 * 4];
      *(int **)(uVar6 - 4) = piVar3;
      *piVar3 = (int)piVar2;
      (&DAT_ram_001cb258)[param_2 * 4] = uVar6 - 8;
    }
    else {
      iVar5 = piVar3[2];
      *(int **)(uVar6 - 8) = piVar3;
      *(int *)(uVar6 - 4) = iVar5;
      *(int **)piVar3[2] = piVar2;
      piVar3[2] = uVar6 - 8;
    }
  }
  STATUS32 = uVar1;
  return uVar6;
}


