/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001097c4 */

void FUN_ram_001097c4(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *param_1;
  FUN_ram_000ee260(s_FD__d__fd__p_ac__d_tid__d_retry__ram_001c0410,param_2,param_1,
                   *(undefined1 *)(param_1 + 0x12),*(undefined1 *)((int)param_1 + 0x49),
                   *(undefined1 *)((int)param_1 + 0x4a),*(undefined1 *)((int)param_1 + 0x4b),
                   *(undefined1 *)(param_1 + 0x13),*(undefined1 *)((int)param_1 + 0x4d),
                   *(undefined2 *)(param_1 + 0x15),param_1[0x18],param_1[0x17],
                   *(undefined1 *)((int)param_1 + 0x4f),param_1[0x16],param_1[0x14]);
  if (param_4 == 0) {
    bVar1 = *(byte *)((int)param_1 + 0x49);
    goto joined_r0x00109900;
  }
  iVar3 = param_1[7];
  if (param_1[5] != 0) {
    FUN_ram_000ee260(s_Node__ram_001c047c);
    FUN_ram_001094f4(param_1[4],param_1[5],0);
  }
  if (param_1[6] == 0) {
    if (iVar3 != 0) {
      uVar2 = (*(uint *)*param_1 & 0xf0) >> 4;
      if ((uVar2 == 2) || (uVar2 == 3)) {
        iVar3 = *(int *)(iVar3 + 8);
      }
      else {
        iVar3 = *(int *)(iVar3 + 8) + 4;
      }
      goto joined_r0x00109890;
    }
  }
  else {
    iVar3 = *(int *)(*(int *)(param_1[6] + 4) + 0xc);
joined_r0x00109890:
    if (iVar3 != 0) {
      FUN_ram_000ee260(s_Pkt_addr__p_ram_001c0484,iVar3);
      FUN_ram_000eeca8(s_Pkt_header__ram_001c0494,iVar3,0x38);
      bVar1 = *(byte *)((int)param_1 + 0x49);
      goto joined_r0x00109900;
    }
  }
  FUN_ram_000ee260(s_Can_t_find_pkt_header_to_dump_ram_001c04a0);
  bVar1 = *(byte *)((int)param_1 + 0x49);
joined_r0x00109900:
  if ((param_3 == bVar1) || (param_3 == 0xffffffff)) {
    FUN_ram_000f9a10(uVar4);
  }
  return;
}


