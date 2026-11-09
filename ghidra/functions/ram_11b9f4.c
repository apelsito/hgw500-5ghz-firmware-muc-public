/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011b9f4 */

void FUN_ram_0011b9f4(int param_1,uint param_2)

{
  if ((((*(ushort *)(param_1 + 0xc) >> 3 ^ 1) & 1) == 0) && (param_2 != *(byte *)(param_1 + 0x682)))
  {
    if (2 < DAT_ram_8002c228) {
      FUN_ram_000ee260(s_GI____pM__sgi__u_ram_001c2ad0,param_1 + 0x96,param_2);
    }
    DAT_ram_80037908 = (uint)*(byte *)(param_1 + 0x67c);
    DAT_ram_80037904 = DAT_ram_80037904 + 1;
    DAT_ram_8003790c = param_2;
    *(char *)(param_1 + 0x682) = (char)param_2;
  }
  return;
}


