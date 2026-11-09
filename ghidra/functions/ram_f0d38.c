/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f0d38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_000f0d38(int param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 local_20 [4];
  
  uVar3 = *(undefined1 *)(param_1 + 0x12);
  FUN_ram_000eea80(param_1 + 0x2c,0,0x34);
  iVar4 = FUN_ram_000f0bdc(param_1);
  if (-1 < iVar4) {
    *(int *)(param_1 + 0x30) = iVar4;
    if ((*(ushort *)(param_1 + 0xe) & 0x40) == 0) {
      uVar2 = FUN_ram_000f1c90(uVar3,local_20);
      *(undefined1 *)(param_1 + 0x34) = uVar2;
      *(undefined1 *)(param_1 + 0x35) = local_20[0];
      uVar2 = FUN_ram_000f1c90(uVar3,local_20);
      *(undefined1 *)(param_1 + 0x48) = uVar2;
      iVar4 = 0xc;
      *(undefined1 *)(param_1 + 0x49) = local_20[0];
      iVar5 = FUN_ram_000ee73c(0xc,0);
      *(int *)(param_1 + 0x40) = iVar5;
      if (iVar5 == 0) {
        FUN_ram_000ee260(s_Error_allocating_scan_fifo_ram_001bded0);
      }
      else {
        FUN_ram_000eea80(iVar5,0,0xc);
        uVar2 = FUN_ram_000f1c6c();
        *(undefined1 *)(*(int *)(param_1 + 0x40) + 8) = uVar2;
        uVar2 = FUN_ram_000f1c6c();
        *(undefined1 *)(*(int *)(param_1 + 0x40) + 9) = uVar2;
        uVar3 = FUN_ram_000f1c90(uVar3,local_20);
        *(undefined1 *)(param_1 + 0x3d) = uVar3;
        puVar6 = *(undefined4 **)(param_1 + 0x40);
        *(undefined1 *)(param_1 + 0x3c) = local_20[0];
        *puVar6 = 0;
        puVar6[1] = 0;
        iVar5 = FUN_ram_000ee73c(8,0);
        *(int *)(param_1 + 0x38) = iVar5;
        if (iVar5 == 0) {
          FUN_ram_000ee260(s_Error_allocating_rx_fifo_ram_001bdeec);
        }
        else {
          FUN_ram_000eea80(iVar5,0,8);
          puVar6 = (undefined4 *)FUN_ram_000ee73c(0x10,0);
          if (puVar6 == (undefined4 *)0x0) {
            FUN_ram_000ee260(s_Error_allocating_host_rxdesc_fif_ram_001bdf08);
            **(undefined4 **)(param_1 + 0x38) = 0;
            iVar5 = **(int **)(param_1 + 0x38);
          }
          else {
            FUN_ram_000eea80(puVar6,0,0x10);
            *puVar6 = 0;
            puVar6[2] = 0x400;
            **(undefined4 **)(param_1 + 0x38) = puVar6;
            iVar5 = **(int **)(param_1 + 0x38);
          }
          if (iVar5 != 0) {
            uVar3 = FUN_ram_000f1c6c();
            *(undefined1 *)(*(int *)(param_1 + 0x38) + 4) = uVar3;
            FUN_ram_000e83ec(8,&LAB_ram_000f11c8,0,0,&LAB_ram_000f174c,param_1);
            if (*(char *)(param_1 + 0x12) == '\0') {
              uVar1 = 0x40;
            }
            else {
              uVar1 = 0x8000;
            }
            _DAT_ram_e0000020 = _DAT_ram_e0000020 | uVar1;
            *(undefined4 *)(param_1 + 0x58) = 0;
            *(int *)(param_1 + 0x5c) = param_1 + 0x58;
            return 0;
          }
          FUN_ram_000ee260(s_Error_allocating_host_rx_fifo_ram_001bdf34);
          FUN_ram_000ee834(*(undefined4 *)(param_1 + 0x38));
        }
        FUN_ram_000f1d08(*(undefined1 *)(param_1 + 0x3d),*(undefined1 *)(param_1 + 0x3c));
        FUN_ram_000f1bd8(*(undefined1 *)(*(int *)(param_1 + 0x40) + 8));
        FUN_ram_000f1bd8(*(undefined1 *)(*(int *)(param_1 + 0x40) + 9));
        FUN_ram_000ee834(*(undefined4 *)(param_1 + 0x40));
      }
      FUN_ram_000f1d08(*(undefined1 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x49));
      FUN_ram_000f1d08(*(undefined1 *)(param_1 + 0x34),*(undefined1 *)(param_1 + 0x35));
      FUN_ram_000f17c8(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(int *)(param_1 + 0x5c) = param_1 + 0x58;
      iVar4 = 0;
    }
  }
  return iVar4;
}


