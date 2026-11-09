/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00107214 */

void FUN_ram_00107214(int param_1,char param_2)

{
  uint uVar1;
  
  *(char *)(param_1 + 0x1d) = param_2;
  if (((param_2 == '\x0e' || param_2 == '\r') || param_2 == '\f') || param_2 == '\v') {
LAB_ram_00107260:
    DAT_ram_0018c0f8 = 1;
    FUN_ram_000e6c98(4);
  }
  else {
    if (param_2 == '\b') {
      uVar1 = *(uint *)(param_1 + 0x2c);
joined_r0x00107254:
      if ((uVar1 & 0x40000000) != 0) goto LAB_ram_00107260;
    }
    else if (param_2 == '\t') {
      uVar1 = *(uint *)(param_1 + 0x2c);
      goto joined_r0x00107254;
    }
    DAT_ram_0018c0f8 = 0;
  }
  return;
}


