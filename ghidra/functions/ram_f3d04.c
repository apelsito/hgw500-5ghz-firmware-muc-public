/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f3d04 */

undefined4 FUN_ram_000f3d04(undefined4 param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char local_460 [1024];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  
  thunk_FUN_ram_0039fe00(local_460,&DAT_ram_001a58fc,0x400);
  local_60 = DAT_ram_001a5cfc;
  local_5c = DAT_ram_001a5d00;
  local_58 = DAT_ram_001a5d04;
  local_54 = DAT_ram_001a5d08;
  local_50 = DAT_ram_001a5d0c;
  local_4c = DAT_ram_001a5d10;
  local_48 = DAT_ram_001a5d14;
  local_44 = DAT_ram_001a5d18;
  local_40 = 0;
  local_3c = 0;
  iVar4 = FUN_ram_000f3c18(0xc,0);
  if (iVar4 < 0) {
    FUN_ram_000ee260(s_uc_host_read_bootcfg__could_not_o_ram_001be39c,iVar4);
    return 0xfffffff2;
  }
  bVar1 = true;
  bVar2 = false;
  uVar6 = 0;
  do {
    iVar7 = 0;
LAB_ram_000f3e2c:
    if (local_40 < local_3c) {
      pcVar5 = local_460 + local_40;
      local_40 = local_40 + 1;
      cVar3 = *pcVar5;
    }
    else {
      local_3c = FUN_ram_000f3ce8(iVar4,local_460,0x400);
      local_40 = 1;
      cVar3 = local_460[0];
    }
    if (local_3c < 1) {
LAB_ram_000f3ee4:
      FUN_ram_000f3cf8(iVar4);
      if (!bVar2) {
        return 0;
      }
      return 1;
    }
    if (!bVar1) {
      if (cVar3 == '\n') {
        if (bVar2) {
          *(undefined1 *)(uVar6 + param_2) = 0;
          goto LAB_ram_000f3ee4;
        }
        bVar1 = true;
      }
      else if ((bVar2) && (uVar6 < param_3 - 1U)) {
        *(char *)(param_2 + uVar6) = cVar3;
        uVar6 = uVar6 + 1;
      }
      goto LAB_ram_000f3e2c;
    }
    if (cVar3 != '=') {
      if (iVar7 < 0x1f) {
        pcVar5 = (char *)((int)&local_60 + iVar7);
        iVar7 = iVar7 + 1;
        *pcVar5 = cVar3;
      }
      goto LAB_ram_000f3e2c;
    }
    *(undefined1 *)((int)&local_60 + iVar7) = 0;
    iVar7 = FUN_ram_000eeba4(&local_60,param_1);
    if (iVar7 == 0) {
      bVar2 = true;
    }
    bVar1 = false;
  } while( true );
}


