/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013d170 */

void FUN_ram_0013d170(int param_1,int param_2,uint param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  if (param_4 != 0) {
    *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1;
    if ((param_3 & 0x40) == 0) {
      cVar4 = (char)(param_3 >> 4) * '\n' + ((byte)param_3 & 0xf);
    }
    else {
      uVar5 = (param_3 & 0xffffffbf) + 0x21;
      cVar4 = (char)uVar5;
      FUN_ram_000ee260(s_Fixed_rate_set_to_UEQM_rate__d_ram_001c4c74,uVar5 & 0xff);
    }
    *(char *)(param_1 + 0x41) = cVar4;
    *(char *)(param_1 + 0x42) = cVar4;
    *(char *)(param_1 + 0x43) = cVar4;
    *(char *)(param_1 + 0x44) = cVar4;
    return;
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffffe;
  bVar3 = 0x80;
  bVar1 = false;
  if ((param_3 & 0x7f000000) == 0) {
    if ((param_3 & 0x10000) != 0) {
      param_3 = param_3 & 0xffff;
      iVar2 = 0;
      goto LAB_ram_0013d238;
    }
    if ((param_3 & 0x80) == 0) {
      bVar3 = 0;
    }
    param_3 = (param_3 & 0xf) << 4 | param_3 & 0xf;
    param_3 = param_3 << 8 | param_3;
  }
  else {
    bVar1 = true;
    param_3 = param_3 & 0xffffff | param_3 << 0x18;
  }
  iVar2 = 0;
LAB_ram_0013d238:
  do {
    while( true ) {
      if (!bVar1) break;
      *(byte *)(param_1 + iVar2 + 0x41) = (byte)param_3 & 0x7f | bVar3;
      param_3 = (int)param_3 >> 8;
      iVar2 = iVar2 + 1;
      if (3 < iVar2) {
        return;
      }
    }
    *(byte *)(param_1 + iVar2 + 0x41) = (byte)param_3 & 0xf | bVar3;
    param_3 = (int)param_3 >> 4;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}


