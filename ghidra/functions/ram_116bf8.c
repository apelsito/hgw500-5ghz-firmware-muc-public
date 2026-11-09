/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00116bf8 */

void FUN_ram_00116bf8(undefined1 *param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = param_1[1];
  uVar2 = *(ushort *)(param_1 + 0x16);
  FUN_ram_00116b84(param_2);
  if (param_3 != (undefined4 *)0x0) {
    FUN_ram_000ee260(s_rxstat___x__x__x__x__x__x_ram_001c1eb4,*param_3,param_3[1],param_3[2],
                     param_3[3],param_3[4],param_3[5]);
  }
  FUN_ram_000ee260(s_fc_0x_x_0x_x__dur_0__0x_x__dur_1_ram_001c1ed4,*param_1,param_1[1],param_1[2],
                   param_1[3]);
  FUN_ram_000ee260(s_seq_0x_x_more_data__d_order__d_f_ram_001c1f00,uVar2,bVar1 >> 5 & 1,bVar1 >> 7,
                   (uVar2 & 0xf) != 0 || (bVar1 & 4) != 0);
  FUN_ram_000ee260(s_addr1___pM_ram_001c1f2c,param_1 + 4);
  FUN_ram_000ee260(s_addr2___pM_ram_001c1f3c,param_1 + 10);
  FUN_ram_000ee260(s_addr3___pM_ram_001c1f4c,param_1 + 0x10);
  iVar3 = 0;
  iVar4 = 8;
  do {
    FUN_ram_000ee260(s__x__x__x__x__x__x__x__x__x__x__x_ram_001c1f5c,param_1[iVar3],
                     param_1[iVar3 + 1],param_1[iVar3 + 2],param_1[iVar3 + 3],param_1[iVar3 + 4],
                     param_1[iVar3 + 5],param_1[iVar3 + 6],param_1[iVar3 + 7],param_1[iVar3 + 8],
                     param_1[iVar3 + 9],param_1[iVar3 + 10],param_1[iVar3 + 0xb],
                     param_1[iVar3 + 0xc],param_1[iVar3 + 0xd],param_1[iVar3 + 0xe],
                     param_1[iVar3 + 0xf]);
    iVar4 = iVar4 + -1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 != 0);
  return;
}


