/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0012f818 */

void FUN_ram_0012f818(int param_1,int *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort local_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  
  iVar6 = *(int *)(param_1 + 0x1c);
  iVar5 = *(int *)(iVar6 + 0x3b20);
  iVar4 = *param_2;
  if ((char)param_2[0x19] == '\0') {
    uVar3 = 0;
    if ((*(uint *)((int)param_2 + 0x3c2) & 0x800) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 1;
    uVar1 = 1;
  }
  FUN_ram_000fb85c(iVar5,(char)param_2[0x19f],uVar1,1,uVar3,3);
  if (((DAT_ram_0018c111 != '\0') && (*(char *)(iVar4 + 0x2c) == '\x01')) &&
     (*(char *)((int)param_2 + 0x67d) == -1)) {
    uVar7 = (int)param_2 + 0x96;
    if ((uVar7 & 1) == 0) {
      local_24 = *(ushort *)((int)param_2 + 0x96);
      uStack_22 = (undefined2)param_2[0x26];
      uStack_20 = *(undefined2 *)((int)param_2 + 0x9a);
    }
    else {
      FUN_ram_0039fe00(&local_24,uVar7,6);
    }
    local_24 = local_24 | 1;
    iVar6 = FUN_ram_000fb0e4(*(undefined4 *)(iVar6 + 0x3b20),*(undefined1 *)((int)param_2 + 0xd67));
    if (iVar6 != 0xff) {
      uVar1 = FUN_ram_0013b5e0(iVar6,iVar4,&local_24);
      *(char *)((int)param_2 + 0x67d) = (char)uVar1;
      FUN_ram_000fb85c(iVar5,uVar1);
      if (((char)param_2[0x19] == '\0') && ((*(uint *)((int)param_2 + 0x3c2) & 0x800) == 0)) {
        pcVar2 = s_disable_ram_001c4344;
        uVar1 = 0;
      }
      else if ((char)param_2[0x19] == '\0') {
        uVar1 = 0;
        pcVar2 = s_enable_ram_001c433c;
      }
      else {
        pcVar2 = s_enable_ram_001c433c;
        uVar1 = 1;
      }
      FUN_ram_000ee260(s_BW_Signaling_TA__pM__s_TxBF_CB___ram_001c434c,&local_24,pcVar2,1,uVar1,3);
      *(uint *)(*(int *)(iVar5 + 0xc) + 0x3010) =
           *(uint *)(*(int *)(iVar5 + 0xc) + 0x3010) & 0xfffeffff;
      FUN_ram_00103fb4(iVar5,uVar7);
      FUN_ram_000ee260(s_qtn_vht_immediate_bfrpt_enable__B_ram_001c4380,
                       *(undefined4 *)(*(int *)(iVar5 + 0xc) + 0x3010));
    }
  }
  return;
}


