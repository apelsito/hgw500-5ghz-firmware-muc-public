/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011106c */

undefined4 FUN_ram_0011106c(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  bool bVar9;
  
  iVar8 = *(int *)(*param_1 + 0x1c);
  uVar2 = *(uint *)(param_2 + 0x10);
  uVar3 = *(uint *)(param_2 + 0x14);
  iVar1 = *(int *)(iVar8 + 0x3b20);
  uVar7 = 0;
  uVar6 = *(uint *)(*(int *)(iVar1 + 0xc) + 0x3014);
  uVar5 = *(uint *)(*(int *)(iVar1 + 0xc) + 0x3018);
  bVar9 = uVar3 < uVar5;
  if (uVar3 == uVar5) {
    bVar9 = uVar2 < uVar6;
  }
  if (bVar9) {
    uVar7 = 0xffffffff;
    if (*(int *)(iVar8 + 0x5b80) < 1) {
      return 0xffffffff;
    }
    FUN_ram_000ee260(s_REMAIN_CHANNEL__start_tsf_expire_ram_001c15b0);
  }
  else {
    iVar4 = (uVar3 - uVar5) - (uint)(uVar2 < uVar6);
    if (iVar4 == 0 && uVar2 - uVar6 < 3000) {
      uVar7 = 0xffffffff;
      if (*(int *)(iVar8 + 0x5b80) < 1) {
        return 0xffffffff;
      }
      FUN_ram_000ee260(s_REMAIN_CHANNEL__too_small_delta__ram_001c15d4,uVar2 - uVar6,iVar4);
    }
    else {
      if (*(char *)(param_2 + 8) == *(char *)(param_2 + 4)) {
        iVar1 = FUN_ram_00108bfc(iVar1,0,uVar2,uVar3,FUN_ram_0010f918,3,&LAB_ram_0010f830,0,0,
                                 param_1,param_2);
      }
      else {
        iVar1 = FUN_ram_00108bfc(iVar1,0,uVar2,uVar3,&LAB_ram_0010fd88,3,&LAB_ram_0010fa8c,
                                 *(uint *)(param_2 + 0x18) / 1000,&LAB_ram_0010fb80,param_1,param_2)
        ;
      }
      if (iVar1 != 0) {
        FUN_ram_000ee260(s_REMAIN_CHANNEL__fail_to_schedule_ram_001c1638,
                         *(undefined1 *)(param_2 + 8));
        return 0xffffffff;
      }
      iVar1 = *(int *)(iVar8 + 0x5b80);
      *(undefined4 *)(param_2 + 0x1c) = 2;
      if (iVar1 < 1) {
        return 0;
      }
      FUN_ram_000ee260(s_REMAIN_CHANNEL__success_to_sched_ram_001c15fc,*(undefined1 *)(param_2 + 8))
      ;
    }
  }
  FUN_ram_000ee260(0x1c0000);
  return uVar7;
}


