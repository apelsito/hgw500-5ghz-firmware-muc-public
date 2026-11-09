/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011c39c */

void FUN_ram_0011c39c(int *param_1)

{
  int iVar1;
  
  if (*(char *)(*param_1 + 0x2c) == '\x01') {
    iVar1 = *(int *)(*param_1 + 0x38);
    *(ushort *)(iVar1 + 0x422) =
         (ushort)*(byte *)(iVar1 + 0xa1) * 2 | (ushort)((int)(*(byte *)(iVar1 + 0xa0) & 0x80) >> 7);
    return;
  }
  *(ushort *)((int)param_1 + 0x422) =
       (*(byte *)((int)param_1 + 0xa1) & 0xf ^
       (ushort)((int)(*(byte *)((int)param_1 + 0xa1) & 0xf0) >> 4)) * 0x20 + (short)param_1[6] &
       0x1ff;
  return;
}


