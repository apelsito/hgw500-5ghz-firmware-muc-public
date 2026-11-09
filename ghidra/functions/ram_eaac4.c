/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000eaac4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_000eaac4(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  byte local_9c;
  byte abStack_9b [127];
  undefined1 local_1c;
  undefined1 uStack_1b;
  
  uVar6 = FUN_ram_000f5e44();
  iVar2 = (int)uVar6;
  iVar5 = 0;
  FUN_ram_000eea80(&local_9c,0,0x80);
  FUN_ram_000f5c28(&local_9c,(int)((ulonglong)uVar6 >> 0x20),&stack0x00000008);
  uVar1 = DAT_ram_001a54d0;
  uVar4 = (uint)local_9c;
  if (uVar4 == 0) {
    if (iVar2 < 1) {
      return;
    }
  }
  else {
    iVar3 = iVar5;
    do {
      uStack_1b = (undefined1)((ushort)uVar1 >> 8);
      _local_1c = CONCAT11(uStack_1b,(char)uVar4);
      iVar5 = FUN_ram_000ee188(&local_1c);
      if (iVar5 < 0) {
        do {
          _DAT_ram_f0000000 = uVar4;
        } while ((_DAT_ram_f0000014 & 0x40) == 0);
      }
      iVar5 = iVar3 + 1;
      uVar4 = (uint)abStack_9b[iVar3];
      iVar3 = iVar5;
    } while (uVar4 != 0);
    if (iVar2 <= iVar5) {
      return;
    }
  }
  uVar1 = DAT_ram_001a54d0;
  do {
    uStack_1b = (undefined1)((ushort)uVar1 >> 8);
    _local_1c = CONCAT11(uStack_1b,0x20);
    iVar3 = FUN_ram_000ee188(&local_1c);
    if (iVar3 < 0) {
      do {
      } while ((_DAT_ram_f0000014 & 0x40) == 0);
      _DAT_ram_f0000000 = 0x20;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < iVar2);
  return;
}


