/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00108464 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_00108464(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_ram_8002c8bc == '\x03') {
    uVar1 = FUN_ram_000f939c(*(undefined4 *)(param_1 + 0x3b20),6,0,0);
    FUN_ram_000e83ec(uVar1,&LAB_ram_0012a904,param_1,0,&LAB_ram_0012a958,param_1);
    uVar1 = FUN_ram_000f939c(*(undefined4 *)(param_1 + 0x3b20),7,0,0);
    FUN_ram_000e83ec(uVar1,&LAB_ram_80024b84,param_1,0,&LAB_ram_80025ea4,param_1);
    uVar1 = FUN_ram_000f939c(*(undefined4 *)(param_1 + 0x3b20),10,0,0);
    FUN_ram_000e83ec(uVar1,&LAB_ram_001136e0,param_1,0,&LAB_ram_001138dc,param_1);
    uVar1 = FUN_ram_000f939c(*(undefined4 *)(param_1 + 0x3b20),0xd,0,0);
    FUN_ram_000e83ec(uVar1,&LAB_ram_00113a54,param_1,0,&LAB_ram_00113a14,param_1);
    _DAT_ram_e0000048 = 0xffff;
    sync();
    uVar1 = FUN_ram_000f939c(*(undefined4 *)(param_1 + 0x3b20),9,0,0);
    FUN_ram_000e83ec(uVar1,0,0,0,&LAB_ram_001137f8,param_1);
    uVar1 = FUN_ram_000f939c(*(undefined4 *)(param_1 + 0x3b20),8,0,0);
    FUN_ram_000e83ec(uVar1,&LAB_ram_0012c3ac,param_1,0,&LAB_ram_0012c550,param_1);
    uVar1 = FUN_ram_000f939c(*(undefined4 *)(param_1 + 0x3b20),0xb,0,0);
    FUN_ram_000e83ec(uVar1,FUN_ram_0018b084,param_1,0,&LAB_ram_0018b3e8,param_1);
    FUN_ram_000e83ec(0x1f,0,0,0,&LAB_ram_80025fb4,param_1);
  }
  return 0;
}


