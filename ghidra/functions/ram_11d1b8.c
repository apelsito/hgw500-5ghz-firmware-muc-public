/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0011d1b8 */

void FUN_ram_0011d1b8(undefined4 param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_70 [16];
  undefined1 *local_60;
  undefined1 auStack_50 [8];
  undefined1 local_48;
  uint uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined2 local_30;
  
  bVar1 = *(byte *)(param_2 + 0xa0);
  if (bVar1 == 0) {
    bVar1 = *(byte *)(param_2 + 0xa1);
  }
  else {
    uVar3 = 0;
    iVar2 = 7;
    do {
      if (((int)(uint)bVar1 >> (uVar3 & 0x1f) & 1U) != 0) {
        FUN_ram_000eea80(auStack_50,0,0x24);
        FUN_ram_000eea80(auStack_70,0,0x20);
        local_48 = 1;
        local_40 = 1;
        local_38 = (uint)*(ushort *)(param_2 + 0xa4);
        local_3c = 0;
        local_34 = 0;
        local_60 = auStack_50;
        uStack_44 = uVar3;
        FUN_ram_0039fe00(auStack_50,param_3,6);
        FUN_ram_0011cd8c(param_1,auStack_70);
      }
      iVar2 = iVar2 + -1;
      uVar3 = uVar3 + 1;
    } while (iVar2 != 0);
    DAT_ram_8003713c = DAT_ram_8003713c | 0x80000000;
    bVar1 = *(byte *)(param_2 + 0xa1);
  }
  if (bVar1 != 0) {
    uVar3 = 0;
    iVar2 = 7;
    do {
      if (((int)(uint)bVar1 >> (uVar3 & 0x1f) & 1U) != 0) {
        FUN_ram_000eea80(auStack_50,0,0x24);
        FUN_ram_000eea80(auStack_70,0,0x20);
        local_48 = 1;
        local_40 = 1;
        local_38 = (uint)*(ushort *)(param_2 + 0xa4);
        local_3c = 0;
        local_30 = 3;
        local_34 = 0;
        local_60 = auStack_50;
        uStack_44 = uVar3;
        FUN_ram_0039fe00(auStack_50,param_3,6);
        FUN_ram_0011d044(param_1,auStack_70);
      }
      iVar2 = iVar2 + -1;
      uVar3 = uVar3 + 1;
    } while (iVar2 != 0);
    DAT_ram_80037138 = DAT_ram_80037138 | 0x80000000;
  }
  return;
}


