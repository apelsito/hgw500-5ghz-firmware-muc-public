/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80030574 */

/* WARNING: This function may have set the stack pointer */

void FUN_ram_80030574(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  
  DAT_ram_80030748 = DAT_ram_800307d4;
  DAT_ram_800307d4 = ECR;
  DAT_ram_8003074c = DAT_ram_800307d8;
  DAT_ram_800307d8 = EFA;
  DAT_ram_80030750 = DAT_ram_800307dc;
  DAT_ram_800307dc = ERET;
  DAT_ram_800307e0 = ERSTATUS;
  DAT_ram_800307e4 = STATUS32;
  DAT_ram_800307e8 = STATUS32_L1;
  DAT_ram_800307ec = STATUS32_L2;
  DAT_ram_800307f0 = ICAUSE1;
  DAT_ram_800307f4 = ICAUSE2;
  uVar1 = STATUS32;
  STATUS32 = uVar1 & 0xfffffff9;
  sync();
  MMU_PID_and_MPUEN = 0;
  DAT_ram_80030758 = param_2;
  DAT_ram_8003075c = param_3;
  DAT_ram_80030760 = param_4;
  DAT_ram_80030764 = param_5;
  DAT_ram_80030768 = param_6;
  DAT_ram_8003076c = param_7;
  DAT_ram_80030770 = param_8;
  DAT_ram_800307c4 = (undefined1 *)register0x0070;
  FUN_ram_000eba14();
  STATUS32 = 1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


