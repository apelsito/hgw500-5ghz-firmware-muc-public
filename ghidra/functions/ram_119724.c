/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00119724 */

int FUN_ram_00119724(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_2 + 0x18;
  iVar2 = FUN_ram_00119514(param_1 + 0x3880,param_2,uVar3,1);
  if (iVar2 == 0) {
    FUN_ram_000ee260(s_qtn_vap_create_vapnode__could_no_ram_001c233c);
    return 0;
  }
  if (((iVar2 + 0x9cU & 1) == 0) && ((uVar3 & 1) == 0)) {
    *(undefined2 *)(iVar2 + 0x9c) = *(undefined2 *)(param_2 + 0x18);
    *(undefined2 *)(iVar2 + 0x9e) = *(undefined2 *)(param_2 + 0x1a);
    *(undefined2 *)(iVar2 + 0xa0) = *(undefined2 *)(param_2 + 0x1c);
  }
  else {
    FUN_ram_0039fe00(iVar2 + 0x9cU,uVar3,6);
  }
  uVar1 = *(ushort *)(iVar2 + 0xc);
  *(int *)(param_2 + 0x38) = iVar2;
  *(int *)(param_2 + 0x3c) = iVar2;
  *(ushort *)(iVar2 + 0xc) = uVar1 | 8;
  if (DAT_ram_8002c8bc == '\x03') {
    FUN_ram_00157dc0(param_1,iVar2,1,1);
    return iVar2;
  }
  return iVar2;
}


