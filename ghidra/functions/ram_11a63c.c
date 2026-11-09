/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011a63c */

void FUN_ram_0011a63c(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar1 = (int)param_2 >> 0x10 & 0xff;
  uVar3 = param_2 & 0xffff;
  if (uVar1 == 0x17) {
    FUN_ram_0014a618(param_1,uVar3 * 1000);
    if (*(short *)(param_1 + 0x4022) != 0) {
      FUN_ram_000ee260(s_SCS__adjust_stats_for_cmd__u_ram_001c2568,0x17);
    }
    FUN_ram_00149d1c(param_1);
    return;
  }
  if (uVar1 < 0x18) {
    if (uVar1 != 1) {
      if (uVar1 == 2) {
        *(short *)(param_1 + 0x4022) = (short)param_2;
        return;
      }
      if (uVar1 != 4) {
        return;
      }
      *(uint *)(param_1 + 0x4024) = uVar3;
      return;
    }
    *(short *)(param_1 + 0x4020) = (short)param_2;
    if ((param_2 & 0xffff) != 0) {
      FUN_ram_0014aa88(param_1,1);
    }
  }
  else {
    if (uVar1 == 0x19) {
      if (*(char *)(param_1 + 0x402e) == '\0') {
        return;
      }
      FUN_ram_000ee260(s_SCS_muc_stats__off_channel_sampl_ram_001c2588);
      iVar4 = 0;
      iVar2 = 10;
      puVar5 = (undefined4 *)(param_1 + 0x4030);
      do {
        FUN_ram_000ee260(s_NO__d__u_ram_001c25b4,iVar4,*puVar5);
        iVar2 = iVar2 + -1;
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar2 != 0);
      return;
    }
    if (uVar1 == 0x37) {
      FUN_ram_0014aa88(param_1,uVar3);
      return;
    }
    if (uVar1 != 0x3c) {
      return;
    }
  }
  FUN_ram_0014aafc(param_1,uVar3);
  return;
}


