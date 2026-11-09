/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000e6110 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_000e6110(void)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  if ((_DAT_ram_e00000bc < (undefined4 *)0x80000000) ||
     ((undefined4 *)0x8007ffff < _DAT_ram_e00000bc)) {
    if (_DAT_ram_e00000bc < (undefined4 *)0x8000000) {
      puVar3 = _DAT_ram_e00000bc + 0x10000000;
    }
    else {
      puVar3 = _DAT_ram_e00000bc;
      if (_DAT_ram_e00000bc < (undefined4 *)0xc0000000) goto LAB_ram_000e617c;
    }
  }
  else {
    puVar3 = _DAT_ram_e00000bc + -0x8000000;
  }
  if (puVar3 != (undefined4 *)0x0) {
    DAT_ram_0018c02c = *puVar3;
    FUN_ram_000ee260(s_g_tqe_sem_en__u_ram_001bc4a4,DAT_ram_0018c02c);
    FUN_ram_00106394();
    FUN_ram_000ee260(s_build_date__s_ram_001bc4b8,s_Fri__21_Oct_2016_18_16_52__0700_ram_001bc4c8);
    FUN_ram_000ee260(s_slow_heap_begin__p_end__p_ram_001bc4e8,&DAT_ram_00222e00,FUN_ram_0039fe00);
    FUN_ram_000ee260(s_fast_heap_begin__p_end__p_ram_001bc504,&DAT_ram_80030800,&DAT_ram_80037000);
    FUN_ram_000ee260(s_stack_start__p_sp__p_ram_001bc520,&DAT_ram_8003efc0,&stack0xffffffe4);
    uVar2 = DC_CTRL;
    if (((uVar2 ^ 1) & 1) == 0) {
      puVar7 = &DAT_ram_001bc564;
    }
    else {
      puVar7 = &DAT_ram_001bc558;
    }
    if (DAT_ram_8002c8bc == '\x03') {
      puVar6 = &DAT_ram_001bc55c;
    }
    else {
      puVar6 = &DAT_ram_001bc568;
    }
    FUN_ram_000ee260(s_calstate_is__d___s___dcache__s_ram_001bc538,DAT_ram_8002c8bc,puVar6,puVar7);
    DAT_ram_800261c0 = DAT_ram_800261c0 | 2;
    FUN_ram_000e5f50(puVar3);
    FUN_ram_000e693c();
    iVar4 = FUN_ram_000e6c28(7);
    if (iVar4 == 0) {
      iVar4 = FUN_ram_000e6c28(6);
      if (iVar4 == 0) {
        iVar4 = FUN_ram_000e6c28(5);
        if (iVar4 == 0) {
          if (DAT_ram_0018c029 == '\x15') {
            cVar1 = *(char *)((int)puVar3 + 0x45);
            DAT_ram_0018c028 = 2;
          }
          else {
            cVar1 = *(char *)((int)puVar3 + 0x45);
            DAT_ram_0018c028 = 4;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3 + 0x45);
          DAT_ram_0018c028 = 2;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3 + 0x45);
        DAT_ram_0018c028 = 2;
      }
    }
    else {
      cVar1 = *(char *)((int)puVar3 + 0x45);
      DAT_ram_0018c028 = 3;
    }
    if (cVar1 == '\x01') {
      DAT_ram_8002c8b0 = 1;
      FUN_ram_000ee260(s_slow_eth__d_ram_001bc56c,1);
    }
    else {
      DAT_ram_8002c8b0 = 0;
    }
    _DAT_ram_e600001c = _DAT_ram_e600001c & 0xfffffffb;
    DAT_ram_0018c010 = FUN_ram_00171ea0();
    DAT_ram_0018c014 = FUN_ram_00171eb8();
    FUN_ram_000ee260(s_RFIC_version__d_rev__d_ram_001bc57c,DAT_ram_0018c010,DAT_ram_0018c014);
    if (DAT_ram_0018c010 == 3) {
      (*DAT_ram_002017bc)(0,0,1,1,DAT_ram_8002c8bc == '\x01');
    }
    else {
      FUN_ram_0016fdd8(0,0,0,1,DAT_ram_8002c8bc == '\x01');
    }
    FUN_ram_000ee260(s_os_uc__after_bb_rf_complete_atta_ram_001bc594);
    DAT_ram_6003a3c0 = 0x16a;
    iVar4 = FUN_ram_000e5fd8(0,&DAT_ram_001cb240,&DAT_ram_800261e8);
    if (iVar4 != 0) {
      FUN_ram_000ee260(s_Halting_from_attach_ram_001bc5bc);
      FUN_ram_80030314();
    }
    if (1 < DAT_ram_0018c018) {
      DAT_ram_6003a3c0 = 0x171;
      iVar4 = FUN_ram_000e5fd8(1,&DAT_ram_001cb246,0);
      if (iVar4 != 0) {
        FUN_ram_000ee260(s_Halting_from_attach_ram_001bc5bc);
        FUN_ram_80030314();
      }
      FUN_ram_000ee260(s_qtn1_attached___ram_001bc5d4);
    }
    DAT_ram_6003a3c0 = 0x17b;
    if (DAT_ram_8002c8bc == '\x03') {
      FUN_ram_000f2c90();
    }
    DAT_ram_6003a3c0 = 0x185;
    FUN_ram_000efe3c(5,&DAT_ram_6003b3d8,0,0);
    FUN_ram_000efe3c(0x16,&DAT_ram_0020fcf8,0,0);
    DAT_ram_6003a3c0 = 0x193;
    FUN_ram_000ee260(s_enable_IRQs_ram_001bc5e8);
    uVar2 = STATUS32;
    if (((uVar2 & 2) != 0) || (uVar2 = STATUS32, (uVar2 & 4) != 0)) {
      FUN_ram_80030314();
    }
    uVar2 = STATUS32;
    STATUS32 = uVar2 | 6;
    DAT_ram_6003a3c0 = 0x19b;
    FUN_ram_00156ca8(&DAT_ram_001cb24c,puVar3);
    DAT_ram_6003a3c0 = 0x19e;
    FUN_ram_000efe3c(0xb,0,0,0);
    DAT_ram_6003a3c0 = 0x1a1;
    uVar5 = FUN_ram_0018ae6c();
    puVar3[0x5d] = uVar5;
    FUN_ram_000f6bf8();
    FUN_ram_000e94e8(&DAT_ram_0018c000,0);
    FUN_ram_80023900(puVar3);
    return 0;
  }
LAB_ram_000e617c:
  FUN_ram_000ee260(s_SPARE_register_has_NULL_address_ram_001bc480);
  FUN_ram_80030314();
  return 0;
}


