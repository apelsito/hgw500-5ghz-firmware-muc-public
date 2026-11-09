/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001094f4 */

void FUN_ram_001094f4(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  
  uVar3 = param_2[500];
  uVar1 = param_2[0x1f5];
  puVar5 = param_2 + 0x1ff;
  FUN_ram_000ee260(s_Node__d__qn__p_flg_0x_02x_fdcnt__ram_001c023c,param_3,param_2,
                   *(undefined1 *)(param_2 + 0x116),param_2[300],param_2[0x131],param_2[0x132],
                   param_2[0x138],param_2[0x13b],param_2[0x12d]);
  FUN_ram_000ee260(s_qtn_flg_0x_x_ram_001c0288,param_2[0xe3]);
  FUN_ram_000ee260(s_ncidx__d_ciph__d_pad__d_tm__x__x_ram_001c029c,*(undefined1 *)(param_2 + 0x19f),
                   *(undefined1 *)((int)param_2 + 0x67e),*(undefined1 *)((int)param_2 + 0x67f),uVar1
                   ,uVar3,param_2[0x34a],*(undefined1 *)((int)param_2 + 0x40e));
  FUN_ram_000ee260(s_vap__p_ic__p_fl_0x_04x_fail__d_i_ram_001c02d0,*param_2,param_2[1],
                   *(undefined2 *)(param_2 + 3),*(undefined1 *)((int)param_2 + 0xe),
                   *(undefined2 *)(param_2 + 6),*(undefined2 *)((int)param_2 + 0x1a),
                   *(undefined2 *)(param_2 + 0xf),*(undefined1 *)(param_2 + 0x19),
                   (int)param_2 + 0x96);
  FUN_ram_000ee260(s_htc__cap__d_ss__d__d_ps__d_sp__d_ram_001c0318,
                   *(undefined2 *)((int)param_2 + 0x6e),*(undefined1 *)(param_2 + 0x1c),
                   *(undefined1 *)((int)param_2 + 0x71),*(undefined1 *)((int)param_2 + 0x72),
                   *(undefined1 *)((int)param_2 + 0x73),*(undefined2 *)(param_2 + 0x1d),
                   *(undefined2 *)((int)param_2 + 0x76),*(undefined2 *)((int)param_2 + 0x82),
                   *(undefined2 *)(param_2 + 0x21));
  FUN_ram_000ee260(s_parm__d_mcs__x__x__x__x__x__x__x_ram_001c0354,
                   *(undefined1 *)((int)param_2 + 0x86),*(undefined1 *)(param_2 + 0x1e),
                   *(undefined1 *)((int)param_2 + 0x79),*(undefined1 *)((int)param_2 + 0x7a),
                   *(undefined1 *)((int)param_2 + 0x7b),*(undefined1 *)(param_2 + 0x1f),
                   *(undefined1 *)((int)param_2 + 0x7d),*(undefined1 *)((int)param_2 + 0x7d),
                   *(undefined1 *)((int)param_2 + 0x7f),*(undefined1 *)(param_2 + 0x20),
                   *(undefined1 *)((int)param_2 + 0x81));
  FUN_ram_000ee260(s_hti__chan__d_byte__02x__02x__02x_ram_001c0388,
                   *(undefined1 *)((int)param_2 + 0x8b),*(undefined1 *)(param_2 + 0x23),
                   *(undefined1 *)((int)param_2 + 0x8d),*(undefined1 *)((int)param_2 + 0x8e),
                   *(undefined1 *)((int)param_2 + 0x8f),*(undefined1 *)(param_2 + 0x24),
                   *(undefined1 *)((int)param_2 + 0x91),*(undefined1 *)((int)param_2 + 0x92),
                   *(undefined1 *)((int)param_2 + 0x93),*(undefined1 *)((int)param_2 + 0xa3),
                   *(undefined1 *)((int)param_2 + 0xc3));
  iVar4 = 0;
  iVar2 = 0x10;
  do {
    FUN_ram_00109450(param_2,iVar4);
    iVar2 = iVar2 + -1;
    iVar4 = iVar4 + 1;
  } while (iVar2 != 0);
  iVar2 = 0;
  iVar4 = 4;
  do {
    if (puVar5[-0xdc] == 0) {
      FUN_ram_000ee260(s_fd_q__d__empty_ram_001c03e0,iVar2);
    }
    else {
      FUN_ram_000ee260(s_fd_q__d___ram_001c03f4,iVar2);
      puVar6 = (undefined4 *)puVar5[-0xdc];
      if (puVar6 != (undefined4 *)0x0) {
        iVar7 = 0;
        do {
          FUN_ram_000ee260(s___d_t__d__p_>_ram_001c0400,iVar7,(*(uint *)*puVar6 & 0xf0) >> 4,puVar6)
          ;
          puVar6 = (undefined4 *)puVar6[0x3b];
          iVar7 = iVar7 + 1;
        } while (puVar6 != (undefined4 *)0x0);
      }
      FUN_ram_000ee260(0x1c0000);
    }
    puVar5 = puVar5 + 2;
    iVar4 = iVar4 + -1;
    iVar2 = iVar2 + 1;
  } while (iVar4 != 0);
  return;
}


