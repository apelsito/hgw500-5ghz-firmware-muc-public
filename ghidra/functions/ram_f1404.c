/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f1404 */

undefined4 FUN_ram_000f1404(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 **)(param_1 + 0x20) = &DAT_ram_6003a3c8;
  DAT_ram_001cb2b0 = 0;
  DAT_ram_001cb298 = DAT_ram_001cb298 | 0x8000;
  DAT_ram_001cb2bc = 0;
  DAT_ram_001cb2c4 = 0xf;
  DAT_ram_001cb2c0 = 0;
  DAT_ram_001cb2b4 = 0;
  DAT_ram_001cb2b8 = &DAT_ram_001cb2b4;
  DAT_ram_001cb2c8 = 0;
  DAT_ram_001cb2cc = &DAT_ram_001cb2c8;
  iVar1 = FUN_ram_000ee73c(0x140,0);
  if (iVar1 == 0) {
    FUN_ram_000ee260(s__s__Error_allocating_msg_buffers_ram_001bdfcc,s_uc_hostlink_init_ram_001a5858
                    );
    uVar2 = 0xc;
  }
  else {
    FUN_ram_000eea80(iVar1,0,0x140);
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *DAT_ram_001cb2b8 = iVar1;
    DAT_ram_001cb2b8 = (int *)(iVar1 + 0x24);
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *DAT_ram_001cb2b8 = iVar1 + 0x28;
    DAT_ram_001cb2b8 = (int *)(iVar1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x74) = 0;
    *DAT_ram_001cb2b8 = iVar1 + 0x50;
    DAT_ram_001cb2b8 = (int *)(iVar1 + 0x74);
    *(undefined4 *)(iVar1 + 0x9c) = 0;
    *DAT_ram_001cb2b8 = iVar1 + 0x78;
    DAT_ram_001cb2b8 = (int *)(iVar1 + 0x9c);
    *(undefined4 *)(iVar1 + 0xc4) = 0;
    *DAT_ram_001cb2b8 = iVar1 + 0xa0;
    DAT_ram_001cb2b8 = (int *)(iVar1 + 0xc4);
    *(undefined4 *)(iVar1 + 0xec) = 0;
    *DAT_ram_001cb2b8 = iVar1 + 200;
    DAT_ram_001cb2b8 = (int *)(iVar1 + 0xec);
    *(undefined4 *)(iVar1 + 0x114) = 0;
    *DAT_ram_001cb2b8 = iVar1 + 0xf0;
    DAT_ram_001cb2b8 = (int *)(iVar1 + 0x114);
    *(undefined4 *)(iVar1 + 0x13c) = 0;
    *DAT_ram_001cb2b8 = iVar1 + 0x118;
    uVar2 = 0;
    DAT_ram_001cb2b8 = (int *)(iVar1 + 0x13c);
  }
  return uVar2;
}


