/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011c6d4 */

void FUN_ram_0011c6d4(undefined4 param_1,int param_2,int param_3)

{
  char cVar1;
  
  FUN_ram_0039fe00(param_2 + 0xa4,param_3 + 0xd,0x1e);
  FUN_ram_0039fe00(param_2 + 0xc4,param_3 + 0x2c,0x4d);
  *(undefined1 *)(param_2 + 0xa3) = *(undefined1 *)(param_3 + 0xc);
  cVar1 = *(char *)(param_3 + 0x2b);
  *(char *)(param_2 + 0xc3) = cVar1;
  if (cVar1 != '\0') {
    *(ushort *)(param_2 + 0xc) = *(ushort *)(param_2 + 0xc) | 8;
  }
  return;
}


