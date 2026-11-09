/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001797dc */

void FUN_ram_001797dc(uint param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_1c;
  
  if ((DAT_ram_0018c3e0 != 0) && (param_1 < 3)) {
    if (param_2 == (undefined1 *)0x0) {
      FUN_ram_000ee260(s_index_lna_on_idx_max_gain_idx_cs_ram_001ca06c);
      iVar3 = 0;
      iVar4 = 3;
      do {
        iVar1 = iVar3 * 0x18;
        FUN_ram_000ee260(s__d__d_0x_x_0x_x_0x_x_0x_x_0x_x_ram_001ca0c0,iVar3,
                         *(undefined1 *)(DAT_ram_0018c3e0 + iVar1 + 4),
                         *(undefined1 *)(DAT_ram_0018c3e0 + iVar1 + 5),
                         *(undefined4 *)(DAT_ram_0018c3e0 + iVar1 + 8),
                         *(undefined4 *)(DAT_ram_0018c3e0 + iVar1 + 0xc),
                         *(undefined4 *)(DAT_ram_0018c3e0 + iVar1 + 0x10),
                         *(undefined4 *)(iVar1 + DAT_ram_0018c3e0 + 0x14));
        iVar4 = iVar4 + -1;
        iVar3 = iVar3 + 1;
      } while (iVar4 != 0);
    }
    else {
      FUN_ram_000ee260(s_set_rx_gain_params__bin__d___d__0_ram_001ca0e8,param_1,*param_2,param_2[1],
                       (int)*(short *)(param_2 + 2),(int)*(short *)(param_2 + 4),
                       (int)*(short *)(param_2 + 6),(int)*(short *)(param_2 + 8));
      iVar3 = param_1 * 0x18;
      *(undefined1 *)(DAT_ram_0018c3e0 + 4 + iVar3) = *param_2;
      *(undefined1 *)(DAT_ram_0018c3e0 + 5 + iVar3) = param_2[1];
      iVar4 = FUN_ram_001794dc(param_1 & 0xff);
      uVar2 = FUN_ram_001795f0(*(undefined4 *)
                                (iVar4 + (uint)*(byte *)(DAT_ram_0018c3e0 + 5 + iVar3) * 4));
      iVar4 = FUN_ram_0018ab04(1,0x14,(int)*(short *)(param_2 + 2),uVar2,&local_1c);
      if (iVar4 == 0) {
        *(undefined4 *)(DAT_ram_0018c3e0 + 8 + iVar3) = local_1c;
      }
      iVar4 = FUN_ram_0018ab04(1,0x14,(int)*(short *)(param_2 + 4),uVar2,&local_1c);
      if (iVar4 == 0) {
        *(undefined4 *)(DAT_ram_0018c3e0 + 0xc + iVar3) = local_1c;
      }
      iVar4 = FUN_ram_0018ab04(2,0x14,(int)*(short *)(param_2 + 6),uVar2,&local_1c);
      if (iVar4 == 0) {
        *(undefined4 *)(DAT_ram_0018c3e0 + 0x10 + iVar3) = local_1c;
      }
      iVar4 = FUN_ram_0018ab04(2,0x14,(int)*(short *)(param_2 + 8),uVar2,&local_1c);
      if (iVar4 == 0) {
        *(undefined4 *)(DAT_ram_0018c3e0 + 0x14 + iVar3) = local_1c;
      }
    }
  }
  return;
}


