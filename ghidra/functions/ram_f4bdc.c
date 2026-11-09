/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f4bdc */

void FUN_ram_000f4bdc(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 0x14;
  *(undefined4 *)(&DAT_ram_001dce6c + iVar1) = 0xffffffff;
  *(int *)(&DAT_ram_001dce74 + iVar1) = param_1 * 0x200 + 0x1dc4ac;
  *(int *)(&DAT_ram_001dce78 + iVar1) = param_1 * 100 + 0x1dccdc;
  *(undefined **)(&DAT_ram_001dce7c + iVar1) = &DAT_ram_001dccac + param_1 * 0xc;
  *(undefined **)(&DAT_ram_001dccac + param_1 * 0xc) = (&PTR_DAT_ram_001dcebc_ram_0018ccd0)[param_1]
  ;
  iVar1 = *(int *)(&DAT_ram_001dce7c + iVar1);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(&DAT_ram_0018cce0 + param_1 * 4);
  *(undefined4 *)(iVar1 + 8) = 0;
  return;
}


