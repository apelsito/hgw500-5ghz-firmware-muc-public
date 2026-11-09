/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011dcd4 */

void FUN_ram_0011dcd4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x38);
  uVar3 = **(undefined4 **)(param_1 + 0xc);
  if (iVar1 == 0) {
    FUN_ram_000f2ccc(s_qtn_newbssid_hdlr__null_vap_ram_001c2d1c);
  }
  else {
    uVar2 = iVar1 + 0x9c;
    if (((uVar2 & 1) == 0) && ((param_2 + 6U & 1) == 0)) {
      *(undefined2 *)(iVar1 + 0x9c) = *(undefined2 *)(param_2 + 6);
      *(undefined2 *)(iVar1 + 0x9e) = *(undefined2 *)(param_2 + 8);
      *(undefined2 *)(iVar1 + 0xa0) = *(undefined2 *)(param_2 + 10);
    }
    else {
      FUN_ram_0039fe00(uVar2,param_2 + 6U,6);
    }
    FUN_ram_00136684(uVar3,uVar2);
    FUN_ram_0013bb38(param_1);
    FUN_ram_00128c30(uVar3,0);
  }
  return;
}


