/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e9288 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_000e9288(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  DAT_ram_6003a3d0 = 0x69;
  FUN_ram_000eea80(&DAT_ram_001cb24c,0,0x8c);
  FUN_ram_000eea80(&DAT_ram_8002be4c,0,0x380);
  DAT_ram_6003a3d0 = 0x71;
  FUN_ram_000eeb28(&DAT_ram_80030800,0,0x6800);
  DAT_ram_6003a3d0 = 0x74;
  FUN_ram_000eeb28(&DAT_ram_00222e00,0,&LAB_ram_0017d000);
  DAT_ram_001cb25c = &DAT_ram_80030800;
  DAT_ram_001cb260 = &DAT_ram_80037000;
  DAT_ram_001cb264 = 0;
  DAT_ram_001cb268 = &DAT_ram_001cb264;
  DAT_ram_001cb24c = &DAT_ram_00222e00;
  DAT_ram_001cb250 = FUN_ram_0039fe00;
  DAT_ram_001cb254 = 0;
  DAT_ram_001cb258 = &DAT_ram_001cb254;
  DAT_ram_6003a3d0 = 0x7a;
  DAT_ram_0018c038 = (undefined4 *)FUN_ram_000ee73c(0xc,0);
  if (DAT_ram_0018c038 == (undefined4 *)0x0) {
    pcVar1 = s_Could_not_allocate_shared_print_b_ram_001bcb58;
  }
  else {
    uVar2 = FUN_ram_000ee73c(0x10000,0);
    DAT_ram_0018c038[2] = uVar2;
    if (DAT_ram_0018c038[2] != 0) {
      DAT_ram_0018c038[1] = 0x10000;
      *DAT_ram_0018c038 = 0;
      *(undefined4 **)(param_1 + 0x24) = DAT_ram_0018c038;
      FUN_ram_000f1a14();
      DAT_ram_6003a3d0 = 0x7f;
      iVar3 = FUN_ram_000f1404(param_1);
      if (iVar3 == 0) {
        DAT_ram_6003a3d0 = 0x82;
        FUN_ram_000eea80(&DAT_ram_001cb2d8,0,0x4c);
        DAT_ram_001cb26c = 0;
        DAT_ram_6003a3d0 = 0x85;
        DAT_ram_001cb270 = &DAT_ram_001cb26c;
        iVar3 = FUN_ram_000e9110();
        if (iVar3 == 0) {
          DAT_ram_6003a3d0 = 0x87;
          FUN_ram_000e91d8();
          COUNT0 = 0;
          _DAT_ram_f3000044 = _DAT_ram_f3000044 | 1;
          DAT_ram_001cb2d4 = 1;
          DAT_ram_001cb2d0 = 0;
          DAT_ram_6003a3d0 = 0x98;
          FUN_ram_000f1d70();
          return 0;
        }
        pcVar1 = s_uc_netbuf_init___ram_001bcc10;
      }
      else {
        pcVar1 = s_uc_hostlink_init_p_shared_params_ram_001bcbec;
      }
      goto LAB_ram_000e944c;
    }
    pcVar1 = s_Could_not_allocate_shared_print_b_ram_001bcbbc;
  }
  FUN_ram_000ee260(pcVar1);
  pcVar1 = s_uc_lhost_printbuf_init_p_shared__ram_001bcb94;
LAB_ram_000e944c:
  FUN_ram_000ee260(s__s_failed_ram_001bcb88,pcVar1);
  FUN_ram_000f1d70();
  return 0xffffffff;
}


