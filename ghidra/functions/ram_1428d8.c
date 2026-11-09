/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001428d8 */

longlong FUN_ram_001428d8(int *param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar12 = *(int *)(**(int **)(*param_1 + 0xc) + 0x1c);
  iVar10 = iVar12 + 0x46a4 + (uint)*(byte *)(param_3 + 0x29) * 0x50;
  uVar4 = (uint)*(byte *)((int)param_2 + 3);
  iVar11 = *(int *)(iVar10 + 0x14 + (uint)*(byte *)(param_3 + 0x2a) * 4);
  uVar8 = (int)uVar4 >> 4 & 3;
  uVar9 = uVar4 & 0xf;
  iVar5 = uVar8 - 4;
  bVar13 = SBORROW4(uVar8,4);
  if (uVar8 < 4) {
    iVar5 = uVar9 - 10;
    bVar13 = SBORROW4(uVar9,10);
  }
  if (iVar5 < 0 == bVar13) {
    uVar8 = 0x1000;
  }
  else {
    uVar8 = (uint)*(ushort *)(&DAT_ram_001a89b8 + uVar8 * 0x14 + uVar9 * 2) << 5;
  }
  piVar7 = *(int **)(*param_1 + 0xc);
  if (iVar11 == 0) goto LAB_ram_00142b50;
  if (*(byte *)(param_3 + 0x1c) < *(byte *)(param_3 + 0x1d)) {
    FUN_ram_000ee260(s_MU_tx_pkts__u_<_tx_don_pkts__u_ram_001c5448);
    FUN_ram_000ee260(&DAT_ram_001c4fd0);
    uVar4 = (uint)*(byte *)((int)param_2 + 3);
    if (*(char *)(param_3 + 0x1d) != '\0') goto LAB_ram_001429c4;
LAB_ram_001429cc:
    bVar13 = true;
  }
  else {
    if (*(byte *)(param_3 + 0x1d) == 0) goto LAB_ram_001429cc;
LAB_ram_001429c4:
    bVar13 = false;
  }
  iVar5 = FUN_ram_0013ea84(uVar4,1);
  uVar3 = *param_2;
  uVar4 = (uint)*(byte *)(*(int *)(iVar11 + 0x24a4) + iVar5);
  if (bVar13) {
    uVar9 = *(uint *)(param_3 + 4);
joined_r0x00142a54:
    if (uVar9 <= uVar8) {
      iVar6 = iVar11 + uVar4 * 4;
      *(uint *)(iVar6 + 0x23c) = (uint)*(byte *)(param_3 + 0x1c) + *(int *)(iVar6 + 0x23c);
LAB_ram_00142a70:
      *(undefined1 *)(iVar11 + 0x454 + uVar4) = 1;
    }
  }
  else {
    bVar1 = *(byte *)(param_3 + 0x1d);
    if (bVar1 == 0) {
      uVar9 = *(uint *)(param_3 + 4);
      goto joined_r0x00142a54;
    }
    if (((*(char *)(param_3 + 0x21) == '\0') && (uVar4 != 0xff)) &&
       (*(uint *)(param_3 + 4) <= uVar8)) {
      iVar6 = iVar11 + uVar4 * 4;
      bVar2 = *(byte *)(param_3 + 0x1c);
      *(uint *)(iVar6 + 0x24) = *(int *)(iVar6 + 0x24) + (uint)bVar2;
      *(uint *)(iVar6 + 0x130) = ((uint)bVar2 - (uint)bVar1) + *(int *)(iVar6 + 0x130);
      goto LAB_ram_00142a70;
    }
  }
  if (((uVar3 & 8) != 0 && uVar4 != 0xff) &&
     (iVar6 = iVar11 + uVar4 * 4, uVar3 = *(ushort *)(iVar12 + 0x5aa4),
     *(uint *)(iVar6 + 0x348) = *(int *)(iVar6 + 0x348) + (uint)*(byte *)(param_3 + 0x1c), 1 < uVar3
     )) {
    FUN_ram_000ee260(s_sscl_update_tx_pkt_mu__sampling_g_ram_001c5468,
                     *(undefined1 *)(param_3 + 0x29),*(undefined1 *)(param_3 + 0x2a),uVar4,iVar5);
  }
  piVar7 = DAT_ram_80038ee4;
  if ((-1 < (int)(DAT_ram_80038ee0 - *(int *)(iVar11 + 4))) && (uVar4 != 0xff)) {
    iVar6 = iVar11 + uVar4 * 4;
    uVar8 = *(int *)(iVar6 + 0x23c) + *(int *)(iVar6 + 0x24);
    if (*(uint *)(iVar11 + 0xc) <= uVar8) {
      if (1 < *(ushort *)(iVar12 + 0x5aa4)) {
        FUN_ram_000ee260(s_sscl_update_tx_pkt_mu__grp__u_po_ram_001c54ac,
                         *(undefined1 *)(param_3 + 0x29),*(undefined1 *)(param_3 + 0x2a),uVar4,iVar5
                         ,uVar8,*(undefined4 *)(iVar6 + 0x130));
      }
      FUN_ram_00141fd4(param_1,&DAT_ram_0018d464,iVar11,iVar10);
      piVar7 = DAT_ram_0018d464;
      iVar5 = (int)DAT_ram_80038ee4 + (uint)CARRY4(DAT_ram_80038ee0,(uint)DAT_ram_0018d464);
      *(uint *)(iVar11 + 4) = DAT_ram_80038ee0 + (int)DAT_ram_0018d464;
      *(int *)(iVar11 + 8) = iVar5;
    }
  }
LAB_ram_00142b50:
  return ZEXT48(piVar7) << 0x20;
}


