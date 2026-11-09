/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:001597fc */

uint FUN_ram_001597fc(int param_1,int param_2,int param_3,uint param_4,int param_5)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  
  uVar3 = *(byte *)(param_2 + 3) & 0xf;
  puVar2 = (ushort *)
           (((int)(uint)*(byte *)(param_2 + 3) >> 4 & 3U) * 0x14 +
            (uint)(*(char *)(param_1 + 0x682) != '\0') * 0xa0 +
            (uint)*(byte *)(param_2 + 0x1f) * 0x140 + 0x1a9aec);
  if (uVar3 < 10) {
    uVar1 = puVar2[uVar3];
  }
  else {
    uVar1 = *puVar2;
  }
  uVar3 = (uint)uVar1 * *(int *)(param_3 + 4);
  puVar2 = (ushort *)
           ((uint)((param_4 & 0x8000) != 0) * 0xa0 + ((param_4 & 0x600) >> 9) * 0x140 +
            ((int)(param_4 & 0x7f) >> 4 & 3U) * 0x14 + 0x1a9aec);
  if ((param_4 & 0xf) < 10) {
    uVar1 = puVar2[param_4 & 0xf];
  }
  else {
    uVar1 = *puVar2;
  }
  if (uVar3 >> 0xd < (uint)uVar1 * param_5 >> 0xd) {
    return (uint)uVar1 * param_5 >> 0xe;
  }
  return uVar3 >> 0xe;
}


