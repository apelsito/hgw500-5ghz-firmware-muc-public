/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0018b2dc */

void FUN_ram_0018b2dc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_ram_000f939c(*(undefined4 *)(param_1 + 0x3b20),0xb,0,0);
  iVar1 = iVar1 * 0x1c;
  if (param_2 == 0) {
    uVar2 = STATUS32;
    if ((uVar2 & 6) != 0) {
      STATUS32 = uVar2 & 0xfffffff9;
    }
    *(uint *)(&DAT_ram_8002be5c + iVar1) = *(uint *)(&DAT_ram_8002be5c + iVar1) & 0xfffffffd;
  }
  else {
    uVar2 = STATUS32;
    if ((uVar2 & 6) != 0) {
      STATUS32 = uVar2 & 0xfffffff9;
    }
    *(uint *)(&DAT_ram_8002be5c + iVar1) = *(uint *)(&DAT_ram_8002be5c + iVar1) | 2;
    STATUS32 = uVar2;
    if ((*(uint *)(&DAT_ram_8002be5c + iVar1) & 1) == 0 ||
        (*(uint *)(&DAT_ram_8002be5c + iVar1) & 2) == 0) {
      return;
    }
    uVar2 = STATUS32;
    if ((uVar2 & 6) != 0) {
      STATUS32 = uVar2 & 0xfffffff9;
    }
    *(uint *)(&DAT_ram_8002be5c + iVar1) = *(uint *)(&DAT_ram_8002be5c + iVar1) | 4;
  }
  STATUS32 = uVar2;
  return;
}


